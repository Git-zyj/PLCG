/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 8561465038470774014;
    var_13 -= var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0 - 1] [i_0 - 1] = (((((((min((-2147483647 - 1), (-2147483647 - 1))) + 2147483647)) + 2147483647)) << ((((((arr_0 [i_0]) ? 989 : (arr_4 [i_0 - 1] [i_0] [i_1])))) ? (((var_1 <= (arr_4 [i_0] [i_0] [i_0 - 1])))) : ((var_0 / (arr_0 [i_0])))))));
                var_14 = ((989 ? 1 : 62221));
                arr_6 [i_0] = var_7;
                var_15 = var_2;
            }
        }
    }
    var_16 = (min(var_16, 1098344025));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            {
                var_17 = arr_10 [i_2] [i_3] [i_2];
                var_18 = (max(((((arr_3 [i_3 - 2]) % (((min(var_5, var_3))))))), var_9));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_18 [i_4] [i_3] [i_4] [i_5] [i_6] = ((-(min((((23 * (arr_0 [i_2])))), (((arr_16 [i_6] [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 3] [i_6 - 1]) / (arr_2 [i_2] [i_3 + 1])))))));
                                arr_19 [i_4] = ((((min((((arr_11 [i_5 + 3] [i_4] [i_3 + 1]) + var_9)), ((max((arr_12 [i_2] [i_4]), (arr_8 [i_2]))))))) ? ((((989 ? var_11 : (arr_10 [i_2] [i_3] [i_4]))))) : (((arr_10 [i_2] [i_3 - 3] [i_4]) & var_11))));
                                arr_20 [i_4] [i_3] [i_4] [i_5 + 1] [i_4] [i_3] [i_6 + 1] = (min(((-150690369079165224 ? 2609159553797217776 : 1)), 245325505));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
