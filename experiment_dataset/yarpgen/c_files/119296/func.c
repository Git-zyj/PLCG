/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119296
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
    var_20 |= ((/* implicit */unsigned int) (unsigned char)88);
    var_21 = ((/* implicit */signed char) var_16);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) arr_0 [i_0 + 1])), (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0])))))) | (((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (((/* implicit */unsigned long long int) arr_0 [i_0 + 3])) : (arr_1 [i_0 + 3])))));
        var_22 = ((/* implicit */long long int) (signed char)32);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */unsigned short) 2966220908U);
        /* LoopNest 2 */
        for (signed char i_2 = 3; i_2 < 18; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                {
                    arr_14 [16ULL] [i_2] [i_1] [16ULL] &= ((((/* implicit */_Bool) (unsigned short)15988)) || (((/* implicit */_Bool) arr_13 [i_2 + 1] [i_2 - 2] [i_2 - 3] [i_2 + 1])));
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) ((arr_12 [i_1] [2U] [i_2 + 1] [i_3]) <= (((/* implicit */int) arr_7 [i_1]))))), (arr_6 [(unsigned short)10] [i_3]))))) : (var_16))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(signed char)12] [i_4]))) : (arr_4 [(short)16])));
        /* LoopSeq 3 */
        for (unsigned short i_5 = 1; i_5 < 15; i_5 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_6 = 3; i_6 < 18; i_6 += 2) 
            {
                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((((/* implicit */long long int) arr_15 [i_4])) < (-332572596070341696LL))) ? (-3569546609305676487LL) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_4]))))))));
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16008))) >= (var_13))) ? ((+(-9203999493255974787LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49564))))))));
                arr_24 [i_5] [i_5 + 2] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65532)) ^ (((/* implicit */int) (_Bool)1))));
            }
            for (int i_7 = 0; i_7 < 19; i_7 += 3) 
            {
                arr_28 [i_4] [i_4] [(unsigned char)0] |= ((((arr_4 [(short)4]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4]))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((0ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49553))))))));
                arr_29 [i_4] [(signed char)18] [(signed char)6] [i_7] &= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_20 [i_5 + 1] [i_5 - 1]))));
                var_27 = ((/* implicit */unsigned short) 4294967295U);
                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)16)) ? (-1) : (((/* implicit */int) (unsigned short)8905))))) ? (((/* implicit */int) arr_16 [i_4])) : (((/* implicit */int) (_Bool)1))));
            }
            arr_30 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65523)) && (((/* implicit */_Bool) (unsigned short)58977))));
            arr_31 [i_5] [i_5] = ((/* implicit */unsigned char) (signed char)114);
            /* LoopSeq 3 */
            for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 4) /* same iter space */
            {
                arr_36 [i_4] [i_5] [i_5] = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_32 [i_5] [i_4] [i_4] [12LL])))) & (((/* implicit */int) var_10))));
                var_29 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)88))) : (arr_10 [i_8]))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) var_18)))))));
            }
            for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 4) /* same iter space */
            {
                arr_40 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) -5)) ? (65536) : (((/* implicit */int) (_Bool)1))))));
                arr_41 [i_5] [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_17 [i_4]))));
            }
            for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 4) /* same iter space */
            {
                var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((((/* implicit */int) var_6)) / ((+(((/* implicit */int) (unsigned char)246)))))))));
                var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((arr_13 [i_5 + 2] [i_5] [8LL] [i_5 + 2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_10] [i_5]))))))));
                /* LoopSeq 3 */
                for (unsigned short i_11 = 0; i_11 < 19; i_11 += 3) 
                {
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) (unsigned short)10079)) : (((/* implicit */int) arr_33 [i_4] [i_5] [i_5] [i_11]))));
                    arr_46 [17ULL] [i_5 + 3] [i_5] [i_5] [i_10] [i_5] = ((/* implicit */unsigned long long int) (_Bool)1);
                }
                for (short i_12 = 1; i_12 < 17; i_12 += 4) 
                {
                    arr_49 [i_5] = (-(((((/* implicit */long long int) arr_15 [i_4])) % (7919292918913912669LL))));
                    var_33 = ((/* implicit */unsigned long long int) arr_18 [i_5 + 1] [i_5 + 1]);
                }
                for (unsigned char i_13 = 0; i_13 < 19; i_13 += 2) 
                {
                    var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
                    arr_53 [i_5] [i_5] [i_10] [i_10] [i_13] = ((/* implicit */unsigned short) (signed char)-76);
                    var_35 = ((/* implicit */_Bool) ((signed char) (_Bool)1));
                }
                var_36 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-21947)) ? (((((/* implicit */int) (signed char)91)) | (((/* implicit */int) (signed char)125)))) : (((/* implicit */int) arr_5 [i_5] [i_10]))));
            }
            /* LoopSeq 2 */
            for (unsigned int i_14 = 2; i_14 < 18; i_14 += 1) 
            {
                arr_58 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_38 [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)91))));
                var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_51 [2LL] [i_14 - 1] [i_14 - 1] [i_5 + 4] [2LL])))))));
                var_38 += ((/* implicit */long long int) (!((_Bool)1)));
            }
            for (long long int i_15 = 0; i_15 < 19; i_15 += 4) 
            {
                var_39 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_56 [2U] [2U] [15U] [i_15])) ? (((var_0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) arr_56 [i_4] [i_4] [i_5] [i_15])) >= (((/* implicit */int) (unsigned char)0)))))));
                arr_61 [i_5] = ((/* implicit */short) (unsigned short)10079);
                /* LoopSeq 1 */
                for (unsigned short i_16 = 0; i_16 < 19; i_16 += 2) 
                {
                    arr_66 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_5 - 1] [i_5 + 3] [i_5 + 3] [i_5 + 2])) ? (((/* implicit */int) arr_23 [i_5 + 3] [i_5 + 4] [i_5 + 3] [i_5 + 1])) : (((/* implicit */int) arr_23 [i_5 + 3] [i_5] [i_5 + 2] [i_5 + 4]))));
                    var_40 += ((/* implicit */signed char) ((((arr_21 [i_16]) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) - (((/* implicit */unsigned int) 492166182))));
                    var_41 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                }
                var_42 ^= ((/* implicit */long long int) (signed char)-94);
                /* LoopNest 2 */
                for (long long int i_17 = 1; i_17 < 17; i_17 += 3) 
                {
                    for (signed char i_18 = 0; i_18 < 19; i_18 += 3) 
                    {
                        {
                            arr_74 [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-3)) + (2147483647))) >> (((((/* implicit */int) (short)-21503)) + (21507)))));
                            var_43 &= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_4])) && (((/* implicit */_Bool) arr_20 [i_4] [i_18]))))) ^ (((/* implicit */int) var_18))));
                            var_44 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_20 [(_Bool)1] [i_5])) < (((/* implicit */int) (_Bool)1))))) <= (((/* implicit */int) (_Bool)1))));
                            var_45 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_54 [i_5] [i_5] [i_18])) >> (((((/* implicit */int) arr_47 [i_17] [i_17] [i_17] [10U])) + (99)))));
                        }
                    } 
                } 
            }
        }
        for (signed char i_19 = 0; i_19 < 19; i_19 += 4) 
        {
            var_46 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_65 [i_19]))));
            arr_79 [i_4] [(unsigned short)4] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
        }
        for (unsigned short i_20 = 0; i_20 < 19; i_20 += 2) 
        {
            var_47 += (+(arr_10 [i_4]));
            arr_84 [i_4] [i_20] [i_20] = ((/* implicit */_Bool) var_2);
            var_48 += ((/* implicit */unsigned short) (short)31394);
            var_49 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-64))));
            var_50 = ((/* implicit */long long int) arr_76 [i_4] [i_20]);
        }
        var_51 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)164)) % (((/* implicit */int) arr_65 [(short)18]))));
        var_52 = ((/* implicit */unsigned short) (!(arr_52 [i_4] [i_4] [i_4] [0ULL])));
    }
    var_53 = ((((((/* implicit */_Bool) max(((unsigned short)62960), (((/* implicit */unsigned short) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : ((-(var_8))))) >= (396401478157970752LL));
}
