/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_19 = 762738805;
                    var_20 |= (~65534);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_21 = (-1047 < -448);
                                var_22 = (arr_13 [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_0] [i_0]);
                                arr_15 [10] [i_5] [i_4] [i_3] [10] [10] = -4226788662;
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        var_23 = (max(var_23, ((((arr_10 [i_6] [i_3] [i_3] [i_1] [i_0]) ? (arr_10 [i_0] [i_1] [i_3] [i_6] [i_6]) : (arr_10 [i_0] [i_1] [i_3] [i_6] [i_3]))))));
                        var_24 = (max(var_24, var_2));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_25 |= ((2145386496 <= (442 / 467)));
                        arr_20 [i_0] [i_0] [i_0] [i_0] = -23;
                    }
                }
                for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                {
                    var_26 |= ((max(-10688, 20257)));
                    var_27 |= ((((((18446744073709551615 - var_3) ? ((var_5 ? 450 : -1)) : -69))) ? -1010200055 : (((760503072 > 4) ? 0 : 11764683278163543026))));

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_28 = -29;
                        var_29 = (max((((!(arr_7 [i_1] [17] [i_9])))), ((var_18 + (arr_19 [i_0] [i_1] [i_0])))));
                        var_30 = (min((var_16 * 1), ((max(((min(225, 0))), -7941688988999676392)))));
                        var_31 = ((~(((arr_7 [i_0] [i_1] [i_8]) ^ var_15))));
                    }
                    var_32 |= (3534464223 | -429380955);

                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_33 = 27722;
                        var_34 = arr_5 [i_10] [i_0] [i_8] [i_10];
                        arr_27 [i_0] [i_1] [i_8] [i_10] [i_8] = ((!(((-1 ? 760503072 : 0)))));
                        var_35 = (arr_12 [i_1] [i_1] [i_1] [i_1] [i_10] [i_1]);
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        var_36 = (~442);
                        arr_30 [i_0] [15] [i_8] [i_8] [i_1] = -760503073;
                    }
                }
                arr_31 [i_0] [16] [i_0] |= (min((!1380073660), ((549310901 ? 2963221888667189258 : 549310901))));
                var_37 = (arr_0 [14]);
                var_38 = (max((arr_11 [i_0]), -29));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 0;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        {
                            arr_36 [i_13] = ((-((1 ? 65535 : 18446744073709551615))));

                            for (int i_14 = 0; i_14 < 18;i_14 += 1)
                            {
                                arr_39 [i_0] [i_14] [i_0] [i_0] = (!70);
                                var_39 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_40 |= (((var_7 ? (max(var_12, 9223372036854775807) : 61374))));
    #pragma endscop
}
