/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119368
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((var_4) / (((/* implicit */long long int) ((/* implicit */int) var_8))))) + (9223372036854775807LL))) << (((((((var_4) ^ (((/* implicit */long long int) ((/* implicit */int) var_11))))) + (7960546444993603212LL))) - (52LL))))))));
    var_15 = ((/* implicit */unsigned int) var_6);
    var_16 = ((/* implicit */unsigned int) var_12);
    var_17 ^= ((/* implicit */signed char) min((((/* implicit */unsigned char) max(((signed char)-114), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-115)) || (var_13))))))), (var_7)));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) var_3)))));
            /* LoopNest 2 */
            for (short i_2 = 2; i_2 < 8; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) var_4)))));
                        arr_12 [i_0] [i_1] [i_0] [i_0] [(_Bool)1] = ((/* implicit */short) (~(max((((/* implicit */long long int) arr_2 [i_0])), (min((var_4), (((/* implicit */long long int) arr_7 [i_0] [i_0]))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            arr_16 [3LL] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)81))) * (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])));
                            var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_3] [0U] [i_0 - 1])) && (((/* implicit */_Bool) var_0)))) || (((/* implicit */_Bool) ((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                        }
                    }
                } 
            } 
        }
        /* vectorizable */
        for (short i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                /* LoopSeq 2 */
                for (int i_7 = 2; i_7 < 9; i_7 += 2) 
                {
                    var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-114)) || (((/* implicit */_Bool) arr_9 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-105)) || (((/* implicit */_Bool) var_11)))))));
                    arr_25 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_1 [i_0]) ? (((/* implicit */int) (signed char)90)) : (((/* implicit */int) var_13))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        arr_29 [i_0] [i_5] [i_6] [i_0] [i_8] = ((/* implicit */_Bool) (signed char)114);
                        var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-126))) : (6920827102160949137LL))) / (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) arr_6 [i_0] [i_5] [i_6] [i_7 + 1])) : ((-2147483647 - 1)))))));
                        arr_30 [i_0] [i_5] [i_5] [i_7] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) arr_15 [i_0] [i_5] [i_6] [i_6] [i_7] [i_8])) : (((/* implicit */int) var_6)))))));
                    }
                }
                for (short i_9 = 0; i_9 < 10; i_9 += 4) 
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 4) /* same iter space */
                    {
                        arr_37 [i_0] [i_0] [i_5] [i_6] [i_9] [i_9] [i_0] = (!(var_13));
                        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - (var_3))))));
                        var_22 = ((/* implicit */unsigned char) arr_14 [i_10] [i_5] [i_6] [i_0 + 1] [i_10]);
                    }
                    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
                    {
                        var_23 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_7))) / (arr_24 [(unsigned char)0] [i_9] [i_9] [i_0 + 1])));
                        arr_40 [i_11] [i_11] [8U] [i_0] [i_6] [i_5] [i_0] = ((/* implicit */signed char) arr_24 [i_5] [(unsigned char)6] [i_0] [i_5]);
                        var_24 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)166))))) / (arr_33 [i_0] [i_5] [i_5] [i_0 - 1] [i_0])));
                        arr_41 [i_6] [i_0] = ((/* implicit */_Bool) ((arr_14 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]) & (arr_14 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0])));
                        arr_42 [7ULL] [i_5] [i_0] [i_9] [i_11] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)-127)))) != (((arr_6 [i_0] [i_5] [i_6] [i_9]) ? (var_9) : (var_9)))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 10; i_12 += 4) /* same iter space */
                    {
                        arr_45 [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) arr_26 [i_0] [i_9] [i_6] [i_5] [i_0]));
                        var_25 = (!((!(((/* implicit */_Bool) (unsigned char)97)))));
                        arr_46 [i_6] [i_0] = (_Bool)0;
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2147483638)) && (((/* implicit */_Bool) (signed char)113)))))) : (var_3)));
                    }
                    for (unsigned char i_13 = 0; i_13 < 10; i_13 += 4) /* same iter space */
                    {
                        arr_49 [i_0] [i_6] [i_0] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_47 [i_0] [i_13] [i_0] [i_13] [i_13])) >> (((var_10) - (3765975308034504908LL)))));
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((int) (_Bool)0)))));
                        arr_50 [i_0] [i_0] [i_5] [i_6] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_0 + 1] [i_0] [i_0 + 1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_0] [i_0])))))));
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((unsigned long long int) 0ULL)))));
                        var_29 = arr_9 [i_0];
                    }
                    arr_51 [i_0] [i_5] [i_5] [i_0] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) var_13))))));
                }
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_2) << ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775768LL))) + (75LL)))))) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (!(((/* implicit */_Bool) 2113929216U)))))));
            }
            var_31 = ((/* implicit */short) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_13))) & (-6920827102160949137LL))));
            var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_23 [i_0 + 1] [i_0 - 1] [i_0 + 1])) / (((/* implicit */int) var_0))));
            /* LoopSeq 3 */
            for (signed char i_14 = 0; i_14 < 10; i_14 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_15 = 3; i_15 < 9; i_15 += 1) 
                {
                    for (unsigned short i_16 = 1; i_16 < 7; i_16 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-118))));
                            arr_61 [i_0] [i_15] [i_14] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_17 [i_0 + 1] [i_0])) : (((/* implicit */int) (signed char)102))));
                            arr_62 [i_0] [i_5] [i_14] [i_5] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_4 [i_0] [i_0 + 1] [i_16 + 3]))));
                        }
                    } 
                } 
                arr_63 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-94))));
                var_34 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) || ((_Bool)1)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_9 [i_0])))))));
            }
            for (signed char i_17 = 0; i_17 < 10; i_17 += 2) /* same iter space */
            {
                arr_68 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_9);
                var_35 = ((/* implicit */signed char) (+(((/* implicit */int) var_0))));
                var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_0] [i_0] [i_17]))) : (arr_22 [i_0])));
                /* LoopSeq 2 */
                for (short i_18 = 0; i_18 < 10; i_18 += 4) 
                {
                    var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((unsigned long long int) ((((((/* implicit */int) var_6)) + (2147483647))) >> (((((/* implicit */int) (short)-22875)) + (22886)))))))));
                    arr_73 [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((var_13) ? (((/* implicit */int) ((((/* implicit */long long int) var_1)) != ((-9223372036854775807LL - 1LL))))) : (((/* implicit */int) ((arr_65 [i_0] [i_5] [i_17]) != (0ULL))))));
                    arr_74 [i_0] [i_5] [i_17] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-118))) : (var_10))))));
                }
                for (int i_19 = 0; i_19 < 10; i_19 += 3) 
                {
                    var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_17])))))));
                    var_39 = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) ((unsigned char) var_11)))));
                }
                arr_77 [i_0] [i_5] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)20)) ? (arr_18 [i_0 - 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_0] [i_0 - 1] [i_0 + 1] [(signed char)2])))));
            }
            for (signed char i_20 = 0; i_20 < 10; i_20 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_21 = 0; i_21 < 10; i_21 += 1) 
                {
                    var_40 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (unsigned char)9))))));
                    var_41 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_56 [i_0] [i_0 - 1] [i_0] [i_0 - 1]))));
                    arr_84 [i_0] [i_0] [i_0] [i_20] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */unsigned int) ((((var_1) + (2147483647))) >> (((((/* implicit */int) arr_69 [i_0] [i_5] [i_20] [i_21] [i_21] [i_0])) - (161)))))) : (arr_79 [i_0 + 1] [i_0 - 1] [i_21] [i_0])));
                    var_42 = ((/* implicit */short) ((unsigned long long int) (+(arr_22 [i_0]))));
                }
                for (int i_22 = 0; i_22 < 10; i_22 += 1) 
                {
                    var_43 = ((/* implicit */unsigned char) arr_39 [i_0 - 1] [i_5] [i_20] [i_0] [i_20] [i_22]);
                    arr_87 [i_0] [i_5] [i_22] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_7 [i_0 + 1] [i_0]);
                    var_44 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)83)) ? (1151198311U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)32)))));
                }
                arr_88 [i_0] [i_0] = ((/* implicit */_Bool) (~(var_1)));
                var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_66 [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-66))))) : (((/* implicit */int) arr_69 [(_Bool)1] [i_0] [(_Bool)1] [(_Bool)1] [(unsigned char)3] [(_Bool)1]))));
            }
        }
        var_46 = ((/* implicit */_Bool) var_3);
    }
}
