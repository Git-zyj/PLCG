/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = 1;
                var_18 |= 770871328;
            }
        }
    }
    var_19 |= var_7;

    /* vectorizable */
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        var_20 = 119;

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                arr_13 [i_2] [i_3] [i_3] = 18060897778965172914;
                arr_14 [i_3] [10] [i_4] = 3524095941;
            }
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                arr_18 [i_3] = 770871355;
                var_21 += 72;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 17;i_7 += 1)
                    {
                        {
                            arr_25 [1] [17] [i_7 - 3] [i_7 + 2] [18] [i_7] [i_3] = 26521;
                            var_22 = (max(var_22, 1));
                        }
                    }
                }
            }
            arr_26 [i_3] = 2782531872;
            var_23 = (max(var_23, 164));
            var_24 = 95;
            var_25 += 24847;
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            var_26 = (min(var_26, 770871377));
            arr_31 [i_8] [i_8] = 12416622727522411253;
            var_27 = 1849;
        }
        for (int i_9 = 1; i_9 < 18;i_9 += 1)
        {
            var_28 = (max(var_28, 3524095968));
            var_29 = 3524095996;
        }
    }
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        var_30 = 9377;
        var_31 -= 1510211532;
        arr_37 [i_10] |= 23775;

        /* vectorizable */
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            var_32 += -9726;
            var_33 = 106;
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
        {
            var_34 = 1868005171;
            var_35 = 232;
            var_36 += -39;
            /* LoopNest 2 */
            for (int i_13 = 2; i_13 < 21;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 23;i_14 += 1)
                {
                    {
                        arr_48 [i_10] = 263045343;
                        var_37 = -5980;
                        var_38 = 0;
                        arr_49 [i_14] [i_13 - 2] [i_12] [i_10] |= 27799;
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_16 = 3; i_16 < 20;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 23;i_17 += 1)
                {
                    {

                        for (int i_18 = 0; i_18 < 23;i_18 += 1)
                        {
                            var_39 = 1207907207;
                            var_40 = 10301;
                            arr_61 [i_10] [i_10] [17] [i_17] [i_15] = 230309650;
                            var_41 = 45759;
                            var_42 = 1;
                        }
                        arr_62 [i_15] [i_15] [i_16] [i_17] [i_15] = 233126913932256971;
                        var_43 = 72;
                    }
                }
            }
            var_44 = 8664656013048761215;
        }
        /* vectorizable */
        for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
        {
            var_45 -= 93;
            var_46 = 40709;
        }
        arr_66 [i_10] [i_10] |= 132;
    }
    for (int i_20 = 0; i_20 < 19;i_20 += 1)
    {
        var_47 = 16063527045490751883;
        arr_69 [i_20] [i_20] = -87;
        arr_70 [i_20] = 1;
        var_48 = 27799;
    }
    var_49 = var_15;
    #pragma endscop
}
