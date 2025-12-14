/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_9 [i_0] [i_0] [i_1] [i_1] [13] [i_1] = var_7;
                        var_12 |= (max(((min((arr_7 [i_0] [i_1]), (arr_4 [i_0] [i_0] [i_0])))), (min((~var_8), ((var_10 ^ (arr_5 [i_0] [i_1] [i_0] [i_0])))))));
                        arr_10 [i_0] [i_1] = 0;
                        arr_11 [i_0] [4] [i_0] |= (arr_5 [i_0] [i_1] [i_1] [i_2]);
                        var_13 = ((var_10 ? (((((arr_8 [i_0] [i_0] [14] [i_2] [i_2] [i_3]) ? 1 : (arr_4 [13] [i_1] [i_1]))) << (((arr_7 [i_0] [0]) - 29348)))) : (((arr_1 [i_2] [i_0]) | (~1)))));
                    }

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        arr_14 [i_1] = 0;
                        var_14 = (max(var_14, (((((min((arr_5 [i_2] [i_2] [i_2] [i_2]), -var_9))) - (max((min(var_7, var_5)), (arr_13 [i_2] [i_2] [i_1] [i_0]))))))));
                        arr_15 [i_0] [i_1] [i_2] [15] [i_4] = (max(var_3, (((((var_7 / (arr_5 [i_0] [i_0] [i_2] [i_1])))) ? ((((arr_5 [i_0] [i_1] [i_2] [i_1]) || (arr_4 [i_1] [i_2] [18])))) : (~6)))));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_15 -= ((((((-9223372036854775794 < (((max(var_4, var_0)))))))) > (((!var_7) ? var_1 : ((var_8 ? var_2 : var_4))))));
                        arr_20 [i_0] [i_1] [1] [i_0] = (arr_0 [17] [i_5]);
                        var_16 = ((!((((1 || 1) ? ((max(-2147483641, var_3))) : (((arr_5 [i_0] [12] [12] [i_1]) ? (arr_4 [i_1] [i_2] [i_5]) : 131008)))))));
                        arr_21 [i_1] [i_5] = var_10;
                    }
                    var_17 = (arr_7 [i_0] [i_1]);
                }
            }
        }
    }
    var_18 = (min(var_18, (((((((min(1, 1)) ? var_11 : (max(var_8, 143833713099145216))))) ? (var_8 && -9223372036854775794) : (~-9223372036854775794))))));
    var_19 = (!var_9);
    #pragma endscop
}
