/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((var_4 ? (min(var_1, var_12)) : 32748)), var_1));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1 - 1] [i_0] [i_0 + 1] = (min((!0), ((((2019782802 ? var_8 : 2019782802)) << (((2019782802 || (arr_1 [i_2]))))))));
                    arr_10 [i_2] = (max((max(((max((arr_0 [i_0]), var_4))), (arr_8 [i_0 + 3] [i_0 + 3] [i_0 + 1]))), (((max((arr_6 [i_0] [i_0] [i_1 - 3] [i_2]), var_0)) ^ (~var_2)))));
                    arr_11 [i_2] [i_1] [i_0] [i_0 + 2] = (var_5 ^ ((((!(1011720333747274626 & 1125362601))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_18 [i_3] [i_3] [i_0 + 2] [i_0] [i_0 + 2] [i_0] [i_0 + 3] = (max(((((arr_5 [i_0] [i_0]) ^ var_6))), (arr_6 [i_0] [i_0] [i_0] [i_0])));
                                arr_19 [i_0] [i_0 + 2] [i_0] [i_1 - 4] [i_2] [i_3] [i_4] = max((max(var_1, var_2)), (((arr_14 [i_3] [i_1 + 1] [i_1 + 1] [i_3] [i_4]) ? (((min((arr_17 [i_0 + 3] [i_4] [i_2] [i_3] [i_4] [i_2]), var_10)))) : (((arr_16 [i_0] [i_1 - 4] [i_0] [i_3] [i_4]) | var_0)))));
                                arr_20 [i_4] [i_3] [i_2] [i_0] [i_1] [i_0 - 1] [i_0] = var_3;
                            }
                        }
                    }
                    arr_21 [i_0] [i_1] [i_2] [i_2] = (max((((1904688269 == var_6) ? var_3 : (((var_4 ? 4294967295 : var_10))))), (arr_4 [i_1])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                {
                    arr_32 [i_5] [i_5] [i_7 + 3] [i_6] = ((((max((((arr_0 [i_6]) ^ 8388608)), (arr_22 [i_5])))) ? ((((min(var_11, (arr_24 [i_5 + 1] [i_6] [i_7 + 1])))) & -var_7)) : var_6));
                    arr_33 [i_7] = (1 / 1101228216);
                    arr_34 [i_5] [i_5] [i_5 + 2] = ((((min(var_8, (!1)))) ? ((-((-56019278 ? var_11 : (arr_12 [i_5] [i_6] [i_6]))))) : (arr_22 [i_7])));
                }
            }
        }
    }
    #pragma endscop
}
