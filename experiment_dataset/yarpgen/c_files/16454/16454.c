/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_5;

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    {
                        var_11 |= ((~(arr_4 [i_0 + 3] [i_3 + 2])));
                        arr_8 [i_2] |= (min(65535, 8355840));
                    }
                }
            }
        }
        arr_9 [i_0] = ((((min((!var_0), 762376253))) ? (arr_1 [i_0 + 1]) : 8577210587423372557));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 11;i_4 += 1)
    {
        var_12 &= 8577210587423372557;
        var_13 *= ((((9869533486286179059 && (arr_5 [i_4] [i_4] [i_4 + 1] [i_4]))) ? (arr_6 [i_4 - 2] [i_4 - 2]) : ((var_1 ? (arr_11 [6] [6]) : 0))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {

                    for (int i_7 = 4; i_7 < 11;i_7 += 1)
                    {
                        arr_22 [i_4] [i_5] [i_5] [i_7] [i_5] [i_4] = (arr_10 [i_5] [i_4]);
                        var_14 *= (((((0 ? 0 : 64))) ? (arr_15 [i_7] [i_4 - 2]) : (arr_4 [i_4] [i_5])));
                        var_15 = (min(var_15, ((((arr_2 [i_7]) ? (arr_2 [i_6]) : 0)))));
                    }
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_16 = (max(var_16, -105));
                        arr_25 [i_4 - 2] [i_6] [i_6] [i_8] |= ((0 ? var_2 : var_6));
                        arr_26 [i_8] [i_8] [i_4] [i_5] [i_4] = 255;
                        var_17 += (((((arr_14 [i_6]) ? var_4 : var_6)) >> (((arr_16 [i_4] [i_4 - 1] [i_8]) + 74))));
                        var_18 ^= (arr_20 [i_4 + 1] [i_4 - 2] [i_4 + 1] [i_4 + 1] [i_6] [i_4]);
                    }
                    var_19 ^= 105;
                }
            }
        }

        for (int i_9 = 2; i_9 < 11;i_9 += 1)
        {
            var_20 = 236;

            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        {
                            var_21 ^= (!4552050683023794219);
                            var_22 *= ((105 ? var_7 : (arr_6 [i_9 - 2] [i_4 + 1])));
                            var_23 = (min(var_23, 40292));
                            arr_37 [i_4] [i_4] [i_10] [i_4] [i_4] = ((30460 > (arr_31 [i_4 - 2] [i_9 + 1] [i_4])));
                            var_24 = var_8;
                        }
                    }
                }
                var_25 *= ((!(arr_5 [i_4 + 1] [i_4 - 1] [i_4 - 2] [i_9 - 2])));
            }
            for (int i_13 = 3; i_13 < 10;i_13 += 1)
            {
                arr_40 [i_4] [2] [i_4] [i_4] &= 22658;
                var_26 *= -1756793060;
            }
            var_27 += (((7022974049624679973 ? 9138193080488898721 : (arr_28 [i_4]))));
        }
    }
    for (int i_14 = 0; i_14 < 25;i_14 += 1)
    {
        var_28 = (-87 != 24);
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 25;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 23;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 25;i_17 += 1)
                {
                    {
                        var_29 = ((var_7 / (max((arr_46 [i_14] [i_16] [i_16 - 1] [i_16 + 1]), ((min((arr_42 [i_14] [i_14]), var_6)))))));
                        var_30 |= (((-134217728 - -10) - (arr_41 [i_16 - 1])));
                        var_31 = (arr_45 [i_17] [i_17] [i_14]);
                        var_32 ^= (max(((105 ? (11004676716384684575 * 16) : 2458760782)), -11004676716384684575));
                        var_33 = (min(var_33, 11004676716384684575));
                    }
                }
            }
        }
        var_34 = ((-(((!((max((arr_49 [i_14] [i_14] [i_14]), 3574683521))))))));
    }
    #pragma endscop
}
