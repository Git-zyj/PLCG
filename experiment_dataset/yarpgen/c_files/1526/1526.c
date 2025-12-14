/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max(var_14, 2147483647)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = (((+-85) | (arr_4 [i_1] [i_1] [i_1])));

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_14, (((!((((arr_4 [i_1] [i_3] [i_4]) / (arr_10 [i_0] [1] [i_1] [i_2] [i_3] [i_4])))))))));
                                var_19 = (max((arr_9 [i_2] [i_2 + 1] [i_2 + 1] [i_4]), ((-8149700148173787832 ? 22465 : 1023))));
                            }
                        }
                    }
                    var_20 = (min(10852432380948591178, 9223372036854775807));

                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        var_21 *= (max((arr_10 [i_0] [i_1] [i_2 - 1] [i_5] [i_2 + 1] [i_5 + 3]), (((arr_7 [i_5] [10] [i_0]) ? 10852432380948591178 : 2600089553552746542))));
                        var_22 = (min(var_22, 23214));
                        arr_15 [i_1] [i_1] [i_2] [i_5] = (max((~62832), -var_7));
                    }
                }
                var_23 = (min(var_23, (((+(((arr_9 [i_0] [i_0] [i_0] [9]) ^ 22465)))))));
            }
        }
    }
    var_24 = (((var_5 + (((22480 ? 570647481 : -2600089553552746543))))));
    #pragma endscop
}
