/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_16 += 536870911;
            var_17 &= 29373;
            /* LoopNest 3 */
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_18 = ((min(var_4, var_14)));
                            var_19 += (max((((arr_4 [i_0] [i_2 - 2] [i_0]) ? -29373 : (min(0, var_13)))), (((!(((var_2 ? var_7 : (arr_11 [i_0] [1] [i_2] [i_3])))))))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_20 = ((((!(2648237028 - 536870894)))));
            arr_17 [i_0] [i_0] = max(((~(!88))), (arr_2 [i_0] [i_5]));
            arr_18 [i_5] [i_0] = (((((((min(-1, var_2))) ? 3758096401 : 255))) ? ((((!644222450) * ((29359 ? 54 : -667909318))))) : ((max(536870894, var_9)))));
            arr_19 [i_0] [3] = var_6;
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            arr_23 [i_0] = var_14;
            arr_24 [i_0] = 3758096401;
        }
        arr_25 [i_0] = ((144115188075855871 ? 17185520887863884174 : (((3758096401 ? var_9 : var_9)))));
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 14;i_8 += 1)
            {
                {

                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        var_21 |= (~(!-var_11));
                        arr_34 [i_0] [i_7] [i_9] = var_8;
                    }
                    for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                    {
                        var_22 = (((!(129 < 29373))));
                        var_23 = -1;
                    }
                    for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                    {
                        var_24 = -var_11;
                        var_25 = ((((((124 ? (arr_40 [i_0] [i_7 - 1]) : -2147483645))) ? var_3 : (~-4096))));
                        var_26 &= var_11;
                        var_27 = (max((~var_12), (min(29382, 0))));
                        arr_41 [i_0] [i_0] [i_0] [4] = max((((var_12 != (arr_30 [i_0] [i_7] [i_8 - 2] [i_11])))), -32587);
                    }
                    arr_42 [i_0] [i_7 - 2] [i_8] |= var_12;
                }
            }
        }
        var_28 = ((4294967291 ? ((((var_7 ? var_3 : 216)))) : (min((min(var_1, 0)), var_3))));
        arr_43 [i_0] [i_0] = (-(~var_2));
    }
    for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                {
                    var_29 -= (!var_10);
                    /* LoopNest 2 */
                    for (int i_15 = 3; i_15 < 23;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 21;i_16 += 1)
                        {
                            {
                                var_30 -= (max(4294967294, 1));
                                var_31 = (min(353839986, (~var_0)));
                            }
                        }
                    }
                }
            }
        }
        var_32 = ((~(~12292633763420442721)));
        /* LoopNest 3 */
        for (int i_17 = 1; i_17 < 23;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 24;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 24;i_19 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_20 = 0; i_20 < 24;i_20 += 1)
                        {
                            arr_70 [i_12] [i_17] [i_18] [i_19] [i_20] = 126;
                            var_33 = ((+((1 ? (arr_57 [i_12] [i_17] [i_18] [i_18] [i_19] [i_20]) : 1))));
                        }
                        /* vectorizable */
                        for (int i_21 = 0; i_21 < 24;i_21 += 1)
                        {
                            var_34 = (((arr_52 [i_17 - 1] [i_17]) ? var_13 : ((1 ? -7810308746300744135 : var_13))));
                            arr_73 [i_12] [i_17] [i_18] [i_19] [i_21] = 125;
                            var_35 = (min(var_35, ((!(arr_59 [i_18])))));
                            arr_74 [i_21] [i_17] = 128;
                        }
                        var_36 ^= ((var_6 ? 1 : 68719460352));
                        arr_75 [i_12] [i_17] [i_18] [i_17] [i_18] [i_19] = ((((var_5 ? var_14 : 4886641141416866982)) << (!var_9)));
                        var_37 = 29373;
                    }
                }
            }
        }
    }
    for (int i_22 = 0; i_22 < 24;i_22 += 1) /* same iter space */
    {
        var_38 *= ((~((65535 ? var_11 : var_1))));
        /* LoopNest 2 */
        for (int i_23 = 4; i_23 < 22;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 24;i_24 += 1)
            {
                {
                    var_39 = var_3;
                    var_40 ^= var_6;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_25 = 1; i_25 < 23;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 24;i_26 += 1)
            {
                {
                    var_41 = (((((min(var_3, 41706)))) ? (((min(var_6, (max(41706, var_0)))))) : ((~((var_10 ? 4260103498053108084 : var_6))))));
                    /* LoopNest 2 */
                    for (int i_27 = 0; i_27 < 24;i_27 += 1)
                    {
                        for (int i_28 = 0; i_28 < 24;i_28 += 1)
                        {
                            {
                                arr_94 [i_22] [i_25] [i_26] [i_26] [i_22] [i_28] = ((((min(14186640575656443534, var_14)))));
                                var_42 = var_1;
                                arr_95 [i_28] [i_27] [i_26] [i_25] [i_22] = min((((((1581636373 ? 0 : -29374))) ? (((arr_66 [i_28] [i_28] [i_28] [i_28] [i_28] [i_28]) ? var_5 : var_11)) : ((var_14 ? 21 : 2954228355301370327)))), (((!(!var_0)))));
                                var_43 = ((var_6 ? (((((var_11 ? var_8 : -29377))) ? var_11 : (((28756 ? 77 : var_3))))) : (((((arr_46 [i_28]) > (((min((arr_60 [i_22] [i_25 + 1]), (arr_76 [i_22] [17])))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_44 = var_8;
    #pragma endscop
}
