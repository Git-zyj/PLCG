/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = ((((((!(arr_7 [i_0] [i_0 + 1] [i_1 - 1] [i_2]))))) & -2285013733635930998));
                    var_20 = (min(var_20, ((((-((var_5 / (arr_3 [i_0])))))))));
                }
            }
        }
    }
    var_21 = var_4;
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 24;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_22 = (arr_10 [i_3 - 1]);
                                arr_20 [i_4] [20] = ((!((((min(var_1, (arr_8 [8]))) << (((max((arr_16 [i_3] [i_3] [i_3] [i_3] [i_3]), 2113929216)) - 2113929189)))))));
                                var_23 = (max(var_23, ((var_2 & (((-(arr_15 [i_6] [i_6]))))))));
                                var_24 = (var_13 + ((((arr_15 [i_3] [i_4]) >> (((~-2113929192) - 2113929173))))));
                                arr_21 [i_3] [i_3] [i_3] [i_3] [i_4] [i_3] [i_3] = ((((max((arr_13 [i_4] [i_5 - 1] [i_4]), -2285013733635931005))) ? ((max((arr_11 [i_3] [i_4] [3]), ((((arr_12 [i_3]) ? var_7 : (arr_13 [i_4] [i_4] [i_5]))))))) : (max(3781916004, 7982664165804638988))));
                            }
                        }
                    }
                }
                var_25 = (((((~(arr_14 [i_4] [i_4 + 1])))) && -2285013733635930998));
            }
        }
    }
    #pragma endscop
}
