/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 6;i_1 += 1)
        {
            {
                var_19 &= 34477;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_20 += (((-9223372036854775807 - 1) ? (arr_2 [i_3]) : (((((min(9223372036854775807, -9083007528074069177))) > 10143521064532761243)))));
                            var_21 = (((var_6 ? (arr_3 [i_0] [i_1 + 3] [i_0 + 1]) : (arr_5 [i_0 + 1] [i_1 - 1]))));

                            for (int i_4 = 2; i_4 < 7;i_4 += 1)
                            {
                                arr_15 [i_0] [i_1 - 3] = arr_7 [i_0] [i_0 - 2] [i_0 + 2] [i_0];
                                var_22 = (min(58, (min(9223372036854775807, (var_16 || 18446744073709551615)))));
                            }
                        }
                    }
                }
                var_23 = ((60 ? 562546981 : var_16));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            arr_21 [i_6] [i_5] [i_6] &= min(175, ((((arr_3 [i_0 + 2] [i_5] [i_6]) ? (arr_3 [i_5] [i_5] [i_0 + 2]) : 56209))));
                            arr_22 [i_1] [i_0] = (2097151 ? 579124020 : 200);
                        }
                    }
                }
                arr_23 [i_0] = (max(var_11, (min(-16, 982))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            {
                var_24 = var_9;
                arr_29 [i_8] [i_8] = ((var_5 | (arr_26 [i_8] [i_7])));
            }
        }
    }
    #pragma endscop
}
