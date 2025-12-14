/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    var_21 &= ((((24018 ? 3034 : 45557160)) - (arr_6 [i_1 - 1] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_22 = (arr_6 [i_0] [i_3]);
                                arr_13 [i_0] [i_1] [i_0] [i_2] [i_4] [i_4 - 1] = (((((((((arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]) ? var_5 : 24018))) ? 2 : var_9))) ^ -3823505555168207061));
                                var_23 |= (arr_4 [i_2 - 4] [5] [i_3 + 1]);
                                arr_14 [i_4] [i_3] [i_3] [i_2 + 2] [i_1 + 1] [i_4] = ((-21794 - (((arr_7 [i_2 - 1]) - var_15))));
                            }
                        }
                    }
                    arr_15 [i_2] [i_1 - 1] [i_0] = (arr_1 [i_1 - 1]);
                }
            }
        }
    }
    var_24 &= ((65535 ? 6 : -21772));
    #pragma endscop
}
