/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_11 = 15722851136672399551;
        var_12 = 15722851136672399551;
        var_13 -= (max((arr_0 [i_0]), var_2));
        var_14 = (min(var_14, (!7)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_15 = (min(var_15, (((((((arr_3 [i_1]) ? (arr_5 [i_1] [i_1]) : 7))) > 15722851136672399559)))));
        var_16 = 549755813856;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_17 = (--15722851136672399569);
        arr_9 [i_2] = (((761531763 ^ -116) & 19));

        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
            {
                var_18 = -121;
                var_19 = (((arr_4 [i_4]) ? 42 : var_8));
                arr_17 [i_2] [i_3] [i_4] [i_3] = (15 * var_0);
            }
            for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
            {
                var_20 = (max(var_20, var_7));
                var_21 -= 15722851136672399549;
            }
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                var_22 = 225;
                var_23 = ((!(!-17833)));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        {
                            arr_30 [i_2] [i_3] [i_6] [i_2] [i_8] [i_2] = (arr_10 [i_2]);
                            arr_31 [i_2] [i_3] [i_3] [i_6] [i_6] [i_8] = (arr_25 [i_2] [i_3] [i_2] [i_8]);
                        }
                    }
                }
            }
            arr_32 [i_2] [i_2] [i_2] = ((-8666 << (((arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) + 1421487893))));
            var_24 = 8666;
        }
        for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
        {
            var_25 = -19;
            arr_35 [i_2] [i_2] = 11463;
        }
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            arr_38 [i_2] = var_7;
            var_26 -= var_9;
        }
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            var_27 = -113;

            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                var_28 = var_8;
                var_29 = (~16031441355376037288);
            }
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                var_30 = (((!31) ^ (((8668 || (arr_37 [i_2]))))));
                arr_46 [i_2] [i_13] [i_13] [i_13] = (arr_16 [i_2] [i_11] [i_11] [i_13]);

                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    var_31 = var_0;
                    arr_50 [i_11] [i_13] [i_11] [i_11] [i_11] [i_2] = ((var_4 - (arr_7 [i_2] [i_2])));
                    arr_51 [i_2] [i_2] [i_13] [i_2] [i_2] [i_2] = ((var_10 ? (~var_3) : ((((arr_15 [i_2] [i_2] [i_2] [i_2]) > (arr_11 [i_2] [i_2]))))));
                }
            }
            var_32 = -956540358;
        }
        var_33 = ((-6267826021213561520 ? var_3 : (~103)));
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 20;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 20;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 20;i_17 += 1)
                {
                    {

                        for (int i_18 = 0; i_18 < 20;i_18 += 1)
                        {
                            var_34 = (((arr_33 [i_18] [i_18]) == -2060160025));
                            var_35 = (min(var_35, (((9223372036854775782 - (arr_36 [i_18] [i_15] [i_2]))))));
                            var_36 = (3600667261962693262 + 64);
                        }
                        for (int i_19 = 0; i_19 < 20;i_19 += 1)
                        {
                            var_37 = (arr_40 [i_15] [i_15]);
                            var_38 = (((arr_7 [i_2] [i_2]) ? 98 : var_3));
                            var_39 = (min(var_39, (30 == 1089516928)));
                        }
                        for (int i_20 = 0; i_20 < 20;i_20 += 1)
                        {
                            arr_72 [i_17] [i_16] = (55243 * 10);
                            var_40 -= ((!(arr_69 [i_2] [i_15] [i_16] [i_17] [i_20] [i_20])));
                        }
                        for (int i_21 = 0; i_21 < 20;i_21 += 1)
                        {
                            var_41 = (0 > var_1);
                            arr_77 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (arr_41 [i_21] [i_15] [i_16] [i_17]);
                        }
                        var_42 = (min(var_42, (arr_14 [i_2] [i_2] [i_2] [i_2])));

                        for (int i_22 = 0; i_22 < 20;i_22 += 1)
                        {
                            var_43 += (((arr_63 [i_2] [i_2] [i_2] [i_2] [i_2]) && (arr_63 [i_17] [i_17] [i_16] [i_17] [i_22])));
                            var_44 = (arr_26 [i_15] [i_17] [i_2] [i_15] [i_2]);
                        }
                        for (int i_23 = 0; i_23 < 20;i_23 += 1) /* same iter space */
                        {
                            var_45 = (arr_76 [i_23] [i_16] [i_16] [i_15] [i_2]);
                            var_46 += -80;
                        }
                        for (int i_24 = 0; i_24 < 20;i_24 += 1) /* same iter space */
                        {
                            arr_86 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (arr_18 [i_17] [i_17] [i_17] [i_17]);
                            arr_87 [i_2] [i_15] [i_2] [i_17] [i_2] = (~32);
                            var_47 = (~1);
                        }
                        for (int i_25 = 0; i_25 < 20;i_25 += 1)
                        {
                            var_48 = (max(var_48, -68));
                            arr_90 [i_2] [i_15] [i_2] [i_17] [i_25] = (arr_7 [i_16] [i_17]);
                        }
                        arr_91 [i_17] [i_15] [i_2] = ((-(arr_8 [i_16] [i_15])));
                    }
                }
            }
        }
    }
    var_49 = (!243);
    #pragma endscop
}
