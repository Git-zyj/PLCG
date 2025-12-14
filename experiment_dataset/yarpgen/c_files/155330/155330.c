/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_1 + 1] [i_0] [i_0] = ((4294967295 == (((arr_1 [i_0] [i_1]) - (min((arr_0 [i_1] [i_0]), 1))))));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_17 = ((((4294967276 | (arr_1 [i_0] [i_2]))) / 32767));
                    var_18 *= arr_2 [6] [6] [6];
                }
                var_19 = (max(var_19, ((max(((32767 ? (arr_5 [i_1 + 1] [i_1 - 1] [9] [i_1 - 1]) : -32748)), (arr_1 [i_1 + 1] [i_1 - 1]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 7;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 9;i_4 += 1)
        {
            {
                arr_12 [i_3] = ((-(((arr_8 [i_3 + 2]) ? (arr_8 [i_3 - 1]) : (arr_8 [i_3 + 2])))));

                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    arr_15 [i_3] [i_3] = ((!(4294967285 / var_1)));
                    arr_16 [i_3] = ((~(arr_8 [i_3 + 3])));
                    var_20 |= max((max((arr_3 [i_4 + 1] [i_4 - 1]), (arr_3 [i_4 + 2] [i_4 + 2]))), (arr_3 [i_4 - 1] [i_4 + 1]));
                }
                arr_17 [i_3] [6] [i_3] = ((-(-32755 * var_9)));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 9;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 9;i_7 += 1)
                    {
                        {
                            var_21 = (max(var_21, (((!((min(4294967290, (arr_19 [i_4] [i_6] [i_4] [i_3 + 2])))))))));
                            arr_23 [i_3] [i_4] [i_3 + 2] = (max((arr_21 [i_6] [i_6] [i_7 - 1] [i_7 + 2]), 29));
                            var_22 = (min((((((((arr_10 [i_3] [i_3] [i_4]) / (arr_2 [i_3] [13] [i_3]))) + 2147483647)) << (((-9223372036854775807 - 1) - 1)))), (((!var_15) ? (!11) : ((var_7 ? 2147483647 : var_10))))));
                            var_23 *= (!0);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
