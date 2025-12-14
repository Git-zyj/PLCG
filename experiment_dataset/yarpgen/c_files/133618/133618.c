/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    var_14 *= (!2113071518);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 ^= (~62453);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_16 = var_9;
                                var_17 = 1487200525;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_16 [i_0] = 510359397;
                                arr_17 [i_0] [i_1] [7] [i_0] [i_1] [i_6] = ((max(2799177697, 57)));
                                arr_18 [14] [i_5] [i_1] [i_5] [i_6] [i_2] [i_6] &= var_9;
                            }
                        }
                    }

                    for (int i_7 = 2; i_7 < 20;i_7 += 1)
                    {
                        arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = max(-2147483639, 2799177697);
                        var_18 *= (!4035217101388727771);
                    }
                    var_19 *= -510359404;
                }
            }
        }
    }
    var_20 = (max(((~(~221991214))), 0));
    var_21 = (--10178152473688792664);
    #pragma endscop
}
