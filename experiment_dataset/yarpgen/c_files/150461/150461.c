/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 -= ((max((arr_0 [i_0 + 2]), var_6)));

                for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    var_14 += (max(((max(0, -28232))), (((min(var_0, (arr_5 [6] [i_1])))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_15 = (var_3 && (arr_5 [i_0] [i_3]));
                        var_16 = var_5;
                        var_17 = (((arr_1 [i_0] [i_0]) ? var_3 : var_7));
                    }
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        arr_10 [i_1] [i_0] = ((~((28 >> (-28236 + 28240)))));
                        var_18 = (max(var_18, ((min(((((-4426019942071604596 ? var_9 : var_0)))), (max(-8699066867918924615, (var_6 & var_8))))))));
                    }
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                {
                    var_19 = (min(399241580, (max(((min(var_3, var_8))), -var_7))));
                    var_20 = min(((min((arr_9 [i_0 + 2] [i_0] [i_1] [i_5]), (arr_9 [i_0 - 2] [i_0] [i_1] [9])))), (((arr_9 [i_0 - 2] [i_0] [i_0 - 2] [0]) & 8699066867918924615)));
                    var_21 = ((((min((arr_3 [i_0] [i_0 - 3]), var_2))) ? ((((var_4 < (arr_5 [i_0] [i_5]))))) : ((((arr_7 [i_0] [i_0] [i_5]) / var_7)))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                {
                    var_22 = (max(var_22, (arr_9 [i_1] [0] [i_1] [i_1])));
                    var_23 = var_4;
                }
            }
        }
    }
    var_24 ^= ((28232 << (127 - 111)));
    #pragma endscop
}
