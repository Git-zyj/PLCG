/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((((var_1 ? var_6 : var_8))) ? var_17 : (var_16 < var_17)))) ? ((((var_3 <= ((var_2 << (var_4 - 66))))))) : (((((var_17 ? var_6 : var_14))) * ((var_0 ? var_17 : var_15))))));
    var_19 = (max(var_19, var_10));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_20 = ((-((0 ? 91 : var_8))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_21 = var_2;
                            arr_16 [i_0] [i_0] [i_1] [5] [i_0] [i_4] [i_4] = (((((((var_0 ? var_8 : var_7))))) + var_9));
                            arr_17 [i_0 + 1] [i_0] [i_0 + 1] = var_12;
                            arr_18 [i_1] [i_1] [i_0] = var_0;
                        }
                    }
                }
            }
            arr_19 [i_0] [i_0] = (((((arr_10 [i_0 + 1] [i_0 + 1]) ? (arr_10 [i_0 + 1] [i_0 + 1]) : var_5)) / (((-(arr_10 [i_0 + 1] [i_0 + 1]))))));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_22 = (((((arr_2 [i_0] [i_0 + 1]) || var_3)) || var_17));
            arr_22 [i_0] [i_5] = (arr_2 [i_0] [i_5]);
            arr_23 [i_0] [i_0] = ((0 ? 0 : 1));
            var_23 += (arr_10 [i_0 + 1] [i_5]);
            arr_24 [i_0] [i_5] = var_0;
        }
        var_24 = (((var_8 && (arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
        arr_25 [1] [i_0] &= (((arr_3 [i_0 + 1]) ? ((((((arr_8 [i_0] [i_0]) - var_16))) * (var_12 + var_17))) : ((((var_5 ^ (arr_0 [10]))) >> (var_3 << var_10)))));
    }
    #pragma endscop
}
