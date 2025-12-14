/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187500
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
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((7), (((/* implicit */int) (signed char)65))))), (1451463672U)))), (281474976710528ULL)));
        var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((18446462598732841099ULL), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11089))) & (arr_0 [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-11086))))) ? (2843503646U) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)11099)))))))) : (((max((arr_0 [(unsigned char)0]), (arr_0 [i_0]))) << (((min((2843503640U), (arr_1 [i_0]))) - (2843503615U)))))));
        var_20 = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) min(((short)11103), ((short)-11089)))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (1451463672U) : (2843503650U))))), (((/* implicit */unsigned int) (short)11099))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                arr_10 [i_1] [i_3] &= ((/* implicit */unsigned long long int) arr_7 [i_1 + 1] [i_2] [i_1 + 1]);
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 3; i_4 < 12; i_4 += 4) 
                {
                    var_21 = ((/* implicit */int) arr_1 [(signed char)17]);
                    var_22 = ((/* implicit */signed char) arr_12 [i_1] [i_1] [i_1] [12]);
                    var_23 = ((/* implicit */short) arr_14 [4U] [i_4] [i_3] [i_3] [i_3]);
                    arr_15 [i_1] [i_1] [i_4] [i_1] = ((/* implicit */signed char) (+(((((/* implicit */int) (short)11099)) / (((/* implicit */int) (short)11086))))));
                }
                arr_16 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)11099))))) : ((+(18446462598732841087ULL)))));
                var_24 = ((/* implicit */unsigned char) (short)11099);
                /* LoopSeq 1 */
                for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    arr_19 [i_1] [i_2] [i_3] [i_5] = ((/* implicit */signed char) 18446462598732841087ULL);
                    var_25 = ((/* implicit */unsigned int) 18446462598732841087ULL);
                    var_26 = ((/* implicit */unsigned int) ((arr_7 [i_1] [i_1 + 1] [i_1]) / (((/* implicit */long long int) (-(((/* implicit */int) (short)-11103)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        arr_24 [(signed char)4] [i_3] [(signed char)4] [i_3] = ((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1]);
                        var_27 = ((/* implicit */unsigned long long int) arr_3 [i_3] [8ULL]);
                    }
                }
            }
            for (long long int i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                var_28 *= (-((-(((/* implicit */int) (short)-11086)))));
                /* LoopSeq 4 */
                for (unsigned char i_8 = 0; i_8 < 14; i_8 += 1) 
                {
                    arr_30 [i_1] [(unsigned char)4] [i_7] [i_1] [i_7] [(unsigned char)4] |= ((/* implicit */_Bool) (((-(((/* implicit */int) (short)11099)))) | (((((/* implicit */_Bool) (short)11099)) ? (arr_4 [i_8] [i_2]) : (4095)))));
                    var_29 ^= ((/* implicit */unsigned int) (short)11096);
                }
                for (unsigned int i_9 = 2; i_9 < 12; i_9 += 4) 
                {
                    arr_33 [i_1 + 1] [i_1] [i_1] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_9] [i_7] [i_2] [i_1 + 1] [i_1 + 1])) ? (((arr_11 [i_1] [i_1] [i_1] [i_9] [i_2]) >> (((((/* implicit */int) (unsigned char)151)) - (139))))) : ((+(((/* implicit */int) (short)-11099))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 1; i_10 < 13; i_10 += 1) 
                    {
                        arr_36 [i_1] [i_2] [i_7] [i_9] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-11081)) ? (((/* implicit */int) (short)11085)) : (((/* implicit */int) (short)11088))));
                        var_30 = ((/* implicit */long long int) arr_32 [i_1 + 1] [i_7]);
                    }
                    for (signed char i_11 = 0; i_11 < 14; i_11 += 4) 
                    {
                        var_31 = (short)11119;
                        var_32 &= ((/* implicit */signed char) ((18446462598732841099ULL) == (((/* implicit */unsigned long long int) 2843503624U))));
                        var_33 = 18446462598732841099ULL;
                        arr_39 [i_7] [i_7] [9ULL] [i_7] [i_7] [i_1 + 1] = ((/* implicit */int) (_Bool)1);
                        arr_40 [i_2] [i_7] [i_9] = (+(((/* implicit */int) (short)-11083)));
                    }
                }
                for (int i_12 = 1; i_12 < 13; i_12 += 4) 
                {
                    var_34 = ((/* implicit */signed char) arr_11 [i_12] [i_7] [i_2] [i_1 + 1] [i_1 + 1]);
                    var_35 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)11110)) ? (((/* implicit */int) (short)11120)) : (((/* implicit */int) arr_42 [i_1 + 1] [i_1] [i_1] [i_7] [i_1] [i_1]))))) * (((((/* implicit */unsigned long long int) 1451463628U)) * (16633098728096029519ULL)))));
                }
                for (unsigned long long int i_13 = 3; i_13 < 11; i_13 += 4) 
                {
                    var_36 = ((/* implicit */unsigned int) (short)-11097);
                    var_37 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11124))) + (arr_0 [i_2]))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4096)) ? (((/* implicit */int) (short)-11057)) : (arr_29 [i_1] [i_2] [i_7] [i_7] [i_7] [8U])))));
                    arr_46 [i_7] [i_2] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_2] [i_7] [(_Bool)1])) ? ((-(arr_26 [i_1] [i_2] [i_7] [10ULL]))) : (((((/* implicit */_Bool) (short)11057)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-11096))) : (arr_7 [3ULL] [i_7] [3ULL])))));
                    arr_47 [i_1 + 1] [i_1] [i_7] [i_1] = ((/* implicit */unsigned int) arr_12 [i_1] [i_1 + 1] [7ULL] [i_1]);
                }
                arr_48 [i_1] [10ULL] [i_1] |= ((/* implicit */unsigned long long int) (short)-11127);
                /* LoopSeq 3 */
                for (signed char i_14 = 0; i_14 < 14; i_14 += 1) 
                {
                    arr_53 [i_1] [i_1] [(short)4] [i_1] &= ((/* implicit */signed char) (short)-11051);
                    var_38 = ((/* implicit */short) (~(((/* implicit */int) (short)-11110))));
                    /* LoopSeq 1 */
                    for (unsigned int i_15 = 1; i_15 < 13; i_15 += 4) 
                    {
                        arr_56 [i_1] [i_7] [i_1] [i_14] = ((/* implicit */unsigned char) -4095);
                        arr_57 [i_2] [i_7] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4094)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_1] [i_7]))) & (2843503645U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)11086)))))));
                    }
                    var_39 = ((/* implicit */_Bool) (+(((((/* implicit */int) (short)11045)) | (((/* implicit */int) (short)-4410))))));
                    var_40 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (short)11057))));
                }
                for (long long int i_16 = 0; i_16 < 14; i_16 += 1) 
                {
                    arr_60 [i_1] [i_7] [i_1] [i_1] = ((/* implicit */unsigned char) ((((-4094) / (-4112))) << (((((/* implicit */int) (short)11072)) - (11052)))));
                    var_41 = ((/* implicit */unsigned int) (short)-11117);
                    /* LoopSeq 2 */
                    for (int i_17 = 3; i_17 < 13; i_17 += 1) 
                    {
                        arr_63 [i_1] [i_2] [10LL] [i_16] [i_16] [i_1] &= ((/* implicit */unsigned long long int) (short)11083);
                        arr_64 [i_1 + 1] [i_1] [i_1 + 1] [i_7] [6LL] = ((/* implicit */long long int) (+(((/* implicit */int) (short)-11111))));
                        var_42 -= ((/* implicit */int) (short)-11110);
                        arr_65 [i_1] [i_2] [i_2] [i_7] [i_7] [i_16] [i_7] = ((/* implicit */short) (~(((((-677535557) + (2147483647))) >> (((((/* implicit */int) arr_12 [i_17] [i_16] [i_2] [i_1])) + (32549)))))));
                    }
                    for (int i_18 = 0; i_18 < 14; i_18 += 1) 
                    {
                        arr_68 [i_1] [i_1] [i_7] [i_1] [(short)11] = ((/* implicit */short) (+(((((/* implicit */int) (signed char)-89)) / (-4096)))));
                        arr_69 [i_7] [i_16] [(short)13] [i_7] [(signed char)3] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-89)) ? (-4093) : (2147483647)))) ? (((((/* implicit */int) (short)-11092)) / (((/* implicit */int) (short)11111)))) : (((/* implicit */int) (short)255))));
                        var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) (+((~(-4105))))))));
                        var_44 = ((/* implicit */unsigned long long int) (signed char)-107);
                    }
                    var_45 ^= ((/* implicit */short) arr_1 [i_1]);
                }
                for (unsigned char i_19 = 2; i_19 < 13; i_19 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_20 = 0; i_20 < 14; i_20 += 4) 
                    {
                        var_46 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_1] [i_1] [i_2] [i_1] [i_20]))) != (arr_20 [11U] [i_7] [i_20]))) ? (((/* implicit */int) arr_55 [i_20] [i_7] [i_7] [i_2] [12LL])) : (((/* implicit */int) (short)11111))));
                        var_47 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-11111))));
                        var_48 = ((/* implicit */int) arr_0 [i_1]);
                        arr_77 [i_7] [i_2] [i_2] = ((/* implicit */short) 18ULL);
                    }
                    arr_78 [i_7] [i_2] [i_7] [i_19] = ((/* implicit */unsigned long long int) (short)-11117);
                }
            }
            arr_79 [i_1] [i_1 + 1] = ((/* implicit */int) (signed char)-89);
            /* LoopNest 2 */
            for (long long int i_21 = 0; i_21 < 14; i_21 += 4) 
            {
                for (int i_22 = 3; i_22 < 12; i_22 += 4) 
                {
                    {
                        var_49 &= ((/* implicit */_Bool) (~(((/* implicit */int) (short)-255))));
                        arr_86 [i_22] [i_21] [i_21] [i_2] [i_1] = ((/* implicit */_Bool) arr_2 [i_1]);
                        var_50 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_2])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_21 [i_2] [i_2] [i_21] [i_22] [i_2] [i_21]))))) : (((((/* implicit */_Bool) (unsigned char)15)) ? (arr_20 [i_2] [i_21] [(signed char)4]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)11118)))))));
                    }
                } 
            } 
            arr_87 [(signed char)10] [(signed char)10] [7LL] = ((/* implicit */unsigned int) ((arr_13 [i_1] [i_1 + 1] [i_1] [(short)2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [6LL] [2ULL] [(short)4] [i_2] [i_1 + 1])))));
        }
        for (long long int i_23 = 0; i_23 < 14; i_23 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_24 = 0; i_24 < 14; i_24 += 1) 
            {
                for (signed char i_25 = 0; i_25 < 14; i_25 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_26 = 0; i_26 < 14; i_26 += 3) 
                        {
                            var_51 = ((/* implicit */int) (short)11088);
                            var_52 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-11097)) ? ((~(((/* implicit */int) arr_22 [i_1] [i_1] [i_1] [i_1] [i_1])))) : (4096)));
                            var_53 = ((/* implicit */short) ((((/* implicit */int) arr_75 [i_1 + 1] [i_1 + 1] [i_23] [i_24] [i_25] [i_25] [i_26])) != (arr_51 [i_1] [i_23] [i_24] [i_23] [i_26])));
                        }
                        var_54 |= ((/* implicit */short) ((((/* implicit */int) arr_59 [(unsigned char)2] [i_23] [(_Bool)1])) - (((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */int) arr_8 [i_1 + 1] [i_23] [i_24] [i_24])) : (((/* implicit */int) (short)-11111))))));
                        var_55 = ((/* implicit */unsigned char) ((max((((/* implicit */int) min((((/* implicit */short) (signed char)80)), ((short)11110)))), ((+(((/* implicit */int) (short)11117)))))) & (((/* implicit */int) arr_35 [9ULL] [i_23] [i_24] [i_24] [i_25]))));
                        var_56 = ((/* implicit */unsigned char) (+(-4096)));
                    }
                } 
            } 
            arr_101 [i_1 + 1] = ((/* implicit */signed char) max(((+(((/* implicit */int) arr_2 [i_1])))), (min((4072), (((/* implicit */int) max(((signed char)62), (arr_61 [(signed char)10] [i_23] [i_23] [i_1] [i_1] [(_Bool)1]))))))));
            var_57 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [6U] [(unsigned char)4] [(unsigned char)4] [i_1 + 1] [i_1]))) + (((((/* implicit */unsigned long long int) min((4065), (((/* implicit */int) (short)-11095))))) - (((((/* implicit */_Bool) -4072)) ? (arr_80 [i_23] [i_23]) : (((/* implicit */unsigned long long int) 4047))))))));
        }
        var_58 = ((/* implicit */long long int) min((((/* implicit */int) (signed char)-33)), (min((((((/* implicit */_Bool) -4100)) ? (((/* implicit */int) arr_8 [i_1 + 1] [i_1] [(signed char)6] [6])) : (((/* implicit */int) (signed char)-29)))), (((/* implicit */int) (unsigned char)214))))));
    }
    for (unsigned long long int i_27 = 0; i_27 < 22; i_27 += 1) 
    {
        var_59 ^= ((/* implicit */short) max((17802700595841291082ULL), (((/* implicit */unsigned long long int) 4100))));
        var_60 = min((arr_0 [i_27]), (min((max((((/* implicit */unsigned long long int) arr_102 [i_27])), (arr_103 [i_27] [i_27]))), (((/* implicit */unsigned long long int) max((9223372036854775801LL), (((/* implicit */long long int) arr_2 [i_27]))))))));
    }
    var_61 = var_11;
    var_62 = ((/* implicit */short) -4087);
}
