/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= -var_8;
    var_18 *= 52;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                var_19 = var_9;
                arr_10 [i_0] [i_1] [i_2] = ((var_13 ? (arr_4 [i_0]) : var_2));
            }
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                var_20 = var_5;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_21 = (arr_12 [3] [i_1] [i_1] [3]);
                            arr_17 [19] [i_0] [i_1] [i_1] [i_1] [i_5] = (((arr_16 [i_3] [i_1]) ? (arr_16 [i_0] [i_1]) : (arr_16 [i_1] [i_1])));
                            var_22 = (((arr_4 [i_3]) ? 9729159245065339101 : (arr_1 [i_0] [i_4])));
                            var_23 = (arr_1 [11] [i_5]);
                            var_24 *= arr_6 [i_0] [i_1] [i_3];
                        }
                    }
                }
            }
            arr_18 [i_0] [i_1] [i_1] = (arr_8 [i_0] [i_0] [i_1] [i_0]);
            var_25 = (max(var_25, ((((var_15 ? 17588721361446169073 : var_10))))));
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            arr_21 [1] [i_6] = ((((((((var_4 ? var_14 : (arr_6 [i_0] [i_6] [i_6]))) % var_4)) + 2147483647)) >> ((max((arr_8 [i_0] [i_0] [i_0] [i_6]), (arr_8 [i_0] [i_6] [i_6] [i_0]))))));

            for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    arr_26 [i_0] [11] [i_7] [i_8] = ((var_9 ? 127 : ((((((arr_7 [i_0] [i_7]) ? (arr_5 [i_0] [i_0] [18]) : (arr_12 [i_0] [i_6] [i_7] [i_6])))) ? (arr_16 [i_6] [i_6]) : (arr_6 [17] [i_7] [i_7])))));
                    arr_27 [i_0] = (((min(((var_16 ? (arr_24 [20] [i_8]) : 32761)), 8717584828644212515)) / 127));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_26 *= (arr_0 [i_6] [i_9]);
                    var_27 *= (arr_9 [i_0] [i_6] [i_0] [i_0]);
                    var_28 = (arr_12 [i_0] [i_6] [i_0] [i_9]);
                    var_29 *= (arr_12 [i_0] [i_6] [i_6] [i_9]);
                }
                var_30 = (arr_4 [i_0]);
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
            {
                arr_34 [i_0] [i_0] [14] [i_10] = ((470837571 < (arr_33 [i_0] [i_6])));
                var_31 = (((arr_28 [i_0] [i_0] [4] [i_10]) ? var_1 : (arr_11 [11] [i_0] [i_6] [i_10])));
                var_32 *= (arr_28 [i_0] [i_6] [i_6] [i_10]);
            }
            for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
            {
                var_33 = var_10;
                arr_39 [i_0] [i_6] [19] [i_11] = ((var_7 ? (arr_32 [i_0] [i_0] [i_6] [i_0]) : var_9));

                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    var_34 = ((((((var_16 ? -133 : 1)))) ? (min(((((arr_6 [i_6] [i_11] [i_12]) ? (arr_6 [i_0] [18] [18]) : var_7))), (max((arr_20 [i_0] [17]), 511)))) : 4294967291));
                    var_35 *= ((~((var_14 ? (arr_41 [i_0] [13] [i_11] [i_12]) : (arr_7 [i_0] [i_12])))));
                    var_36 *= ((((max(var_0, 45))) * ((var_12 ? 127 : (arr_7 [i_0] [i_6])))));
                }
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    arr_48 [i_0] [i_0] [i_0] [i_11] [i_13] = ((-((132 ? 0 : (((arr_6 [i_0] [i_0] [i_13]) ? 2 : (arr_29 [i_0] [i_0] [i_6] [i_0] [i_0])))))));
                    arr_49 [i_0] [i_6] [i_11] [15] = (!((((arr_19 [i_6] [i_11] [i_13]) ? ((46808 ? (arr_2 [i_0] [i_13]) : (arr_1 [i_0] [i_6]))) : var_2))));
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    var_37 = (min(var_37, (arr_42 [i_0] [i_6] [i_11] [i_14])));
                    var_38 = (((arr_6 [i_6] [1] [i_14]) ? (arr_30 [i_0] [i_6] [1] [9] [i_14]) : (arr_30 [i_0] [14] [i_6] [14] [i_14])));
                    arr_54 [i_0] [i_6] [i_11] [i_14] = ((((((arr_25 [i_0] [i_0] [i_6] [1] [i_0] [i_14]) ? (arr_7 [i_11] [i_14]) : (arr_23 [i_11] [i_6] [i_11])))) ? (arr_50 [i_0] [i_6] [i_11] [i_14] [i_14]) : (arr_6 [i_0] [i_6] [i_14])));
                }
                /* vectorizable */
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    arr_59 [i_11] [i_15] = (arr_1 [i_6] [i_11]);
                    var_39 *= (arr_13 [i_0] [i_6] [i_11] [i_15]);
                    var_40 *= (arr_47 [i_0] [i_6] [i_0] [i_15]);
                    var_41 *= -57;
                }
            }

            for (int i_16 = 0; i_16 < 21;i_16 += 1)
            {
                var_42 = ((((max((arr_31 [i_0] [i_6] [i_16] [i_16]), (((arr_13 [i_16] [i_6] [i_16] [i_0]) ? var_9 : (arr_43 [i_0])))))) ? (arr_11 [i_0] [i_0] [i_6] [1]) : var_6));
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 21;i_18 += 1)
                    {
                        {
                            arr_69 [i_0] [i_0] [i_16] [i_16] [i_17] [i_16] [i_18] = -470837572;
                            var_43 = (((var_4 ^ var_11) ? ((~((max(var_11, var_10))))) : var_14));
                        }
                    }
                }
            }
        }
        var_44 = ((((((arr_53 [i_0] [i_0] [17] [6]) ? (arr_53 [i_0] [i_0] [i_0] [i_0]) : (arr_53 [i_0] [i_0] [i_0] [i_0])))) ? ((var_6 ? var_6 : (arr_53 [i_0] [i_0] [i_0] [i_0]))) : var_13));
        arr_70 [i_0] [i_0] = (max((((min(-26924, 4294967287)))), ((~((6 ? var_3 : var_16))))));
        arr_71 [i_0] [0] = 46808;
        arr_72 [i_0] = -96;
    }

    /* vectorizable */
    for (int i_19 = 0; i_19 < 17;i_19 += 1)
    {
        arr_76 [11] [i_19] = 26921;
        var_45 = (((arr_0 [i_19] [i_19]) ? (arr_52 [i_19] [i_19] [i_19] [i_19] [i_19]) : (arr_30 [i_19] [i_19] [1] [5] [i_19])));
        arr_77 [i_19] = ((((var_6 ? (arr_23 [i_19] [i_19] [i_19]) : var_16))) ? (arr_75 [i_19] [i_19]) : (arr_23 [i_19] [i_19] [i_19]));
        var_46 = (arr_47 [i_19] [i_19] [i_19] [i_19]);
        var_47 *= var_15;
    }
    #pragma endscop
}
