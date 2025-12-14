/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += 18446743523953737728;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_16 ^= (min((((arr_3 [i_0] [i_1 + 2]) ? (min(var_1, -6278647673401280387)) : (((18446743523953737757 ? (arr_2 [i_0 + 2] [i_1] [i_1]) : var_5))))), (min(((79 | (arr_0 [i_0] [i_1]))), var_8))));
                var_17 -= max((((arr_0 [i_1] [i_1 - 2]) % (((var_0 ? var_1 : var_1))))), ((max((arr_3 [i_0 - 1] [i_1 - 1]), var_1))));

                for (int i_2 = 2; i_2 < 7;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 += var_1;
                                arr_13 [i_4] [i_1] [i_2] [i_3] [i_4] [i_3] [8] |= ((!((min(var_10, (arr_8 [i_2] [9] [i_0 + 1] [i_0]))))));
                                var_19 += (max((((arr_5 [i_1 + 1]) + (((arr_5 [0]) >> (var_5 + 4158))))), var_1));
                                var_20 = (max(var_20, (arr_4 [i_3 + 1] [i_1 - 1])));
                                var_21 -= ((-(min(8, (arr_3 [i_1 - 1] [i_2 + 2])))));
                            }
                        }
                    }
                    var_22 += var_14;
                }
                for (int i_5 = 2; i_5 < 7;i_5 += 1) /* same iter space */
                {
                    var_23 += max((-127 - 1), 1);
                    var_24 -= ((var_6 * ((-29269 ? (((arr_2 [i_5 + 3] [i_1] [i_0 + 1]) ? 18446743523953737728 : var_2)) : ((((arr_3 [i_1 - 1] [i_0]) & (arr_11 [i_5]))))))));
                }
            }
        }
    }
    #pragma endscop
}
