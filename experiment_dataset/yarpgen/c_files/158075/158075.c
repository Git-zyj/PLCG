/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, -127));
    var_13 *= -115;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_14 = -14602;
                arr_5 [i_0] [i_0] = ((~((~(!7195511656884601421)))));

                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        var_15 = (max(var_15, ((~(~356908478903688715)))));
                        var_16 &= ((~(((!((!(-9223372036854775807 - 1))))))));

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_17 = ((!(-9223372036854775807 - 1)));
                            var_18 = ((~(~-1016446001)));
                            arr_18 [i_4] [i_0] [i_2] [i_1] [i_0] [i_0] [i_0] = ((!(~9201344782761574660)));
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_19 = (min(var_19, -26019));
                            var_20 = ((~(~48604)));
                            var_21 ^= (+-93);
                        }
                    }
                    var_22 = (!62);
                }
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    var_23 = -262143;
                    var_24 = (max(var_24, ((-(!-7613425477749526300)))));
                }
                for (int i_7 = 3; i_7 < 10;i_7 += 1)
                {
                    var_25 = -12144;
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 10;i_9 += 1)
                        {
                            {
                                arr_32 [0] [i_0] = (--53391);
                                var_26 = (~7136719477187624408);
                                var_27 += (!12145);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    arr_36 [i_0] [i_0] = (!13946);
                    var_28 = (min(var_28, ((~(!32767)))));
                }
            }
        }
    }

    for (int i_11 = 1; i_11 < 22;i_11 += 1)
    {
        arr_39 [i_11] = (~12150);

        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            var_29 = (~(((!(!12666515977349175622)))));

            /* vectorizable */
            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                arr_45 [4] |= ((~(!3571510424374785550)));
                var_30 = (max(var_30, (!58317)));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 24;i_15 += 1)
                    {
                        {
                            var_31 ^= ((~(!12144)));
                            var_32 = (~-2147483647);
                            var_33 ^= (!-4014696945);
                        }
                    }
                }
            }
        }
        arr_51 [i_11] = 628038729;
    }
    for (int i_16 = 4; i_16 < 12;i_16 += 1)
    {

        for (int i_17 = 0; i_17 < 14;i_17 += 1)
        {
            var_34 = ((((!(~var_3)))));
            arr_58 [i_17] [i_16] [i_16] |= -2147483643;
        }
        for (int i_18 = 0; i_18 < 14;i_18 += 1)
        {
            var_35 = ((-((~(~24746)))));

            /* vectorizable */
            for (int i_19 = 2; i_19 < 12;i_19 += 1)
            {
                var_36 = (!-628038729);
                arr_63 [i_18] = (~12141);
            }
            /* vectorizable */
            for (int i_20 = 3; i_20 < 13;i_20 += 1)
            {
                arr_68 [i_16 + 1] [i_16 - 1] [i_18] [i_20] = (-2147483647 - 1);
                var_37 = (!12136);
                var_38 = (max(var_38, 127));
            }
            var_39 = (+-6784052212451051552);
            var_40 ^= ((-(~-17585105318781367296)));
        }
        var_41 *= 14;
    }
    for (int i_21 = 0; i_21 < 17;i_21 += 1)
    {
        var_42 ^= 62017;
        var_43 = (max(var_43, (--1696317435)));
        var_44 = ((~(((!(!53394))))));
    }
    #pragma endscop
}
