/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        arr_8 [i_0] [i_3] [i_2] [i_3] = (min(862457370, 147));
                        var_20 *= (!var_7);
                    }
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_2] [i_2 + 1] [i_0] = ((var_17 ? (min((((~(arr_10 [i_0] [i_0] [i_0] [i_4] [i_4] [i_0])))), 3432509924)) : ((((~var_10) ? (arr_5 [i_1] [i_2] [i_4 - 2]) : (arr_1 [i_2 - 1] [i_4 - 1]))))));

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_21 += ((var_10 <= (((((min(var_16, var_9))) ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (3432509893 <= -13))))));
                            var_22 += var_11;
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            var_23 = ((arr_16 [i_6] [i_2 + 2] [i_2 + 1] [i_2 + 1]) || (((~var_8) >= var_15)));
                            arr_17 [i_6] [2] = (max(((((var_16 + 2147483647) >> (((arr_9 [i_0] [i_2 + 3] [i_4 + 1] [i_6]) + 324279311))))), (~28492)));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                        {
                            var_24 *= (((arr_7 [i_0] [i_4 - 1] [i_4 - 1] [i_0] [i_4 - 1]) ? (arr_3 [i_4 + 1]) : (arr_11 [12] [12] [i_4 + 1] [i_4] [i_4 - 1] [12])));
                            var_25 = (arr_14 [i_0] [6] [6] [i_4] [i_4] [i_4] [i_7]);
                            var_26 = (((arr_14 [i_7] [i_2 - 1] [i_2] [i_1] [i_0] [i_1] [i_0]) || 0));
                            arr_21 [i_2] [i_4 - 2] [i_4 - 2] = ((-(arr_5 [i_2] [i_2 + 1] [i_4 - 1])));
                        }
                        for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                        {
                            var_27 = ((((((-(arr_4 [11] [i_1] [11] [i_1])))) + var_10)));
                            var_28 = ((+(max((arr_4 [i_2 - 1] [i_2] [i_2 + 3] [i_4 + 1]), 1597884317))));
                            var_29 &= 33752;
                            var_30 *= (((((arr_11 [i_0] [10] [10] [10] [i_0] [12]) ? (arr_13 [1] [1] [i_2] [i_4] [i_8]) : (arr_13 [i_0] [i_0] [i_2] [i_4] [i_8]))) | -44));
                        }
                        var_31 |= (((4294967288 ? (min((arr_13 [i_0] [i_1] [i_1] [8] [i_4]), (arr_20 [i_0] [15] [i_0] [i_0] [i_0] [i_0]))) : var_19)));
                    }
                    arr_24 [i_0] [i_0] = (((arr_7 [10] [10] [10] [i_0] [i_2]) | var_17));
                }
            }
        }
    }
    var_32 = (min((min(var_17, var_11)), (-3356 + -var_19)));
    #pragma endscop
}
