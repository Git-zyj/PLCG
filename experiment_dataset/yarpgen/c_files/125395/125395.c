/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((max(var_12, ((154 ? 4080 : -70384070)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 &= var_14;
        var_19 -= 1394188257;
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 23;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_20 = ((max(-120, 5)));
                                var_21 = (var_4 ? (max(-979510467, ((max(74, var_13))))) : (((max(var_11, 2779001496)))));
                            }
                        }
                    }
                    var_22 = (max(128, (~var_10)));
                    var_23 = ((max(var_9, 2097120)));
                }
            }
        }
        arr_16 [16] = (max(((max(4075867113733123834, (max(var_11, var_14))))), (max(var_3, var_9))));
        arr_17 [i_1] [i_1 - 1] = (min(var_7, -96));
    }

    for (int i_6 = 2; i_6 < 20;i_6 += 1)
    {
        var_24 ^= (max(-16914, (~var_1)));
        arr_21 [i_6] = ((((max(5, 9223372036854775808)))) ? 65 : ((max(var_6, (max(var_0, -59))))));
        var_25 = (max(var_25, ((((max(var_8, 9345870951112786510))) ? (max(527897870, 59)) : (((((-8362401069043796164 ? -1 : var_11))) ? ((max(var_13, var_0))) : -var_14))))));
    }
    for (int i_7 = 1; i_7 < 17;i_7 += 1)
    {
        var_26 = (min(var_26, var_4));
        var_27 = (((((var_6 ? var_5 : var_6))) ? (max(-1866552153, var_15)) : -1866552153));
        var_28 = var_12;
        var_29 = -25;
    }
    var_30 -= var_12;
    #pragma endscop
}
