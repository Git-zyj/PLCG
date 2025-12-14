/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((89 | ((3579798811438190623 ? (var_12 >= 682826808181793180) : 211))));
    var_21 = 4294967295;
    var_22 = var_9;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_23 |= max(211, 192);
        arr_4 [0] [i_0] = (((((~39391) < (((arr_0 [i_0]) ? var_2 : (arr_2 [i_0] [i_0]))))) ? ((((((var_13 << (2101139240 - 2101139226))) > -65535)))) : 1));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_24 = ((!(arr_7 [i_1])));

        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            var_25 = var_4;
            var_26 = (~var_8);
            arr_11 [16] [0] |= ((-4503599627370488 <= (arr_9 [i_2 + 1] [i_2])));
            var_27 = ((6711061353197860930 ^ (arr_8 [i_2 + 1] [i_1] [i_2 - 2])));
        }

        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            arr_14 [i_1] [i_3 + 3] = ((var_9 ? (arr_8 [i_3 - 2] [i_1] [i_3 + 1]) : (arr_8 [i_3 + 1] [i_1] [i_3 - 2])));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_28 = (arr_10 [i_6 - 1] [i_6 - 2] [i_1]);
                            var_29 = 245;
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 20;i_9 += 1)
                {
                    {
                        var_30 = ((!(arr_30 [i_9 + 2] [i_1] [i_1] [i_9 + 2])));

                        for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
                        {
                            arr_35 [i_8] [i_1] = (((arr_22 [i_1]) % (arr_5 [i_9 - 2] [i_1])));
                            var_31 = var_17;
                            arr_36 [i_1] [i_1] [i_9 - 1] = ((0 + (arr_15 [i_7] [i_8])));
                        }
                        for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                        {
                            var_32 = (14433823720107821436 < var_5);
                            var_33 *= ((-(arr_20 [i_9 - 2] [18] [2] [i_11] [i_11])));
                        }
                        for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
                        {
                            var_34 |= (!var_3);
                            arr_42 [i_1] [i_1] [i_1] [i_1] [i_1] [7] [i_1] = (14433823720107821436 >= var_10);
                            var_35 = ((146 ? 19423 : (arr_30 [i_1] [i_7] [i_1] [i_12])));
                        }
                        for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
                        {
                            arr_47 [i_1] [i_1] [i_8] [i_9 + 2] = (!var_1);
                            var_36 = ((!(arr_19 [i_9 + 2] [i_9 - 1] [i_9 - 2] [i_9 + 1] [i_9 + 1] [i_9 + 1])));
                        }
                        var_37 *= (arr_17 [i_9 - 1]);
                    }
                }
            }
            var_38 = var_4;
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 22;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        {
                            var_39 = (arr_16 [14] [i_1] [i_14]);
                            var_40 += ((!(arr_29 [4] [i_7] [i_14] [i_15])));
                        }
                    }
                }
            }

            for (int i_17 = 4; i_17 < 20;i_17 += 1) /* same iter space */
            {
                var_41 = (3338089433 - var_3);
                arr_58 [i_1] [i_7] [i_17] [i_17] = (13835058055282163712 * 37074);
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 22;i_18 += 1)
                {
                    for (int i_19 = 2; i_19 < 19;i_19 += 1)
                    {
                        {
                            var_42 = ((var_17 ^ (arr_61 [i_17 - 4] [i_1] [i_17] [i_18] [2] [i_1])));
                            var_43 = ((-86 && (((var_13 ? 72 : var_13)))));
                            var_44 = (((((var_19 + (arr_16 [i_1] [i_1] [i_17])))) >= (arr_45 [i_1] [16] [i_17 - 1] [i_19 + 1] [i_19 + 2])));
                        }
                    }
                }
                arr_64 [10] [i_7] [i_1] [i_7] = var_16;
            }
            for (int i_20 = 4; i_20 < 20;i_20 += 1) /* same iter space */
            {
                var_45 |= (arr_27 [i_20] [i_20 - 4]);
                var_46 = var_15;
            }
        }
    }
    #pragma endscop
}
