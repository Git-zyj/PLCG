/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((min(var_9, var_3)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = (~1);
                    arr_8 [i_0] [i_2] = ((((-22181 ? (arr_5 [i_1] [i_2]) : (arr_5 [i_0] [i_2]))) + (arr_1 [i_0 - 3] [i_0 + 1])));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_16 = (((arr_6 [i_0 + 1]) ? (arr_6 [i_0 - 2]) : (arr_6 [i_0 - 2])));
                        arr_11 [i_0] [i_3] [i_1] [i_2] [i_2] [i_3] = ((((min(1, 27066))) ? 13231064586663851990 : ((((arr_2 [i_0 - 1]) ? (arr_6 [i_0]) : var_2)))));
                        arr_12 [i_0] [i_0] [i_0] [i_3] = (arr_3 [i_0 - 1]);
                        arr_13 [i_0] [i_1] [i_3] [i_1] = ((!(((((~(arr_1 [i_1] [i_3])))) >= (~2122374459366211856)))));

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            var_17 = (max(var_17, ((((((~0) | -11495)) * (arr_2 [i_0 - 1]))))));
                            arr_16 [i_3] [i_1] = ((-(arr_0 [i_4] [i_0])));
                            var_18 = ((1 + (((max(var_10, -61))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 11;i_5 += 1)
                        {
                            arr_19 [i_0 - 3] [i_0] [1] [i_3] = (!var_3);
                            var_19 = ((!(arr_4 [i_0 + 1] [i_0 + 1] [i_2])));
                        }
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            var_20 = (1 ? (arr_18 [i_6] [i_6] [i_0 + 1] [i_6] [i_6]) : (arr_18 [i_6] [i_6 - 2] [i_0 - 1] [i_0 - 2] [i_6]));
                            var_21 = (min(var_21, (arr_17 [i_0 + 1])));
                            var_22 ^= ((-(1 || var_5)));
                            arr_22 [i_0] [i_3] [10] [i_1] [i_3] [i_0] = 1;
                            var_23 = (((((var_7 ? 54308 : -22181))) ? (arr_15 [i_0] [i_3] [i_0] [i_0] [i_3]) : ((((arr_18 [i_3] [i_3] [i_2] [i_2] [i_6]) ? -22181 : 0)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
