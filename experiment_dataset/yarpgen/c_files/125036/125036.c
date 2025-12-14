/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= ((((((var_8 & var_5) <= var_1))) == var_8));
    var_11 = (1 || 679698010980911585);
    var_12 = var_7;
    var_13 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_14 -= ((~((~(arr_1 [i_2])))));
                                var_15 = (((((arr_10 [i_0 + 1] [i_0 + 2] [i_4]) && (arr_0 [i_0 + 2]))) ? (arr_2 [i_0 + 2] [i_0]) : (arr_10 [i_0 + 1] [i_0 + 2] [i_0 + 2])));
                                arr_13 [10] [i_2] [i_2] [10] [10] [i_3] [i_4] |= (((((arr_8 [i_0 - 1]) ? (arr_8 [i_0 - 1]) : (arr_8 [i_0 - 1]))) / (((arr_8 [i_0 - 1]) | (arr_8 [i_0 - 1])))));
                            }
                        }
                    }
                }
                var_16 = (((9327278437396780880 % 12716278708653580588) + ((((arr_3 [i_0 - 1] [i_1]) - (arr_11 [i_1] [i_1] [i_1] [i_0 + 2] [i_0] [i_0 - 2]))))));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 11;i_7 += 1)
                            {
                                var_17 += ((((~(arr_19 [i_5] [i_0]))) != (arr_18 [i_0] [i_0] [i_0] [i_1] [i_0 - 2])));
                                arr_21 [i_0 + 2] [i_1] [i_5] [i_0] [4] = (((((arr_10 [i_0 + 2] [i_5 + 1] [i_5 - 1]) + 2147483647)) << (((((arr_10 [i_0 + 2] [i_5 - 1] [i_6]) + 6084)) - 19))));
                                var_18 = (arr_0 [i_0]);
                                var_19 = ((!((!(arr_8 [i_5])))));
                            }
                            var_20 += ((!((((arr_5 [i_6] [i_0 + 2]) ? (arr_5 [i_6] [i_0 - 1]) : (arr_0 [i_0 - 1]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
