/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    var_14 = (max(var_14, var_3));
    var_15 = ((((var_2 != (var_10 < var_3))) ? var_12 : (max(var_3, (-16 ^ 20445)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 |= 19;
                    arr_8 [i_0] [i_0] [i_2] = (((((-var_9 ? (arr_2 [i_0]) : (arr_1 [i_0] [i_1])))) ? ((~(arr_5 [i_2 - 2] [i_2 - 1] [i_2 - 3]))) : var_1));
                    var_17 = (min(var_17, 22076));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 *= (arr_13 [i_0]);
                                var_19 *= (15 >= (((arr_10 [i_0] [i_2 - 1] [i_2] [i_0] [i_1]) << ((((((-(arr_4 [2] [i_0] [i_0]))) + 53565)) - 14)))));
                                var_20 = ((((((~var_7) ? ((~(arr_6 [i_1] [i_4]))) : var_9))) ? (min(((min(-92, var_11))), (arr_7 [i_1] [i_2] [i_1] [i_2]))) : (((-(0 == 465586432324639796))))));
                                var_21 = max(((((-2147483647 - 1) || (arr_15 [i_2 - 1] [i_2 - 1] [i_2 - 4] [i_2 - 3] [i_2])))), 19);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
