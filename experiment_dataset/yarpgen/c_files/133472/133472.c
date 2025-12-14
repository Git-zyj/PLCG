/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_0 [i_0 - 1] [i_0]) ? var_15 : -126))) <= ((var_10 + (arr_0 [i_0 + 1] [i_0])))));
        var_21 = (~18546);
        var_22 &= (((((((1 ? 1 : 84))) ? var_14 : ((var_5 ? var_13 : (arr_1 [i_0] [2]))))) + (arr_0 [i_0] [0])));
        var_23 = (min(var_23, var_15));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_24 = ((var_3 < ((min((max((arr_3 [i_1] [i_1]), 9223372036854775807)), ((((arr_3 [i_1] [i_2]) ? 32767 : (arr_5 [i_1])))))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_25 = ((-(((arr_4 [i_1]) ? 123 : 0))));
                            var_26 = (((((!155) >= (20073 + 14476146147351258105)))) | 99);
                            arr_15 [i_4] [i_4] [i_2] [i_4] [i_4] = (arr_5 [i_1]);
                        }
                        arr_16 [i_1] [i_1] [i_2] [i_1] [8] [i_1] = (((0 ? 18159967745331383629 : 0)));
                    }
                }
            }

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    var_27 = (min(var_27, ((((18159967745331383632 << (65535 - 65525))) ^ ((var_4 * (arr_10 [i_1] [i_1] [i_6] [i_6])))))));
                    arr_23 [i_6] [i_1] [i_6] [i_7] |= 196;
                    var_28 = var_8;
                    var_29 += (arr_19 [i_1] [i_2] [i_1] [i_7] [i_1]);
                }
                arr_24 [i_2] = ((!((max(((47009 ? 8444249301319680 : 0)), ((max((arr_9 [i_2] [i_2] [i_2]), (arr_12 [i_1] [i_1] [i_1] [i_1] [1])))))))));
                var_30 = (~2147483647);
            }
            arr_25 [i_2] [i_2] = ((var_18 ? (arr_5 [i_1]) : (0 && var_18)));
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_31 = ((732962481 ? 2676811888 : 1713576551));
            arr_29 [i_8] = (((46216 && 1709) ? ((-((0 ? 2147483647 : 26016)))) : ((((172 ? -1016124643 : (arr_20 [i_8] [i_8])))))));
        }
        var_32 = (((((min(-20, -25198))) ? var_14 : ((0 ? 21 : 286776328378167987)))));
        var_33 ^= ((((max(var_16, var_11))) ? -2147483647 : (((arr_19 [i_1] [i_1] [i_1] [i_1] [i_1]) | (arr_19 [i_1] [0] [8] [i_1] [i_1])))));
        var_34 = ((((((3080888368715085915 & (arr_8 [i_1] [i_1] [i_1] [i_1]))) ^ 24)) | (1 | 32767)));
    }
    var_35 ^= 13;
    #pragma endscop
}
