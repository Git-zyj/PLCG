/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_9 [i_1] [i_2] [i_1] = ((2798548507 >> (92 - 69)));
                    var_20 = (min(var_20, (((!((min(11361, (arr_0 [i_1 + 1])))))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    var_21 = (arr_8 [i_1] [i_1] [7] [3]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 9;i_5 += 1)
                        {
                            {
                                arr_17 [i_1] [i_4] [i_4] [5] [i_3] [i_1] [i_1] = (((arr_12 [i_5 + 1] [i_1] [i_1 + 1]) < 3129846806781767177));
                                var_22 *= (arr_13 [i_3] [i_0] [i_3] [0] [i_4] [8]);
                                var_23 = (max(var_23, (!var_6)));
                            }
                        }
                    }
                    arr_18 [0] [i_1] [5] [3] = (!(arr_15 [i_1] [i_1 - 2]));
                }
                var_24 = (((~(((arr_6 [i_1] [1] [i_1]) ? -2689854097450062591 : 1128101131)))));
                arr_19 [i_1] [i_1 - 1] [i_1] = (arr_14 [i_0]);
            }
        }
    }
    var_25 = (min(var_11, var_8));
    #pragma endscop
}
