/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((var_5 ? (var_9 * var_12) : (var_13 <= var_4))) * (((((-4058478687181927476 * var_12) <= var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] = (((((arr_1 [i_0 + 1]) ? (arr_2 [i_0 + 2]) : (arr_2 [i_0 - 2]))) * (arr_2 [i_0 + 2])));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_15 = (((arr_6 [i_0 + 1] [i_0 + 1] [i_1] [17]) <= (((arr_6 [i_0] [i_1] [13] [i_0]) ^ (arr_2 [11])))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_16 = ((((((arr_6 [i_3 - 1] [19] [i_0 - 2] [i_0]) <= (arr_6 [i_3 - 1] [i_1] [i_0 + 1] [i_0])))) ^ ((((arr_6 [i_3 - 1] [i_0] [i_0 + 2] [i_0]) <= (arr_6 [i_3 - 2] [i_0 + 2] [i_0 + 1] [i_0 + 2]))))));
                                var_17 = (arr_2 [10]);
                                var_18 = ((arr_11 [i_0] [i_0 + 2] [i_0 - 2] [i_0] [i_0 - 2]) / (arr_8 [i_0 - 2] [i_0 + 1] [i_3 - 1] [7] [i_3 + 1] [i_1]));
                            }
                        }
                    }
                }
                var_19 = (arr_10 [i_0] [i_0] [i_1] [i_1] [i_1]);
                var_20 = (min(var_20, ((((arr_12 [i_0] [i_0] [12] [i_0 - 2] [i_1]) ? (((arr_10 [i_0] [i_0] [i_0] [i_0 - 1] [i_0]) * (arr_10 [1] [1] [i_0] [i_0] [i_0 + 2]))) : ((((arr_7 [i_0 + 2]) ^ (arr_7 [i_0 + 1])))))))));
                var_21 = ((((((arr_1 [i_0 - 2]) / (arr_1 [i_0 + 1])))) ? (((arr_1 [i_0 + 2]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 1]))) : (((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1])))));
            }
        }
    }
    #pragma endscop
}
