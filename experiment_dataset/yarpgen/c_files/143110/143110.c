/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 12;i_1 += 1) /* same iter space */
        {
            var_19 |= (((var_18 - 7201583702725769080) ? (arr_4 [i_0]) : ((2091413166 ? 1897116798413495683 : var_18))));
            var_20 *= ((2561768207 ? -1897116798413495686 : 1897116798413495697));
        }
        for (int i_2 = 3; i_2 < 12;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                arr_9 [i_0] [i_0] [i_0] [10] = (var_4 ? ((var_17 ? 4214725073 : -5297483382013240305)) : (var_2 != var_6));
                var_21 = ((var_11 ? 1897116798413495683 : 6752335343405589992));
                var_22 = var_17;
            }
            for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_4] [14] [i_0] [i_6] = var_6;
                            arr_18 [i_0] [i_2 + 3] [6] [i_5] [i_6] = var_12;
                            arr_19 [i_2] [2] [10] [i_5] [i_0] [i_6] = ((arr_11 [i_2 + 1] [i_2 + 4] [i_2 + 3] [i_2 - 1]) ? (arr_16 [i_2 + 2] [i_2 - 2]) : -1897116798413495683);
                            var_23 = (max(var_23, (((45621 ? 1897116798413495705 : var_1)))));
                            var_24 ^= ((6752335343405589984 * 45630) ? var_5 : var_10);
                        }
                    }
                }
                arr_20 [i_0] [i_0] [i_0] = (((((-1 ? 9221120237041090560 : 0))) && (var_8 % var_15)));

                for (int i_7 = 3; i_7 < 15;i_7 += 1)
                {
                    arr_25 [i_0] [i_2] [i_0] = var_13;
                    var_25 = ((var_18 ? ((var_17 ? var_14 : var_6)) : (~var_14)));
                }
            }
            for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
            {
                arr_28 [i_8] [i_8] = var_1;
                arr_29 [i_8] [i_8] = (((arr_14 [i_2 - 2] [i_2] [i_2] [i_2 + 4] [i_2 + 3] [i_2 + 4]) ? var_5 : 32767));
                arr_30 [i_8] = arr_4 [i_0];
                arr_31 [13] [i_2] [i_8] [i_8] = var_13;
                arr_32 [i_0] [i_0] [i_8] [i_8] = ((!(arr_27 [i_2 + 4] [i_2] [i_8])));
            }
            var_26 = (min(var_26, (arr_26 [i_0] [i_0])));
            arr_33 [i_0] &= ((-1243245803 ? (((arr_6 [11]) ? -1243245808 : var_3)) : ((var_6 ? -2037829883630470451 : var_18))));
        }
        for (int i_9 = 3; i_9 < 12;i_9 += 1) /* same iter space */
        {
            arr_38 [i_9] = ((-1 ? var_9 : (arr_22 [i_9 - 2] [i_9 + 3] [i_9] [i_9] [i_9])));
            var_27 = var_5;
            var_28 *= (500319289324608149 && var_17);
            arr_39 [i_9] [7] = (-((var_5 ? var_18 : (arr_14 [i_0] [i_0] [i_0] [i_0] [i_9] [i_9 + 4]))));
        }
        var_29 = var_10;
        var_30 = (((var_14 ^ var_1) & (65535 ^ 7)));
        var_31 |= 1795643731;
    }
    var_32 = (min(var_32, (var_10 - 79)));
    var_33 = -25;
    var_34 = (min(var_34, (((var_13 ? (var_14 - var_13) : var_6)))));
    var_35 = var_17;
    #pragma endscop
}
