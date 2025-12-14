/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += var_9;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 = (min(var_14, (arr_0 [i_0])));
        var_15 -= (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_16 -= var_5;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                    {
                        var_17 = (min(var_17, 1125899906842623));
                        var_18 ^= ((((536608768 && (arr_4 [i_2]))) ? (arr_7 [i_3] [i_1] [i_1]) : ((((arr_5 [i_0] [i_2] [i_3]) ^ 255)))));

                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            var_19 ^= ((-(((arr_4 [i_1]) << (151 - 143)))));
                            var_20 &= (((arr_1 [i_0]) << (((arr_5 [i_4] [i_2 + 2] [i_2 + 2]) + 27330))));
                            var_21 = 2000404545;
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_22 ^= (arr_1 [i_1]);
                            var_23 ^= ((((arr_9 [i_0] [i_0]) ? -687065575 : 1125899906842623)));
                        }
                        var_24 = (min(var_24, (arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1])));
                        var_25 -= (((arr_12 [i_0] [i_1] [i_0] [i_3]) ? 7700293862390004141 : ((((arr_5 [i_1] [i_1] [i_0]) & 245)))));
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            var_26 ^= var_1;
                            var_27 += ((!(arr_19 [i_7])));
                            var_28 = (min(var_28, (arr_20 [i_2] [i_6] [i_2] [i_2] [i_1] [i_1] [i_0])));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            var_29 &= 10;
                            var_30 *= (((arr_3 [i_2 - 2]) & (arr_3 [i_2 - 2])));
                            var_31 ^= (arr_15 [i_2 - 1] [i_2 - 2] [i_6] [i_2 - 1]);
                            var_32 |= ((((4294967295 * (arr_16 [i_0] [i_1] [i_2] [i_6])))) ? (arr_6 [i_0] [i_2 - 1] [i_0]) : (~6805291645066964646));
                            var_33 ^= (!(arr_6 [i_2] [i_2 - 2] [i_2]));
                        }
                        for (int i_9 = 3; i_9 < 10;i_9 += 1)
                        {
                            var_34 -= 9223372036854775806;
                            arr_27 [i_1] [i_1] |= (-9223372036854775807 - 1);
                        }
                        var_35 = (min(var_35, (arr_17 [i_0] [i_0] [i_2] [i_6])));

                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            var_36 += ((!((((!18446744073709551615) ? var_9 : (arr_26 [i_0]))))));
                            arr_31 [i_0] [i_0] [i_0] [i_6] [i_2] [i_10] [i_10] |= var_0;
                        }
                        var_37 = (min(var_37, ((((((0 ? (arr_8 [i_2 - 2] [i_2] [i_2 - 1] [i_2]) : var_8))) ? ((4294967295 ? (arr_21 [i_2] [i_2 - 2] [i_2] [i_2 - 2] [i_2 + 1]) : (arr_21 [i_2] [i_2 - 1] [i_2] [i_2 + 2] [i_2 + 2]))) : ((((arr_26 [i_2 - 2]) > (((5069454469719165960 ? -687065575 : 220)))))))))));
                    }
                    var_38 = (max(var_38, 240));

                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        var_39 = (max(var_39, 251));
                        var_40 ^= ((((123 && (arr_32 [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_2 + 1]))) || (var_6 && var_8)));
                        var_41 ^= ((((!(-21812 == 4800021212753914180))) ? (((+((max((arr_10 [i_0] [i_1] [i_1] [i_0] [i_0]), var_6)))))) : (((arr_30 [i_1] [i_1] [i_1] [i_1] [i_11]) | var_1))));
                    }

                    for (int i_12 = 2; i_12 < 10;i_12 += 1)
                    {
                        var_42 = (max(var_42, (((+(((arr_28 [i_2] [i_2] [i_2 - 1] [i_2] [i_0]) ? (arr_20 [i_0] [i_0] [i_2 + 1] [i_0] [i_0] [i_2] [i_0]) : var_12)))))));
                        var_43 -= (max(((-29171 < ((178 ? (arr_19 [i_0]) : var_12)))), (((~1125899906842623) != (((min((arr_1 [i_12]), (arr_4 [i_0])))))))));
                        var_44 += var_0;
                        var_45 &= -32767;
                    }
                }
            }
        }
    }
    #pragma endscop
}
