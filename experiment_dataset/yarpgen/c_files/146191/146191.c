/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0 + 1] = ((-6692126105369188869 ? 72 : 19457));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_11 ^= (((min((!-1), ((1991315705 ? 1 : 202)))) < (((((((arr_4 [4] [4]) ? (arr_2 [i_0]) : 18446744073709551615))) ? (arr_9 [i_0] [i_0]) : var_6)))));

                            for (int i_4 = 2; i_4 < 7;i_4 += 1)
                            {
                                var_12 -= (min(((((arr_4 [i_0 - 1] [i_2 - 2]) <= (arr_4 [i_0 - 1] [i_2 - 1])))), (~-8224)));
                                var_13 = ((-((+(((arr_6 [i_0] [i_0] [i_0]) & 1))))));
                            }
                            /* vectorizable */
                            for (int i_5 = 3; i_5 < 10;i_5 += 1)
                            {
                                arr_19 [i_0] [i_1 - 1] [i_0] [i_3] [i_3] [i_5] = (((960 / var_1) == (arr_9 [i_0] [i_0])));
                                var_14 = ((~((-766653730 ? -7258 : (arr_1 [i_0])))));
                                arr_20 [i_3] = ((var_8 ? var_7 : 1663726064));
                                var_15 = 65;
                            }
                            arr_21 [i_3] [i_1] [9] [i_2 + 1] = 9417;
                        }
                    }
                }
                var_16 -= 1;
            }
        }
    }
    var_17 = var_5;
    var_18 = ((var_9 < (((((35993612646875136 ? var_10 : var_6))) ? var_7 : (var_1 <= 0)))));
    var_19 = min((~var_7), var_6);
    #pragma endscop
}
