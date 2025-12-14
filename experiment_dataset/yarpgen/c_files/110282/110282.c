/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_19 *= 1;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_20 = (((((-((1 ? 1125899906842624 : var_14))))) ? (((~(arr_10 [i_0 + 1] [i_2 - 3] [i_3] [i_0 - 1])))) : (min(((var_6 + (arr_8 [18] [i_0] [7] [i_2] [11] [1]))), ((min(3584, 2097024)))))));
                            var_21 = (arr_6 [i_0] [0] [i_0] [i_0]);
                            var_22 = (arr_4 [i_2] [i_0]);
                        }
                    }
                }
                var_23 = (arr_2 [i_0 + 2] [i_1 + 2]);
                arr_12 [18] [0] [i_1] = (arr_6 [19] [i_1] [19] [19]);
                arr_13 [i_0] = ((arr_0 [i_0 - 1]) | (~1125899906842624));
            }
        }
    }
    var_24 = (((max(241, ((524286 ? (-2147483647 - 1) : 50695)))) - ((2097024 ? (1 * -25572) : 16384))));
    var_25 = 2097031;

    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_26 = ((((min(var_14, (var_11 <= -32753)))) / ((~(241 * 1)))));
        arr_17 [i_4] = (((((arr_9 [i_4] [i_4]) ? 1 : var_14)) & (arr_4 [i_4] [i_4])));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_27 = (max(var_27, ((max(((1818981031 - ((var_2 ? (arr_11 [i_5] [i_5] [17]) : 698331840975177083)))), (max((arr_3 [i_5]), var_1)))))));
        arr_22 [1] [11] = (~(max((max(var_4, 4611686018423193600)), ((min(1, var_11))))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 16;i_8 += 1)
                {
                    {
                        var_28 = var_17;
                        var_29 = 63;
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        arr_33 [i_9] = 2147450880;
        var_30 = (max(var_30, (((((max((!1125899906842622), 2251524935778304))) ? (((((512 ? 1 : 2615189187)) - var_15))) : ((10892562940758063649 ? (arr_32 [i_9]) : -9223372036854775802)))))));
    }
    #pragma endscop
}
