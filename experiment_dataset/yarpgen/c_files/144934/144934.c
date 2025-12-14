/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    var_15 = (((-var_10 == var_5) ? (((var_11 - var_9) ? (max(var_7, 9915513219702592620)) : (max(13, 7766159081481654902)))) : (((var_3 ? (!0) : var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = (((arr_0 [4] [i_0 + 3]) - (((((-(arr_1 [i_0]))) <= (((arr_1 [i_1]) ? var_0 : 1)))))));
                var_17 = ((((min((arr_3 [i_0 + 2] [i_1]), (arr_3 [i_0 + 2] [i_0])))) ? ((((7766159081481654902 / (arr_3 [1] [1]))) * (9530855593466874067 >= 2147483637))) : (((~(max(var_10, 2147483647)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_18 = (max((((~(arr_5 [i_0] [i_0 + 1] [i_0] [i_0 + 2])))), (((arr_5 [i_0] [i_0 + 1] [11] [i_0 + 1]) ? 18446744073709551595 : (arr_5 [i_0] [i_0 + 2] [i_0] [i_0 - 1])))));

                            for (int i_4 = 0; i_4 < 13;i_4 += 1)
                            {
                                var_19 = ((((min((arr_5 [i_0 - 1] [8] [i_0 + 3] [i_0 - 1]), (arr_1 [i_0 - 1])))) ? (7766159081481654902 >= 1) : (((arr_5 [i_0 - 1] [i_0 + 2] [i_0 + 3] [i_0 - 1]) ? (arr_1 [i_0 - 1]) : 18446744073709551615))));
                                var_20 = ((-(max((min((arr_5 [i_4] [i_2] [i_1] [i_0]), -8513662875359876753)), (((6703 ? 125 : (arr_6 [7] [i_1] [i_1] [i_1]))))))));
                                var_21 = ((+((((-126 ? (arr_8 [i_0 - 1] [i_2] [i_3] [12]) : (arr_11 [i_0] [i_1] [i_4] [i_3] [10])))))));
                                var_22 = (min(((min((arr_0 [i_0 + 2] [i_0 - 1]), (arr_0 [i_0 - 1] [i_0 + 3])))), ((1 % (arr_0 [i_0 - 1] [i_0 + 2])))));
                                arr_12 [i_4] [i_1] [i_1] [i_1] [i_1] [i_1] = ((((((arr_4 [i_0] [i_0] [i_0] [i_0]) ? (arr_4 [i_0] [i_0] [i_0] [i_0]) : 18)) ^ (((arr_6 [i_1] [i_2] [i_1] [i_4]) ^ (arr_6 [12] [12] [8] [i_1]))))));
                            }
                            arr_13 [i_0] [1] = (!-var_0);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
