/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_16 ? var_7 : var_2));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_4 [4] = (max((((var_14 * var_11) ? ((var_17 ? var_8 : var_15)) : ((min(0, var_16))))), ((((max(var_7, 20098))) ^ (var_15 >= var_14)))));
        arr_5 [i_0] = (((20098 < 16) - ((1 ? 0 : var_12))));

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_20 += (((~1574) ? (~1) : (~1)));
                            var_21 = ((~(((var_8 != 0) << (var_9 - 9892)))));
                            arr_17 [i_0] [12] [i_2] [12] [i_4] [12] [i_4] = ((((min(((min(var_12, 1))), ((var_14 ? 0 : 20098))))) || 208134730));
                        }
                    }
                }
            }
            var_22 = 124;
            var_23 = (((((-var_17 ? (((var_3 + 2147483647) << (var_5 - 235))) : (min(-20099, 697106384))))) ^ (~var_0)));
            arr_18 [i_1] [i_1] = var_10;
            arr_19 [i_0] [i_0] [i_1] = (((((((max(var_15, 4398034622704402277))) ? var_0 : ((max(0, 1268828574)))))) ? var_7 : var_0));
        }
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            var_24 = ((~((-((-1633331028 ? var_2 : 0))))));
            var_25 = var_17;
            arr_24 [i_5] [i_0] [i_5] = (-var_9 != 1);
        }

        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_26 *= ((~(((((1 ? -124 : 0)) > var_7)))));
            var_27 = (min(var_27, ((((0 + -var_8) < ((var_9 ? 0 : 0)))))));
            var_28 = 39;
            var_29 = (~-20098);
            arr_27 [i_0] = (max(((1 ? 0 : 26999)), (var_4 & 1)));
        }
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
    {
        arr_30 [i_7] = (min((var_5 <= 1), (!var_4)));
        var_30 -= (max(((2348 - (15287 / 1))), ((~(var_9 != 48883)))));
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
    {
        var_31 = (!(var_14 * var_18));
        var_32 = max((max(-3957404505939394522, 56768)), (((!((max(1, 63187)))))));
        arr_33 [i_8] = (min((min(var_12, ((max(1, -15288))))), 79));
        arr_34 [2] = (((((((min(981738506, 6310))) ? (~var_15) : 63188))) | ((var_9 ? -var_11 : var_0))));
        arr_35 [i_8] = 5170207431165686956;
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 17;i_12 += 1)
                {
                    {
                        arr_46 [i_9] [16] [i_11 - 1] [i_12] = var_9;

                        for (int i_13 = 1; i_13 < 17;i_13 += 1)
                        {
                            var_33 += ((((1 ? 2347 : 3961461886))) ? -15288 : var_10);
                            arr_50 [i_12 - 1] = (-15287 && 2178435294);
                            arr_51 [i_9] [i_10] [i_11 - 1] [i_12] = (!1);
                            var_34 = (~15287);
                        }
                    }
                }
            }
        }
        var_35 += ((var_12 ? var_12 : 1490130985));
    }

    /* vectorizable */
    for (int i_14 = 0; i_14 < 0;i_14 += 1)
    {
        var_36 = ((((-827 ? var_6 : var_18))) ? var_14 : 38291);
        var_37 = (~var_12);
        var_38 = (1842380363 + var_4);
        var_39 = 38291;
        arr_54 [i_14] [i_14] = 722201916;
    }
    var_40 = min(((var_13 - (((1842380363 ? var_7 : var_17))))), ((15287 | ((1156000545 ? var_17 : 3895331671)))));
    #pragma endscop
}
