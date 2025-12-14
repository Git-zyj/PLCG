/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 += (((((-(max((arr_2 [i_1]), var_1))))) ? ((((arr_0 [i_0] [i_1]) ? 149 : (((arr_0 [i_0 + 3] [i_0 + 3]) ? var_0 : (arr_0 [i_0] [i_1])))))) : (max((max(116, (arr_1 [i_0] [i_1]))), (arr_3 [i_1])))));
                arr_6 [i_1] [i_1] [4] = ((63 << ((((((arr_5 [i_0] [i_0 - 1]) ? 63 : (arr_1 [i_0 + 1] [i_0 + 3])))) - 46))));
                var_15 |= (((((arr_5 [i_0] [i_0 - 2]) ? (arr_0 [i_0] [i_0]) : var_6)) == (((((-70 || (arr_0 [i_0] [i_1]))))))));
                var_16 = (arr_2 [i_0 + 1]);
            }
        }
    }
    var_17 = ((var_5 < ((((var_2 >= var_8) != (var_10 <= var_12))))));
    var_18 -= (var_1 << var_4);
    var_19 = 1;
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 8;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_20 -= (+((max((arr_14 [i_5] [i_3 - 1] [i_2]), (arr_2 [i_2 - 2])))));
                                arr_20 [i_4] [i_3 + 1] [i_4] [9] [i_6] = (min((max((1 * var_12), (63 != -8140248583868175507))), (((-70 < ((var_0 ? 66 : (arr_0 [i_3 + 1] [i_6]))))))));
                            }
                        }
                    }

                    for (int i_7 = 1; i_7 < 9;i_7 += 1)
                    {
                        var_21 = ((((((arr_19 [i_4] [i_2 - 1] [i_2 - 1] [i_2] [i_2 + 3]) ? ((min(var_6, -1884411416))) : (arr_23 [i_2 + 4] [i_3 + 1] [i_3 + 1] [i_7] [i_7 + 3])))) ? (max(1, (-613824507237606315 - 18446744073709551607))) : (((var_2 ? (arr_2 [i_2 + 3]) : (arr_0 [i_3 - 1] [i_2 + 1]))))));
                        arr_24 [i_2 - 2] [i_4] [i_7] [i_2 - 2] [i_2 - 2] = (((~(arr_11 [i_3 + 1] [i_2 + 4]))));
                        var_22 = (((arr_22 [i_2 + 3] [i_3 + 1]) | ((0 ? (arr_22 [i_2 + 2] [i_3 + 1]) : var_3))));
                    }
                    var_23 |= (arr_10 [i_4] [i_3 + 1] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
