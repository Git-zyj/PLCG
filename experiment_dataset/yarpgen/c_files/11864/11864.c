/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((((max(var_5, 6442175455041002726)))), var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [1] |= ((+(((arr_7 [16] [i_1 + 1]) ? -18 : (((arr_8 [i_0] [i_1 - 1] [i_1 - 1]) * (arr_8 [1] [9] [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, (((((max(65535, 13972))) & (((arr_2 [i_2]) ? (((237 ? 2612790062 : 18))) : ((222 ? 65535 : var_8)))))))));
                                var_16 = (~18);
                            }
                        }
                    }
                    var_17 -= ((~((max((arr_13 [1] [i_0 + 1] [1]), (arr_13 [12] [i_0 + 1] [12]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_18 = (arr_4 [i_0 + 1] [i_1] [i_0]);
                                var_19 = (-(((arr_11 [i_1 - 1] [i_1 - 1] [i_0 + 1] [i_0 + 1]) * (arr_11 [i_1 + 1] [i_1 + 1] [i_0 + 1] [i_0 + 1]))));
                                arr_22 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0] [i_6] = (arr_8 [i_1] [i_6] [15]);
                                arr_23 [i_1] [i_5] [i_2] [i_1 - 1] [i_1] = (~2612790062);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
