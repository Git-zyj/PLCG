/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_12 = (min(var_12, -var_3));
                arr_5 [18] = ((((max(9688, 4465))) > (55848 > 1411)));
                arr_6 [i_0] = ((9688 ? var_1 : (((!((max(var_6, (arr_2 [i_0] [i_0])))))))));
                arr_7 [i_0] = ((~(arr_2 [i_0 + 1] [i_0 - 1])));
                arr_8 [i_0] [21] = (min((arr_1 [1]), (((4639 >= 64125) % var_10))));
            }
        }
    }
    var_13 = (max(var_13, var_6));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
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
                                var_14 = ((((((((43021 ? 13929 : 54590))) ? (arr_10 [i_2]) : (42598 * 28832)))) ? ((~(arr_19 [4] [4] [i_4] [i_5]))) : (max((((64125 <= (arr_19 [0] [i_3] [0] [i_5])))), (((arr_18 [6]) & var_1))))));
                                arr_24 [i_6] [i_2] [i_4] [11] [i_3] [i_3] [i_2] = (!57471);
                            }
                        }
                    }
                    var_15 = (max(var_15, (((~(((var_0 > (arr_9 [i_2])))))))));
                    var_16 ^= (max((((((~(arr_17 [7] [i_2] [i_4])))) ? (arr_18 [i_4]) : var_1)), (max((~13929), ((min((arr_23 [1] [i_2] [i_2] [2] [i_3] [i_4] [i_4]), (arr_1 [i_3]))))))));
                }
            }
        }
    }
    var_17 = ((-((max(var_5, var_6)))));
    #pragma endscop
}
