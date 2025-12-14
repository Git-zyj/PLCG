/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159988
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_18 *= ((/* implicit */long long int) ((3220686921380198744ULL) == (((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) -10)), (2468798760U))), (((/* implicit */unsigned int) min((((/* implicit */signed char) var_16)), (arr_0 [i_0])))))))));
        var_19 = ((/* implicit */unsigned char) (short)-1);
        var_20 *= ((/* implicit */_Bool) ((unsigned int) ((short) (-(arr_1 [(unsigned short)1])))));
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (max((min((4522151511215683771ULL), (((/* implicit */unsigned long long int) 11)))), (((/* implicit */unsigned long long int) max((arr_6 [i_2] [i_2] [i_1] [i_0]), (((/* implicit */unsigned int) (short)-1))))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((var_12), (var_12)))), ((+(-2269490159077969193LL))))))));
                var_22 = ((/* implicit */unsigned int) (-(arr_4 [i_0] [i_0])));
                var_23 = ((/* implicit */unsigned long long int) max((min((((arr_5 [i_2] [i_1 - 2] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))), (arr_6 [i_2] [(unsigned char)0] [9] [(short)14]))), (((/* implicit */unsigned int) ((((1826168536U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-3))))))));
                /* LoopSeq 2 */
                for (unsigned int i_3 = 2; i_3 < 14; i_3 += 1) 
                {
                    arr_10 [(signed char)1] [i_2] [i_1 - 2] [i_0] = 2269490159077969180LL;
                    var_24 = ((/* implicit */unsigned long long int) arr_8 [i_1 + 1] [i_1]);
                }
                for (long long int i_4 = 2; i_4 < 15; i_4 += 3) 
                {
                    var_25 += ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) arr_13 [i_4] [i_4] [i_4] [i_4])), (arr_3 [i_4 - 2] [i_1 + 1] [i_2])))));
                    arr_14 [i_0] [i_0] [i_2] [i_0] [i_4 - 2] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_4])))) ? (((/* implicit */unsigned int) ((int) ((unsigned int) -2269490159077969193LL)))) : (((arr_8 [i_1 - 2] [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3805553460948739064ULL))))))))));
                    var_26 -= ((/* implicit */unsigned char) (_Bool)0);
                }
                var_27 -= ((/* implicit */unsigned char) max((min((arr_11 [i_1] [(unsigned short)4] [i_1 + 1] [i_1 - 2]), (((unsigned int) var_0)))), ((-(min((((/* implicit */unsigned int) (short)-27711)), (3925551268U)))))));
            }
            for (short i_5 = 3; i_5 < 13; i_5 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_6 = 2; i_6 < 14; i_6 += 1) 
                {
                    var_28 = ((/* implicit */int) ((short) max((((/* implicit */long long int) min((var_9), (var_9)))), (min((((/* implicit */long long int) (short)-31296)), (arr_4 [3U] [i_5]))))));
                    var_29 -= ((/* implicit */unsigned int) (+(((((((/* implicit */int) var_10)) >> (((var_3) - (225319049U))))) * (((/* implicit */int) ((unsigned char) var_6)))))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    arr_22 [i_0] [i_0] [i_0] [(unsigned short)0] [i_0] = ((/* implicit */short) arr_12 [i_0] [3U] [i_5] [3LL]);
                    arr_23 [i_0] [i_1 - 1] [(_Bool)1] [i_5 - 2] [i_7] = arr_9 [i_1] [i_1] [i_1] [i_1 + 1] [i_5 - 2] [(_Bool)1];
                }
                for (int i_8 = 3; i_8 < 13; i_8 += 4) 
                {
                    arr_27 [i_0] [(unsigned short)8] [i_0] [10U] [i_0] [i_0] = ((/* implicit */short) arr_26 [i_8 + 1] [i_1] [i_5 + 1] [i_1 - 1]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_30 *= ((/* implicit */unsigned long long int) arr_26 [i_0] [(short)8] [(short)8] [i_0]);
                        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25657)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1 - 1] [i_1] [i_8 + 1] [(short)2] [i_0])))))) ? (arr_15 [i_0] [i_1] [i_1] [i_9]) : ((+(var_0)))));
                        var_32 = (!(((/* implicit */_Bool) (short)-2988)));
                    }
                    var_33 *= ((/* implicit */short) var_16);
                    arr_30 [i_0] [i_0] [i_5 - 1] [i_0] [(_Bool)1] [i_5] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) (~(var_11)))) && (((/* implicit */_Bool) (-(arr_5 [i_0] [i_0] [i_0]))))))));
                }
                var_34 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((arr_1 [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))), (2027816105U)));
                arr_31 [i_5] [i_1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) >= (arr_15 [i_0] [i_1] [i_1] [i_5]))))))), ((-(max((arr_3 [(_Bool)1] [i_1] [i_5]), (((/* implicit */unsigned long long int) (short)(-32767 - 1)))))))));
            }
            for (int i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                var_35 -= ((/* implicit */long long int) (-((-(((/* implicit */int) arr_9 [i_1] [i_1] [i_1 - 2] [i_1] [i_1 - 1] [i_1]))))));
                /* LoopSeq 2 */
                for (short i_11 = 0; i_11 < 16; i_11 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_12 = 2; i_12 < 15; i_12 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-31305))));
                        var_37 *= ((/* implicit */short) arr_13 [i_0] [i_1] [i_11] [i_12]);
                        var_38 = ((/* implicit */short) (((+(-2269490159077969180LL))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_17))) <= (2742788682236827895LL)))))));
                        var_39 = ((/* implicit */unsigned short) ((_Bool) ((long long int) (unsigned char)139)));
                        var_40 *= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_34 [i_0] [i_0]))));
                    }
                    /* LoopSeq 1 */
                    for (short i_13 = 1; i_13 < 15; i_13 += 4) 
                    {
                        var_41 = ((/* implicit */short) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (arr_3 [3ULL] [i_11] [i_0])))) ? (arr_21 [i_0] [i_0] [(short)12] [i_13 + 1]) : (((/* implicit */unsigned int) -281501414)))), (((/* implicit */unsigned int) (signed char)-1))));
                        arr_43 [i_0] [i_0] [i_0] [i_0] [i_13] = ((/* implicit */long long int) var_0);
                        var_42 += ((/* implicit */long long int) arr_1 [i_0]);
                        arr_44 [(short)7] [i_10] [i_13] [i_10] [i_13] [i_0] [i_0] = max((((((/* implicit */_Bool) (unsigned char)81)) ? (((/* implicit */int) (short)32760)) : (((/* implicit */int) (short)-16631)))), (((/* implicit */int) (short)32767)));
                    }
                    var_43 = ((/* implicit */unsigned int) min((var_43), (((unsigned int) min((arr_29 [i_1] [i_1] [i_1 + 1] [i_1] [8U]), (arr_29 [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 1]))))));
                    var_44 = ((/* implicit */unsigned int) (-(max(((-(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) ((_Bool) var_6)))))));
                    /* LoopSeq 2 */
                    for (short i_14 = 0; i_14 < 16; i_14 += 3) /* same iter space */
                    {
                        var_45 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14117))) == (max((((/* implicit */unsigned long long int) arr_17 [i_0] [i_1] [i_10] [i_11] [i_14])), (var_1)))))) << (((/* implicit */int) (((+(((/* implicit */int) var_15)))) > (((/* implicit */int) var_15)))))));
                        var_46 = ((/* implicit */unsigned int) arr_38 [i_0] [i_11]);
                    }
                    for (short i_15 = 0; i_15 < 16; i_15 += 3) /* same iter space */
                    {
                        var_47 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_33 [i_0] [i_10]))) >= (max((max((((/* implicit */long long int) arr_40 [i_11])), (arr_4 [i_11] [i_1]))), (((/* implicit */long long int) var_11))))));
                        arr_50 [i_15] [i_11] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) var_14))));
                    }
                }
                for (unsigned int i_16 = 0; i_16 < 16; i_16 += 1) 
                {
                    var_48 = ((/* implicit */signed char) var_4);
                    var_49 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_16])))))));
                }
            }
            var_50 += ((/* implicit */unsigned int) ((_Bool) arr_51 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0]));
            var_51 = (+((-(((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_35 [(unsigned short)8] [i_1] [i_1] [i_1]) : (arr_20 [i_1] [i_1] [i_1] [2U]))))));
        }
    }
    /* vectorizable */
    for (signed char i_17 = 1; i_17 < 24; i_17 += 1) 
    {
        var_52 = ((/* implicit */int) (-(var_13)));
        /* LoopSeq 2 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            var_53 = ((/* implicit */short) max((var_53), (((/* implicit */short) ((((arr_55 [i_18] [i_17 + 1]) + (9223372036854775807LL))) << (((((arr_55 [i_17] [i_17 + 1]) + (7093814835446187129LL))) - (55LL))))))));
            /* LoopNest 2 */
            for (long long int i_19 = 3; i_19 < 24; i_19 += 3) 
            {
                for (unsigned short i_20 = 0; i_20 < 25; i_20 += 3) 
                {
                    {
                        arr_67 [i_20] = ((/* implicit */short) (-((+(arr_66 [i_20] [i_19] [i_19] [i_19] [i_18] [i_17])))));
                        var_54 = ((/* implicit */_Bool) arr_62 [i_17 - 1]);
                    }
                } 
            } 
        }
        for (unsigned char i_21 = 0; i_21 < 25; i_21 += 4) 
        {
            var_55 *= ((/* implicit */_Bool) (~(arr_61 [i_17 + 1] [i_17] [i_17 - 1] [i_17 - 1])));
            var_56 = arr_60 [i_17] [i_21] [i_21];
        }
        var_57 = ((/* implicit */short) min((var_57), (((/* implicit */short) arr_57 [i_17]))));
        var_58 = ((((/* implicit */_Bool) arr_56 [i_17 - 1])) ? (((/* implicit */long long int) arr_66 [i_17] [(short)16] [i_17] [i_17] [i_17 + 1] [i_17 - 1])) : (5LL));
    }
    for (long long int i_22 = 1; i_22 < 13; i_22 += 4) 
    {
        var_59 = ((/* implicit */short) max((arr_56 [i_22]), (((/* implicit */long long int) ((_Bool) ((short) arr_62 [i_22]))))));
        /* LoopSeq 1 */
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_24 = 0; i_24 < 17; i_24 += 4) 
            {
                arr_76 [i_22] [i_22 + 3] [i_22] [i_22] = (-((-(((/* implicit */int) arr_59 [i_22 - 1] [i_22 + 4])))));
                arr_77 [i_22] [i_23] [i_24] [(short)16] = ((/* implicit */unsigned short) ((unsigned int) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)0)))));
                var_60 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_65 [i_22 + 3] [i_23] [i_23] [i_23] [i_23])), (1U)))) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((/* implicit */int) max((arr_65 [i_22 + 2] [i_23] [i_23] [i_24] [i_24]), (arr_65 [i_22] [i_23] [i_24] [i_23] [i_24]))))));
                arr_78 [i_23] = ((/* implicit */signed char) (-(arr_55 [i_22] [i_23])));
            }
            var_61 = ((/* implicit */int) max((max((arr_61 [i_22] [i_22 - 1] [i_22 + 3] [i_22 + 3]), (arr_68 [i_22 - 1] [i_22 + 1]))), ((+(arr_61 [i_23] [i_22] [i_22 + 2] [i_22 + 2])))));
            var_62 = arr_66 [i_22] [i_22] [i_22 + 2] [i_22] [i_22] [i_22 + 2];
        }
    }
    /* LoopNest 3 */
    for (unsigned short i_25 = 1; i_25 < 24; i_25 += 2) 
    {
        for (unsigned int i_26 = 0; i_26 < 25; i_26 += 1) 
        {
            for (long long int i_27 = 0; i_27 < 25; i_27 += 4) 
            {
                {
                    var_63 = ((/* implicit */short) min((arr_55 [i_25 - 1] [i_25 + 1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(var_7)))))))));
                    arr_87 [i_25] [i_25] [i_26] [(short)10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-14785))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_28 = 2; i_28 < 24; i_28 += 3) 
                    {
                        arr_91 [i_25] [i_25] [i_26] [2U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_82 [i_25 + 1])) ? (((/* implicit */int) arr_82 [i_25 + 1])) : (((/* implicit */int) arr_82 [i_25 - 1]))));
                        var_64 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-22654)) : (((/* implicit */int) arr_80 [1U]))))));
                        var_65 = ((/* implicit */short) ((unsigned int) (signed char)59));
                        var_66 = ((/* implicit */int) arr_90 [i_26]);
                    }
                    var_67 *= ((/* implicit */unsigned short) ((((unsigned int) ((arr_79 [i_25] [i_26]) ? (((/* implicit */int) arr_79 [20ULL] [i_27])) : (((/* implicit */int) var_15))))) * (((/* implicit */unsigned int) 1269321288))));
                }
            } 
        } 
    } 
    var_68 = ((/* implicit */short) ((((/* implicit */long long int) (+(((/* implicit */int) var_5))))) == ((~(-1LL)))));
}
