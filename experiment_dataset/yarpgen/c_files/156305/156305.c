/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_19 -= ((-(max(((118 ? var_15 : (arr_2 [i_1] [i_0] [i_1]))), ((max(118, 192)))))));
            arr_6 [i_0] = (arr_1 [i_0]);
        }
        var_20 += (min(var_3, (((arr_5 [i_0]) ^ var_8))));

        for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_0] = (((var_14 >> (118 - 116))));

            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                var_21 = (max((((((1284304424334780377 ? 65024 : (arr_7 [i_0] [i_2] [i_2])))) ? var_8 : var_18)), (56635 & 0)));
                var_22 -= 255;
            }
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                var_23 -= (max(56648, 56635));
                arr_17 [i_0] = ((((max(var_3, (arr_16 [i_0])))) ? ((1284304424334780362 / (max(35604, (arr_10 [i_0] [i_0] [i_4]))))) : 7694398958642412715));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            arr_22 [10] [2] [i_4] [i_5] [2] [i_2] [i_4] &= ((min((65535 ^ 21932), (arr_19 [i_0] [i_2] [i_5] [i_5]))) + var_7);
                            var_24 -= max(((((((0 ? 11 : 2464676817972180347))) ? -50 : ((63 | (arr_7 [i_2] [i_4] [i_6])))))), ((((max(36747, 18140))) ? -57 : (min(5387590190970257791, 575661351822560961)))));
                            var_25 = (min(var_25, var_17));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {
                        var_26 = var_12;

                        for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                        {
                            var_27 += ((~((max(56642, 56)))));
                            var_28 = ((!((max(var_7, (((9094004159363295752 ? 64645 : var_8))))))));
                            var_29 = var_5;
                        }
                        for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                        {
                            arr_33 [7] [10] [i_0] [10] [i_10] = var_17;
                            var_30 = ((((max((min(536870784, 11939)), (((var_13 ? 38408 : var_12)))))) ? (((~18135) | var_9)) : var_10));
                            var_31 ^= (min((((min(var_17, 47395)) - (((max(var_13, var_2)))))), 8916));
                            var_32 = (min(var_32, (max((((arr_16 [i_2]) - (((arr_20 [i_0] [6] [i_0]) | var_9)))), (22 | 18166)))));
                        }
                    }
                }
            }
            var_33 = 8748539419894945850;
        }
        for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
        {
            arr_36 [i_11] [i_0] [i_0] = (max((max((arr_20 [i_0] [8] [i_11]), 116)), (((131 ? var_3 : var_0)))));
            arr_37 [i_0] [i_11] = (arr_1 [i_0]);
            var_34 = (max((14 || 5), ((27021597764222976 >> (18446744073172680831 - 18446744073172680806)))));
        }
        for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
        {
            arr_42 [i_0] = (((max((max(15418479839970055183, 15164)), (max(var_14, var_17)))) | (((((max(-34, var_10))) ? (((10800 <= (arr_32 [i_0] [i_12] [i_0] [9] [9] [i_12] [i_0])))) : ((var_15 ? var_4 : var_3)))))));
            var_35 += ((9218868437227405312 ? 153 : (!288230376147517440)));
            var_36 = (max(var_36, ((min(((max((arr_5 [2]), (((var_9 < (arr_19 [i_0] [i_0] [i_12] [i_12]))))))), ((-((var_18 ? 14 : var_4)))))))));
        }
        arr_43 [0] [i_0] = ((((((var_15 && (arr_1 [i_0]))) ? (!var_5) : var_4))) ? (min((min(var_8, var_6)), var_10)) : ((((arr_18 [i_0]) ? (arr_18 [i_0]) : (arr_18 [i_0])))));
    }
    for (int i_13 = 0; i_13 < 22;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 22;i_15 += 1)
            {
                {
                    var_37 = (30064771072 / 33776997205278720);
                    var_38 = (((((max(225, (!var_18))))) ^ ((((min(11, -1))) ? 3145728 : ((var_5 ? 10 : var_7))))));
                    var_39 = (((((((((arr_48 [7] [i_13]) <= -11)) && (arr_50 [0] [4] [4]))))) < (((var_9 * var_11) | (arr_49 [i_14] [i_15] [i_15])))));
                    var_40 = -24;
                    arr_52 [i_13] = 61;
                }
            }
        }
        var_41 = ((-(max((57939 == 8188), -9223372036854775804))));
        var_42 = var_6;
    }
    var_43 -= var_1;
    var_44 -= var_7;
    var_45 = (max(var_7, (max(var_1, var_5))));
    #pragma endscop
}
