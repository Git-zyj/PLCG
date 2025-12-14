/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    var_21 = ((((min(((-1881015512 ? 1881015511 : -1881015512)), 1881015521))) ? var_7 : ((1881015518 ? 3584 : 17))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [17] [i_0] = ((((max((min((arr_2 [6] [i_1]), 14305)), 593763511))) ? ((((!var_18) ? (((var_12 ? 1881015489 : (arr_3 [3] [2])))) : (max(-4763101956966601735, 1))))) : (arr_0 [i_0])));
                var_22 = ((((((arr_1 [i_0 + 2]) ? var_2 : (arr_1 [i_0 + 4])))) || (((-88 ? ((((arr_0 [i_0]) != (arr_2 [i_0 + 2] [i_0 + 2])))) : (var_3 || var_14))))));
                var_23 = (((((~(arr_1 [i_0 - 1])))) ? ((61951 ? 1 : 18446744073709551588)) : ((3581 | (arr_1 [i_0 + 2])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_24 = ((min(var_15, var_5)));

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                var_25 -= max((((((88 ? 3584 : 61950))) ? var_19 : 65535)), (arr_1 [1]));
                                arr_12 [i_0] = ((-(((!(((var_1 ? (arr_8 [i_0] [i_0] [i_2]) : (arr_7 [i_0 + 1] [i_1] [i_3] [i_1])))))))));
                            }
                            for (int i_5 = 0; i_5 < 0;i_5 += 1)
                            {
                                arr_15 [i_0] [1] [i_0] [i_2] [i_3] [16] = ((1475783989 ? ((var_7 ? var_1 : ((var_16 ? (arr_9 [i_0 + 4] [i_0 + 4] [i_2] [22] [4]) : (arr_5 [i_0 + 1] [i_1] [i_1]))))) : (((arr_0 [i_0]) ? ((~(arr_11 [i_0] [i_3] [13] [i_2] [i_0]))) : (!-14305)))));
                                var_26 = ((~((~(arr_13 [i_3 + 1] [i_5 + 1] [i_5] [i_5 + 1] [i_0])))));
                            }
                            for (int i_6 = 0; i_6 < 23;i_6 += 1)
                            {
                                arr_18 [17] [17] [i_0] [9] [i_6] = (max(((min((arr_11 [i_3 + 1] [i_3 + 1] [i_0 + 2] [i_0 + 4] [i_0 - 1]), (arr_11 [i_3 + 1] [i_3 + 1] [i_0 + 2] [i_0 + 4] [i_0 - 1])))), (min((arr_7 [i_0] [i_0 + 4] [i_0] [i_0]), (arr_7 [i_0] [i_0 + 1] [i_0 + 2] [i_0 + 2])))));
                                var_27 = 5096333637223625743;
                                arr_19 [i_6] [i_0] [i_0] [i_0] [i_0] = (!-9077673104826327136);
                                var_28 ^= ((((max(0, 65531))) ? var_11 : (((var_0 ? 0 : 14305)))));
                            }
                        }
                    }
                }
                var_29 = (!((max(3594, 14272927844307923162))));
            }
        }
    }
    #pragma endscop
}
