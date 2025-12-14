/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130594
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) arr_1 [i_0]);
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)17)) + (((/* implicit */int) (unsigned short)35)))))));
        var_13 = ((/* implicit */unsigned int) max((var_13), (var_3)));
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */short) var_5);
        arr_6 [i_1] = ((/* implicit */short) ((((_Bool) ((((/* implicit */_Bool) (short)-23459)) ? (var_7) : (arr_0 [i_1])))) ? (((/* implicit */unsigned long long int) ((min((2963270390U), (((/* implicit */unsigned int) (short)-28957)))) ^ (((/* implicit */unsigned int) arr_4 [i_1]))))) : (((unsigned long long int) ((_Bool) arr_5 [3ULL] [(unsigned short)7])))));
        var_15 = ((/* implicit */unsigned char) (~(min(((~(192058303))), (((/* implicit */int) var_5))))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (((((+(3110364802U))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [8U])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))))) < (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) var_4)) != (var_11))))))))))));
    }
    for (int i_2 = 0; i_2 < 12; i_2 += 4) /* same iter space */
    {
        arr_9 [0ULL] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_0 [i_2])))) ? (((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_2))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_2] [i_2])))))));
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_4 = 3; i_4 < 10; i_4 += 3) 
            {
                var_17 = ((/* implicit */short) (~(((((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */int) arr_12 [i_4])) : (arr_4 [i_2])))) | (arr_10 [i_3 + 1] [i_3 + 1] [i_3 + 1])))));
                var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))), (((max((((/* implicit */unsigned int) var_9)), (var_3))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4])))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    arr_16 [i_4 - 3] [i_4] [i_5] [i_4 - 2] &= ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_14 [(unsigned short)4] [i_2] [i_3 + 1] [2LL] [i_3 + 1] [i_3 + 1]), (arr_14 [i_3] [i_2] [2ULL] [i_3] [i_3 + 1] [(unsigned short)0])))) ? (((((/* implicit */_Bool) (unsigned short)35)) ? (((/* implicit */int) (unsigned short)65483)) : (((/* implicit */int) (unsigned short)65500)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [(_Bool)0] [i_2] [i_2] [(_Bool)0] [i_3 + 1] [(_Bool)0])) || (((/* implicit */_Bool) arr_15 [i_3 + 1] [i_5] [i_5] [0U])))))));
                    var_19 |= ((/* implicit */int) max((min((((/* implicit */long long int) arr_1 [i_2])), (arr_10 [i_3 + 1] [i_3 + 1] [(unsigned short)9]))), (((/* implicit */long long int) ((unsigned int) (short)28938)))));
                }
                for (short i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    var_20 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)29336)) ? (((/* implicit */int) (short)28955)) : (((/* implicit */int) (short)-18426)))));
                    arr_21 [i_2] [i_4] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3 + 1])) ? (((/* implicit */int) arr_14 [(_Bool)1] [i_4] [(unsigned short)0] [(short)9] [i_6] [(unsigned short)1])) : (((/* implicit */int) arr_11 [i_3 + 1]))))), (2199014866944ULL)));
                }
                for (short i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_20 [i_4 - 3])))) ? (var_2) : (((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_5))))) - (arr_1 [i_4])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        arr_26 [i_4] [2U] [7U] [i_4] [(unsigned short)7] = ((/* implicit */int) (!(((/* implicit */_Bool) var_11))));
                        arr_27 [i_3 + 1] [i_4] [i_8] = ((/* implicit */short) (~((~(((/* implicit */int) arr_13 [i_2] [i_2] [(signed char)3] [i_2]))))));
                        arr_28 [i_2] [i_4] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)36736)) ? (arr_24 [i_2] [i_4 - 1] [(short)8] [(short)8] [(unsigned short)11]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4 - 2] [i_3 + 1] [i_3 + 1] [i_3 + 1])))));
                    }
                    arr_29 [(_Bool)0] [i_4] = ((/* implicit */short) var_10);
                }
                var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) (+(-446009346388203749LL)))) ? (((/* implicit */int) arr_22 [(_Bool)1] [(_Bool)1] [i_3 + 1] [1ULL])) : (((/* implicit */int) ((signed char) arr_18 [i_2]))))) > (((/* implicit */int) min((((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_8 [i_2] [i_4])))), (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) != (arr_1 [i_4]))))))));
            }
            /* vectorizable */
            for (unsigned int i_9 = 4; i_9 < 10; i_9 += 2) 
            {
                var_23 &= arr_1 [i_9];
                arr_32 [i_2] [4U] [8U] = ((/* implicit */unsigned short) ((arr_23 [(_Bool)1] [i_9 - 1] [(_Bool)1] [1LL]) - (((/* implicit */unsigned int) var_11))));
                var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-13893)))))));
                var_25 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_9])) ? (((/* implicit */int) arr_7 [1LL])) : (((/* implicit */int) arr_5 [11ULL] [6U])))));
            }
            for (unsigned short i_10 = 2; i_10 < 11; i_10 += 1) 
            {
                arr_36 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) var_11);
                arr_37 [(signed char)0] [(_Bool)1] [(_Bool)1] [i_2] = ((/* implicit */short) ((unsigned short) (+(arr_10 [i_10 + 1] [i_10 - 1] [3LL]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_11 = 1; i_11 < 10; i_11 += 1) 
                {
                    var_26 = ((/* implicit */unsigned int) var_9);
                    /* LoopSeq 3 */
                    for (unsigned int i_12 = 1; i_12 < 11; i_12 += 3) 
                    {
                        arr_44 [i_2] [(signed char)9] [6LL] [4LL] [4LL] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_22 [i_2] [8U] [i_2] [i_2])) ? (((/* implicit */int) arr_19 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_22 [(_Bool)1] [i_11] [i_10 - 1] [i_11 + 1])))) | (((((/* implicit */_Bool) arr_19 [i_2] [i_3 + 1] [0LL])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_22 [i_2] [i_10 + 1] [i_11 + 1] [i_12]))))));
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [(signed char)9] [i_11 + 1])) >> (((((/* implicit */int) arr_5 [(_Bool)1] [i_11 - 1])) - (181)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [2U] [i_11 + 1])) >= (((/* implicit */int) var_1))))) : (((/* implicit */int) var_10))));
                        var_28 = min((((/* implicit */unsigned int) arr_18 [6U])), (((arr_24 [i_12] [i_12] [i_12 - 1] [i_12 + 1] [i_12 - 1]) + (arr_24 [(short)9] [(unsigned char)2] [(unsigned char)2] [(unsigned char)2] [i_12 - 1]))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        arr_49 [i_3 + 1] [6ULL] [(unsigned char)0] [6U] [i_3 + 1] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) ((var_2) << (((((/* implicit */int) var_10)) + (78)))))) ? (((/* implicit */int) ((_Bool) var_9))) : (((/* implicit */int) var_9)))));
                        arr_50 [3U] = ((/* implicit */unsigned int) max((max((((/* implicit */int) arr_31 [i_2] [i_2] [i_2])), ((-(((/* implicit */int) arr_39 [i_2] [i_3] [i_2] [8U])))))), ((+((-(((/* implicit */int) arr_7 [10LL]))))))));
                        var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) arr_40 [i_3 + 1] [i_10 + 1] [i_11 + 1])))));
                    }
                    for (unsigned int i_14 = 2; i_14 < 9; i_14 += 1) 
                    {
                        arr_54 [3U] [3U] [1LL] [i_11] [(unsigned short)6] [i_14 + 3] &= ((/* implicit */unsigned char) arr_25 [(signed char)9] [(unsigned short)6] [(short)0] [i_11 + 2]);
                        var_30 = ((/* implicit */signed char) max((((/* implicit */long long int) arr_38 [3] [4U] [2] [3U] [(_Bool)1] [(_Bool)0])), (arr_10 [i_14 - 1] [1ULL] [i_2])));
                        arr_55 [i_11] [(short)6] [10LL] [11LL] [i_3] &= ((/* implicit */unsigned short) var_7);
                    }
                    var_31 = ((/* implicit */int) max((((((2322569501U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [(_Bool)1] [10ULL] [(short)6]))))) / (((/* implicit */unsigned int) max((var_7), (((/* implicit */int) arr_33 [1LL] [(short)8]))))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_3 [(signed char)8] [i_3 + 1])), (min((arr_22 [i_2] [i_3] [i_10] [i_11 - 1]), (((/* implicit */unsigned short) arr_8 [i_3] [i_3])))))))));
                }
            }
            var_32 = ((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (((/* implicit */int) max((arr_25 [i_2] [6U] [i_3 + 1] [i_3 + 1]), (arr_25 [9] [i_3] [i_2] [i_2]))))));
        }
        for (int i_15 = 0; i_15 < 12; i_15 += 2) 
        {
            var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)65470)), (11621518170298619654ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_47 [i_15] [i_15] [i_15] [8ULL] [i_2] [(unsigned short)6])) && (arr_8 [i_2] [1LL])))) : (((/* implicit */int) ((unsigned char) arr_24 [i_2] [(signed char)9] [(_Bool)1] [10LL] [1ULL]))))) * ((-(((/* implicit */int) ((unsigned short) arr_8 [i_2] [2U]))))))))));
            var_34 = ((/* implicit */signed char) ((unsigned long long int) (unsigned short)65489));
        }
        for (int i_16 = 1; i_16 < 11; i_16 += 2) 
        {
            arr_62 [(short)11] [i_2] = ((/* implicit */short) arr_3 [i_2] [(signed char)5]);
            arr_63 [i_16] [i_16] [1ULL] = ((/* implicit */unsigned char) (short)13569);
            /* LoopSeq 3 */
            for (signed char i_17 = 1; i_17 < 9; i_17 += 4) /* same iter space */
            {
                var_35 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35048))) * (((((/* implicit */_Bool) (unsigned short)35)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35048))) : (18446741874694684671ULL)))));
                var_36 = ((/* implicit */unsigned int) var_10);
            }
            for (signed char i_18 = 1; i_18 < 9; i_18 += 4) /* same iter space */
            {
                var_37 |= ((/* implicit */unsigned short) (~(((arr_65 [(unsigned short)8] [i_16] [i_16 + 1]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_19 = 0; i_19 < 12; i_19 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_20 = 0; i_20 < 12; i_20 += 3) 
                    {
                        var_38 = ((/* implicit */unsigned long long int) var_11);
                        var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) | (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_5)) : (var_7)));
                        var_40 = ((/* implicit */long long int) var_11);
                        var_41 = ((/* implicit */unsigned long long int) ((arr_40 [i_16 + 1] [i_16 + 1] [4ULL]) / (((/* implicit */long long int) arr_69 [i_18]))));
                        var_42 = ((/* implicit */unsigned int) arr_13 [i_2] [i_2] [4] [i_2]);
                    }
                    for (unsigned int i_21 = 3; i_21 < 9; i_21 += 4) 
                    {
                        var_43 = ((_Bool) arr_4 [i_18 + 2]);
                        var_44 |= ((/* implicit */unsigned char) var_6);
                        arr_77 [0LL] [0] [i_18] [i_19] [i_18] [5U] = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) / (((((/* implicit */int) (short)-15351)) * (((/* implicit */int) arr_22 [(short)0] [i_19] [2U] [i_16 - 1]))))));
                    }
                    var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_53 [i_2] [i_16] [6U] [(short)6] [i_2] [i_16] [i_19])) ? (((unsigned int) var_11)) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                    var_46 = ((/* implicit */short) arr_25 [i_2] [i_2] [0U] [i_2]);
                    arr_78 [6U] [i_16] [i_18] [10U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 0U)) + (1441707177240894617LL)))) ? (((/* implicit */int) arr_52 [(short)10] [1ULL] [i_18 - 1] [10] [(signed char)9] [i_18] [(signed char)9])) : (((((/* implicit */_Bool) 18446741874694684646ULL)) ? (((/* implicit */int) (short)-28955)) : (((/* implicit */int) var_6))))));
                }
            }
            for (unsigned long long int i_22 = 1; i_22 < 11; i_22 += 3) 
            {
                var_47 = ((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) arr_71 [7U] [(unsigned short)6] [i_16 + 1] [(unsigned short)6]))), (((((/* implicit */int) var_4)) / (arr_71 [i_2] [9U] [i_16 + 1] [i_16 - 1])))));
                arr_82 [i_22] [8LL] [10LL] [i_22] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_40 [i_2] [i_16 - 1] [i_22])))) ? (((/* implicit */int) (unsigned short)36736)) : (((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] [0U]))));
                /* LoopSeq 2 */
                for (unsigned int i_23 = 0; i_23 < 12; i_23 += 3) 
                {
                    arr_87 [5U] [10ULL] [5LL] [(unsigned short)10] = ((/* implicit */short) min((((/* implicit */unsigned int) max(((unsigned short)63573), (((/* implicit */unsigned short) (short)28963))))), (min(((~(arr_74 [i_2] [i_16 - 1] [i_2] [i_22]))), (((/* implicit */unsigned int) var_0))))));
                    arr_88 [1U] [(short)2] [i_16 - 1] [2] [2U] = ((/* implicit */unsigned short) arr_43 [(short)0] [(signed char)9] [3ULL] [i_16] [(signed char)9] [(_Bool)1] [11ULL]);
                    var_48 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (arr_60 [i_16 + 1] [i_22 - 1])))) ? (min((((((/* implicit */_Bool) arr_60 [9U] [i_16 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_2] [i_16 + 1] [i_22 - 1] [(unsigned short)4]))) : (arr_66 [6U] [i_16 - 1] [i_23]))), (((long long int) arr_80 [i_23] [(_Bool)1] [i_16] [7])))) : (((/* implicit */long long int) ((arr_41 [i_16 - 1] [i_16 + 1] [i_22 + 1] [i_22 + 1]) - (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
                }
                for (unsigned char i_24 = 0; i_24 < 12; i_24 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_25 = 0; i_25 < 12; i_25 += 3) 
                    {
                        var_49 = ((/* implicit */unsigned char) min((var_49), (((/* implicit */unsigned char) ((_Bool) var_6)))));
                        var_50 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((arr_90 [i_2] [(unsigned short)8] [(signed char)3] [i_24]) ? (arr_83 [(unsigned short)5] [5ULL] [i_16 + 1] [i_24]) : (((/* implicit */int) var_5)))))));
                    }
                    arr_94 [i_2] [i_2] [i_2] [(signed char)5] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)-28971), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */int) arr_65 [i_2] [(_Bool)1] [11ULL])) : (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((arr_23 [i_2] [i_2] [i_2] [0U]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [(unsigned char)7] [(signed char)7] [i_22] [(unsigned short)7] [i_16] [4ULL])))))) : ((~(((((/* implicit */_Bool) arr_51 [(unsigned short)5] [(_Bool)1])) ? (((/* implicit */long long int) arr_86 [i_2] [i_16 + 1] [i_22] [i_24] [i_22 - 1])) : (arr_10 [4LL] [i_22] [(signed char)0]))))));
                    var_51 = (-(arr_89 [i_16 - 1] [i_16 + 1] [(short)1] [i_16 - 1]));
                    arr_95 [3U] [i_22] [i_16] [i_2] = ((/* implicit */short) max((3510415138655053780ULL), (((/* implicit */unsigned long long int) max(((+(arr_72 [i_2] [(unsigned short)6] [i_2] [i_2] [i_16 - 1]))), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) > (((/* implicit */int) (unsigned short)0))))))))));
                    arr_96 [i_2] [i_16] = ((/* implicit */unsigned long long int) (unsigned short)37480);
                }
                var_52 &= ((/* implicit */unsigned int) max((((/* implicit */short) (!(((/* implicit */_Bool) ((var_1) ? (((/* implicit */unsigned int) var_7)) : (3701067943U))))))), (arr_47 [i_22] [(short)9] [10U] [(unsigned short)5] [(short)3] [i_2])));
            }
            var_53 |= ((/* implicit */_Bool) ((max((3552261557U), (((/* implicit */unsigned int) (short)-28936)))) ^ (var_3)));
            var_54 = ((/* implicit */int) var_2);
        }
    }
    var_55 = ((/* implicit */unsigned int) min((var_55), (((var_9) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((var_2) <= (var_3)))) + (((/* implicit */int) var_4))))) : (var_3)))));
    var_56 = ((/* implicit */unsigned short) max((var_56), (((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) var_6)), (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (var_3))))), (((/* implicit */unsigned int) var_6)))))));
    var_57 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)28957))));
}
