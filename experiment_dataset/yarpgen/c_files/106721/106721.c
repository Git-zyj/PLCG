/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    var_14 = var_3;
    var_15 = 18117657589941263222;

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_16 = var_5;
                                var_17 = var_8;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_5] = ((-((((max(var_8, -23553))) ? var_0 : 23553))));

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            arr_15 [i_0] [i_6] [i_0] = ((~(((3649996397612058906 < ((min(var_8, var_0))))))));
                            arr_16 [i_6] = var_6;
                            arr_17 [i_0] [0] [i_6] [i_5] [i_6] = (max((min(var_8, (var_3 - 65))), 140));
                        }
                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            var_18 = ((var_7 || (!1749477305)));
                            arr_20 [i_0] [i_0] [i_2] [i_5] [7] [i_1] = (min((((!(-7770 && var_5)))), (((min(-23553, 3594136956)) + var_4))));
                            var_19 = ((((var_0 ? (!116) : ((73 ? 23553 : 28721)))) % var_2));
                        }
                        for (int i_8 = 1; i_8 < 22;i_8 += 1)
                        {
                            arr_24 [i_0 + 2] [i_0] [i_0 + 3] [i_0] [i_0] = (~18406080922459388980);
                            var_20 += (0 ? (min((-7770 || 4095), 1749477305)) : (((!((min(7770, var_2)))))));
                            arr_25 [i_0] [i_1] = var_2;
                            arr_26 [i_0] [i_1] [i_2] [i_5] [19] = ((-((var_12 ? var_2 : 0))));
                        }
                        var_21 = ((116 >= ((23553 ? (max(1335947050, 35209)) : var_4))));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                    {
                        arr_29 [i_0] [i_0] [11] [6] [i_0] [i_0 + 3] = ((var_3 << (var_1 - 56075)));
                        arr_30 [i_0] [i_1] [i_9] = (((~329086483768288394) ? -967819514 : (var_9 | var_8)));
                        var_22 ^= min(-23553, var_10);
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                    {
                        arr_34 [i_0] [i_0] [i_0] [i_0] = (var_8 & var_0);
                        var_23 = var_1;
                    }
                    arr_35 [i_2] = var_3;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 23;i_13 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            arr_45 [i_14] [i_13 - 2] [i_12] [i_0] [i_0] = var_0;
                            var_24 = (115 * var_11);
                        }
                        arr_46 [i_0] [i_11] [i_12] [i_13] [i_13] = (((((((min(329086483768288394, 1))) ? var_7 : (var_6 ^ var_1)))) < ((-(max(var_8, var_9))))));
                    }
                }
            }
        }

        for (int i_15 = 2; i_15 < 21;i_15 += 1)
        {
            arr_49 [i_0] = ((!(0 ^ 4)));
            arr_50 [i_0] [i_15 - 2] [10] |= var_3;
        }
        /* vectorizable */
        for (int i_16 = 1; i_16 < 23;i_16 += 1)
        {

            for (int i_17 = 1; i_17 < 20;i_17 += 1)
            {
                arr_55 [i_16] [i_16] = (~var_12);
                var_25 ^= ((18117657589941263222 ? var_7 : 1984120493));
                arr_56 [i_16] = var_1;
            }
            var_26 = (min(var_26, var_6));
            arr_57 [i_0 + 3] [14] [i_16] = -28977;
            var_27 = 23553;
        }
        var_28 = ((23553 ? var_6 : ((((!((min(13106114839787680395, 701143532577791933)))))))));
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 1;i_18 += 1)
    {
        arr_61 [i_18] = -7924056127353268246;
        arr_62 [1] [5] = (var_5 + 30);
        var_29 |= ((!(((-1749477305 ? 186966571659903333 : var_0)))));
    }
    #pragma endscop
}
