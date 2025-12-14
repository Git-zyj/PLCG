/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_16 = ((((!(((var_9 ? 146 : -9))))) ? (-24360 * -24360) : (arr_0 [0])));
        var_17 += ((((((max(var_3, var_8))) == 0)) ? (((((24351 ? var_3 : (-127 - 1))) - 25))) : (-9223372036854775807 - 1)));
        var_18 = -3196315108559096826;
        var_19 = 24351;
        arr_2 [i_0] = ((((arr_1 [i_0 - 1] [i_0 - 1]) == var_1)) ? var_12 : ((-(min(var_5, -67)))));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_20 -= (max(970072587513453324, ((((min(var_7, var_7))) ? (arr_3 [0]) : 65532))));
        arr_5 [i_1] = var_6;
        arr_6 [i_1] = var_2;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    arr_11 [i_1] [i_1] = ((504 ? var_5 : ((((!(arr_8 [i_1] [i_3])))))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_21 = var_0;
                        var_22 = (max(var_22, var_3));
                        arr_15 [7] [7] [i_3] [i_1] = (((arr_10 [i_1] [i_1 + 1] [i_1] [i_1]) ? (arr_10 [i_1 + 3] [i_1 + 1] [i_1 + 3] [i_1]) : 65528));
                        arr_16 [i_1] [i_1] = (((arr_12 [i_1]) ? (arr_12 [i_1]) : (arr_13 [i_1 + 1])));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_23 = (var_10 < -970072587513453337);
                        var_24 += 6154523308439188626;
                    }
                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        var_25 = 2289450591668986430;
                        var_26 = (max(var_26, 24351));
                        arr_21 [i_1] [i_6] = ((var_6 < ((max(((min(3, (arr_18 [i_1])))), (min(var_14, 189)))))));
                    }
                }
            }
        }
        var_27 = (-1 - 24350);
    }
    var_28 = (min((max(((((-30 + 2147483647) << (118 - 118)))), 970072587513453308)), var_10));
    var_29 = (min(var_29, (-119 | 970072587513453308)));
    var_30 = var_1;

    for (int i_7 = 2; i_7 < 15;i_7 += 1)
    {
        var_31 = -var_4;
        var_32 = (max(var_7, (((arr_12 [i_7]) - var_3))));
    }
    #pragma endscop
}
