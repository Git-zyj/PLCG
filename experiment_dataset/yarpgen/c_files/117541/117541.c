/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_6 [i_2] [i_1] [i_0] = (~((-(arr_1 [i_0 - 1]))));
                    var_19 = (max(var_19, ((min(1905800234, 2389167061)))));
                    var_20 = (min((arr_0 [i_0 - 1]), (((arr_2 [i_1 - 1] [i_0 + 1] [i_0 - 1]) ? 2389167062 : (arr_1 [i_0 - 1])))));
                    var_21 = (max(var_21, ((max((((((var_3 ? var_1 : (arr_1 [i_2])))) ? (arr_0 [1]) : 2389167056)), var_14)))));
                    var_22 = ((((arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1]))));
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_23 = (((var_18 ? (2389167078 < 1905800233) : (arr_1 [i_0 - 1]))));
                    var_24 = var_6;
                }
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    var_25 = (~(~2389167081));
                    var_26 = (min(var_26, ((((var_16 * -var_7) ? (min((arr_3 [i_1 - 1]), var_13)) : (((((max((arr_11 [7]), var_10))) ? (((var_5 >= (arr_1 [i_0])))) : (((!(arr_1 [i_1]))))))))))));
                }
                var_27 = (min(var_27, ((((~(~1905800251)))))));
                var_28 = (max(var_28, (((((arr_11 [i_0 - 1]) != (arr_11 [i_0 + 1]))) ? ((max((arr_11 [i_0 - 1]), (arr_11 [i_0 - 1])))) : (arr_11 [i_0 - 1])))));
            }
        }
    }
    var_29 = (max((((var_12 ? var_7 : (max(var_14, var_8))))), var_6));
    #pragma endscop
}
