/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max(var_15, var_4))) & var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_9 [i_3] &= (((min((-2504 < 4), (!2503))) ? (max((((var_13 >> (2490 - 2468)))), ((var_12 ? var_7 : (arr_5 [i_0] [i_1] [6] [i_3]))))) : (((((var_7 ? 0 : -8)) | -950472137)))));
                        var_17 = var_13;

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_1] = (!(((min(12295, (arr_3 [i_1] [i_3] [i_1]))))));
                            arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_1] [i_0] = (max(((min(-8, -5))), 27));
                            arr_14 [i_0] [i_0] [i_0] [18] [i_4] = (min((max((var_7 + var_10), (var_13 / var_14))), ((max((var_12 || 61191), -7)))));
                        }
                    }

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        arr_17 [i_0] [i_1] [i_1] [10] = var_14;
                        var_18 = (-(arr_10 [i_0] [i_1] [i_1] [i_1] [7] [i_1] [18]));
                        var_19 = (~((((arr_0 [i_0]) == var_4))));
                    }
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        var_20 &= ((((!2468) ? var_2 : (max(0, 5946204304410936610)))));
                        var_21 = 18446744073709551615;
                        var_22 -= ((-108 ? var_6 : 463496695));
                        var_23 = (min(var_23, ((((max(((((arr_2 [i_1] [i_1]) >= (arr_4 [i_0] [i_1] [i_0])))), (arr_4 [i_0] [i_0] [i_2]))) != ((2032813978 ? 2483 : 31181)))))));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_22 [i_0] [i_0] [i_2] [16] = (-2504 ? 33292288 : 0);
                        var_24 = (min(((max((32 | 65526), 4))), ((65535 ? 18446744073709551609 : 111))));
                        var_25 = (min(var_25, ((max(var_12, (((var_6 << (var_10 - 9308588833075755294)))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
