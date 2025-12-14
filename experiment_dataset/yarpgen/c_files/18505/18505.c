/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_4 ? (((var_4 ? ((var_0 ? var_14 : var_15)) : var_12))) : (((((var_2 ? var_5 : var_3))) ? var_13 : var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = (((((~((var_2 ? var_15 : var_9))))) ? (var_0 / var_15) : ((((var_5 != (!var_13)))))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 = (~((var_10 + ((var_10 ? var_9 : var_11)))));
                                var_19 = (((((-(var_4 / var_2)))) ? ((~(~var_8))) : var_13));
                            }
                        }
                    }
                    var_20 -= (((var_1 / var_15) ? ((var_14 ? var_1 : var_11)) : var_5));
                    var_21 = (((~(~var_9))));
                    var_22 = (-var_2 ^ -var_7);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_23 = (((var_1 ^ var_13) ? ((((var_12 ? var_8 : var_5)))) : (((var_14 < var_7) ? (!var_4) : var_7))));
                                var_24 *= (((((-var_15 * (!var_9)))) != (((~var_1) * var_12))));
                                var_25 = var_0;
                                var_26 = (((var_8 < var_15) >> ((((var_7 ? (~var_9) : var_6)) - 2533728282))));
                                var_27 = (((var_11 - var_7) * (((~(var_6 || var_11))))));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_28 = (((var_14 ? var_14 : var_2)));
                                var_29 &= ((((((var_3 + var_8) ? -var_11 : var_6))) ? (((((var_9 ? var_5 : var_7))))) : var_15));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            {
                                var_30 = (~var_2);
                                var_31 = (((((~var_3) ? (43954204614182092 % -43954204614182104) : (var_6 * var_13)))) ? ((var_11 ? ((var_11 ? var_7 : var_15)) : var_12)) : ((((var_4 >> (var_4 - 943816172001033981))))));
                                var_32 ^= var_13;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 17;i_13 += 1)
                        {
                            {
                                var_33 *= (((((((var_1 ? var_5 : var_4))) || (((var_3 ? var_3 : var_7))))) ? (var_10 > var_8) : ((-((var_9 ? var_4 : var_7))))));
                                var_34 = (((var_13 ? -var_15 : (var_1 - var_6))));
                            }
                        }
                    }
                    var_35 = ((((((!(!var_13))))) | ((~((var_10 ? var_1 : var_7))))));
                    var_36 = (var_11 - var_6);
                }
                var_37 = (((((~(~var_6)))) | var_7));

                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {

                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        var_38 = (var_3 << ((((var_5 ? var_13 : var_10)) - 16451250763993223404)));

                        for (int i_16 = 0; i_16 < 17;i_16 += 1)
                        {
                            var_39 = (~var_7);
                            var_40 = (((0 >> 1) + ((var_9 ? var_5 : var_1))));
                            var_41 += (((var_10 / var_3) << ((((var_11 ? var_5 : var_12)) - 2678282824))));
                            var_42 = ((var_11 ? var_6 : var_5));
                        }
                    }
                    for (int i_17 = 3; i_17 < 15;i_17 += 1)
                    {
                        var_43 = ((((((var_13 * var_15) ? var_7 : (~var_1)))) ? var_8 : (~43954204614182092)));
                        var_44 = (-((var_1 ? var_10 : var_15)));
                    }
                    for (int i_18 = 0; i_18 < 17;i_18 += 1) /* same iter space */
                    {
                        var_45 = var_4;
                        var_46 = ((~(var_13 || var_11)));
                        var_47 = var_13;
                        var_48 = var_8;
                        var_49 = ((-var_2 ? var_13 : ((var_9 - ((var_14 ? var_15 : var_7))))));
                    }
                    for (int i_19 = 0; i_19 < 17;i_19 += 1) /* same iter space */
                    {

                        for (int i_20 = 4; i_20 < 16;i_20 += 1)
                        {
                            var_50 = (((((((var_12 ? var_15 : var_3))) ? (~var_3) : var_10)) | (((var_3 & var_0) & (var_9 ^ var_15)))));
                            var_51 = (((var_2 + -var_12) || ((((((var_2 ? var_11 : var_2))) ? var_6 : (var_9 > var_9))))));
                            var_52 = (((!var_2) ? (((((var_3 << (var_13 - 16451250763993223406)))) ? var_10 : var_11)) : (((~((var_5 ? var_7 : var_1)))))));
                            var_53 = (var_5 >= var_14);
                            var_54 = ((var_4 ? var_5 : (((var_8 ? var_8 : var_6)))));
                        }
                        for (int i_21 = 0; i_21 < 17;i_21 += 1)
                        {
                            var_55 -= ((((var_6 ? var_7 : var_0))) ? var_9 : var_6);
                            var_56 = (((!var_13) ? ((((((var_0 ? var_2 : var_5))) ? var_10 : (var_7 - var_6)))) : (((var_5 | var_8) ? var_10 : (var_11 | var_1)))));
                        }
                        for (int i_22 = 0; i_22 < 17;i_22 += 1)
                        {
                            var_57 = (((((((0 ? 1 : 1))) ? ((var_13 ? var_11 : var_3)) : (var_8 / var_11))) != var_15));
                            var_58 = (max(var_58, (((~(var_10 > var_0))))));
                        }
                        var_59 = var_4;
                    }
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 17;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 17;i_24 += 1)
                        {
                            {
                                var_60 = (!(((31472 ? 1 : 47))));
                                var_61 = (min(var_61, (((((((~var_0) ? ((var_11 ? var_7 : var_6)) : var_15))) ? (var_7 != var_12) : (((((var_4 ? var_11 : var_1))) ? (((var_5 << (var_7 - 2516655930539185582)))) : ((var_7 ? var_4 : var_5)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
