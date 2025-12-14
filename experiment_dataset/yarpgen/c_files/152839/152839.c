/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            var_18 = (((((~var_11) + 9223372036854775807)) >> (min((1 - var_2), (!var_13)))));
            arr_6 [i_0] = ((var_9 ? (((((arr_4 [i_0] [i_0] [i_1 + 2]) < var_1)))) : (arr_4 [i_0] [i_0] [i_0])));
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_19 = var_10;
                        arr_12 [i_3] = (((((var_14 ? (arr_9 [i_0] [3] [i_3]) : var_3)) & (((arr_10 [11] [i_0] [i_0]) >> (var_4 + 1822357932975583371))))));

                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            arr_16 [8] [i_2] [i_2 + 3] [i_3] [i_4] = (((~var_2) | (min((arr_7 [i_1] [i_1] [i_1]), (arr_1 [i_2 - 1])))));
                            var_20 = ((((min((arr_9 [i_1 + 1] [i_2 + 2] [i_3]), (max(var_2, var_0))))) & (arr_3 [i_0] [9] [i_2])));
                        }
                    }
                }
            }
        }
        arr_17 [i_0] [i_0] = (((((var_3 ? (arr_9 [i_0] [i_0] [i_0]) : (arr_8 [i_0] [i_0] [i_0])))) ? (((var_12 ? var_14 : var_7))) : var_8));
        arr_18 [i_0] = ((((((!(arr_0 [i_0]))))) | (~-6507096524485866783)));
        var_21 = (arr_13 [2] [i_0]);
        var_22 = ((((6507096524485866767 % var_9) || (arr_9 [i_0] [i_0] [i_0]))));
    }
    var_23 = (((((~(var_2 <= 51)))) ? var_11 : var_7));
    var_24 *= 6507096524485866782;
    var_25 = var_13;
    #pragma endscop
}
