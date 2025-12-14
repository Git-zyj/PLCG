/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = arr_1 [9] [i_0 - 1];

                for (int i_2 = 2; i_2 < 13;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0] = (min(((((arr_5 [i_0] [i_0] [i_1 + 2]) / ((-75 ? var_6 : var_11))))), (((min(var_7, 1669142320032163275)) * (var_10 * 18446744073709551599)))));
                    arr_8 [i_0] [i_1 + 1] [i_2 - 2] = ((((arr_0 [i_1 + 1]) ? (arr_0 [i_1 + 2]) : var_2)) & ((~(arr_0 [i_1 - 1]))));
                    var_15 = (max(var_6, ((~(min(var_9, var_12))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_3] [i_0] = (max(((16777601753677388340 ? 120 : 18446744073709551597)), (~var_12)));
                                var_16 = (arr_5 [i_0] [0] [i_0]);
                                arr_15 [i_2 + 1] [i_2 - 1] [i_2] [i_0] = var_9;
                                arr_16 [i_0 + 1] [i_1 + 1] [i_0] [i_0] [i_0 + 1] [i_1 + 2] [i_0] = ((var_2 ? (max(9718483667628937001, (var_11 ^ 8457341368644540761))) : ((~(arr_10 [7] [i_0] [i_2] [i_2 - 2] [i_2 - 2])))));
                            }
                        }
                    }
                }
                for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
                {
                    var_17 = ((~((min(var_6, 18446744073709551597)))));
                    var_18 = ((((14713068435716464474 ? var_6 : (arr_12 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]))) >= 18446744073709551598));
                    arr_19 [i_5] [i_0] [i_0 - 1] = (arr_13 [i_0 + 2] [i_0 + 1] [i_1] [i_1 + 2] [i_0]);
                    arr_20 [i_5] [i_5] [i_0] [i_1] = ((var_5 ? (var_2 >> 0) : ((((max(var_9, (arr_12 [i_0] [i_1 + 1] [i_0] [i_1 + 1] [9] [i_1])))) ? (max(37, 3733675637993087141)) : (min(var_6, var_8))))));
                }
                var_19 = var_13;
                arr_21 [i_0] [i_1] [i_0] = (((((min(var_7, 18446744073709551597)) * (((arr_4 [i_0] [i_0]) ? var_7 : var_9)))) * (((~(arr_12 [i_0 + 1] [i_1 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0]))))));
            }
        }
    }
    var_20 = var_13;
    var_21 = (!var_9);
    #pragma endscop
}
