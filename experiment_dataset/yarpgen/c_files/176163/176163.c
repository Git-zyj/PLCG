/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((~((var_2 ? (arr_3 [i_0] [i_0]) : var_8))));
                arr_7 [i_0] [i_0] [i_1] = ((1 & ((~((max(var_4, 38)))))));
                var_19 |= var_5;

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_10 [i_2] = var_13;
                    var_20 = (max(var_20, (((~((var_18 ? (max(var_18, var_2)) : var_5)))))));
                    var_21 = (((((arr_0 [i_1]) ? var_16 : (arr_0 [i_1])))) ? (((arr_0 [i_0]) ? var_9 : var_11)) : ((max((arr_0 [i_0]), (arr_0 [i_1])))));

                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        var_22 = var_17;
                        arr_13 [i_2] [i_0] [i_0] [i_2] = ((~(arr_12 [i_0] [i_0] [11] [i_2] [i_3])));
                        var_23 ^= ((var_11 ? (((!((((arr_5 [4] [4] [i_3]) ? var_17 : var_11)))))) : -8));
                        var_24 = var_1;
                    }
                }
                arr_14 [6] [i_0] = var_0;
            }
        }
    }
    var_25 = (min((((((var_4 ? var_8 : var_0))) ? ((var_1 ? var_17 : var_9)) : var_2)), (((!(!8))))));
    var_26 = ((((((~var_14) ? var_9 : var_2))) ? var_10 : (((~((var_0 ? var_16 : var_12)))))));
    var_27 = (var_10 | var_18);
    #pragma endscop
}
