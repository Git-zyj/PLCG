/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156041
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        arr_2 [i_0 + 2] [i_0] = ((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) 2747517355876406304ULL)))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned long long int) min((((long long int) (signed char)-30)), (((/* implicit */long long int) arr_1 [i_0 - 1] [i_1])))));
                    arr_8 [i_0 - 2] [i_1] [i_2] = ((/* implicit */short) 2747517355876406296ULL);
                }
            } 
        } 
    }
    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned short) ((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59617))) : ((~(2747517355876406304ULL)))));
        var_10 = ((/* implicit */long long int) ((unsigned int) ((long long int) var_7)));
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                arr_17 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) ((int) (short)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((2747517355876406308ULL) > (((/* implicit */unsigned long long int) arr_13 [i_5])))))) : (((((/* implicit */_Bool) arr_14 [i_5])) ? (var_5) : (((/* implicit */unsigned long long int) arr_15 [i_3] [i_4] [i_4] [(signed char)1])))))));
                arr_18 [i_3] [i_4] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)14)) ? (15699226717833145309ULL) : (18446744073709551615ULL)));
            }
            for (signed char i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                var_11 = ((/* implicit */signed char) var_7);
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) var_8))))) - (arr_11 [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (+(((/* implicit */int) var_8))))))) : (((max((-1932502099684174902LL), (arr_11 [i_3]))) + (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
            }
            arr_23 [i_3] = ((/* implicit */short) arr_21 [i_3] [i_4] [i_4]);
            arr_24 [i_3] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_7), (((/* implicit */unsigned short) ((short) (signed char)-127))))))) * (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-113))))) * (((15699226717833145316ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))))))));
        }
        var_13 = ((/* implicit */unsigned int) (-(min((((/* implicit */long long int) 3491544287U)), (arr_11 [i_3])))));
        arr_25 [3LL] [i_3] = ((/* implicit */long long int) (~(11593018021521706787ULL)));
    }
    for (long long int i_7 = 4; i_7 < 17; i_7 += 2) 
    {
        var_14 = ((/* implicit */long long int) var_2);
        arr_28 [i_7] = ((/* implicit */unsigned long long int) ((unsigned short) max((((-6LL) % (arr_26 [i_7]))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_27 [i_7] [i_7]))))));
        arr_29 [i_7 - 4] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)127)) ? ((+(arr_26 [i_7]))) : ((+(arr_27 [i_7 - 2] [i_7 - 3])))));
        /* LoopSeq 1 */
        for (long long int i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_9 = 0; i_9 < 20; i_9 += 4) /* same iter space */
            {
                arr_36 [i_7] [i_9] [i_9] = ((((((/* implicit */_Bool) 7043010653179743032LL)) ? (arr_31 [i_7] [i_8] [i_9]) : (((/* implicit */long long int) -175292520)))) % (((/* implicit */long long int) (-(((/* implicit */int) ((arr_34 [i_7] [i_8]) > (((/* implicit */unsigned long long int) var_1)))))))));
                /* LoopSeq 2 */
                for (long long int i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        arr_43 [(unsigned short)11] [i_8] [i_9] [i_10] [i_9] [i_7] [i_7 + 2] = ((/* implicit */short) ((((-7039863224397504721LL) + (9223372036854775807LL))) << (((((/* implicit */int) (signed char)70)) - (70)))));
                        arr_44 [i_7] [i_8] [i_9] [i_10] [i_11] [i_11] = ((/* implicit */unsigned int) (((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_1))));
                    }
                    var_15 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1080799607945417184LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2767))) : (2747517355876406315ULL)))) ? (((/* implicit */unsigned long long int) -792876009279293609LL)) : (((unsigned long long int) 1311574174U)))));
                    var_16 = ((/* implicit */_Bool) max((((/* implicit */short) (signed char)-7)), ((short)7205)));
                }
                for (unsigned long long int i_12 = 4; i_12 < 18; i_12 += 4) 
                {
                    arr_47 [i_8] [i_8] [i_9] [i_12] [i_7] [i_9] = ((/* implicit */unsigned long long int) (signed char)115);
                    var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_7] [i_8] [i_9] [i_9] [i_9] [i_12 - 4] [i_12])) ? (((((/* implicit */_Bool) var_6)) ? (-7039863224397504721LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_40 [i_7] [i_7] [i_7] [i_7] [i_8] [i_9] [i_12])))))));
                }
            }
            for (unsigned int i_13 = 0; i_13 < 20; i_13 += 4) /* same iter space */
            {
                arr_51 [i_7 - 1] = (-(((arr_31 [i_7 + 2] [i_7 + 1] [i_7 - 1]) - (arr_31 [i_7 - 3] [i_7 - 1] [i_7 + 3]))));
                /* LoopNest 2 */
                for (short i_14 = 2; i_14 < 17; i_14 += 2) 
                {
                    for (unsigned int i_15 = 1; i_15 < 18; i_15 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) max((var_18), (max((((/* implicit */long long int) 1105384791U)), (-4783536347220196744LL)))));
                            arr_56 [i_7] [i_15] [i_13] [i_15] [i_14] [i_15] = ((/* implicit */unsigned int) (unsigned char)27);
                            var_19 += ((/* implicit */signed char) ((max((((((/* implicit */_Bool) -3413924616373318494LL)) && (((/* implicit */_Bool) -7520759507267937025LL)))), (((((/* implicit */_Bool) arr_30 [i_7] [i_13] [i_15])) || (((/* implicit */_Bool) (signed char)-124)))))) && (((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_52 [i_7] [i_7] [i_7 + 3] [(signed char)18]))))))))));
                        }
                    } 
                } 
            }
            var_20 = ((/* implicit */long long int) max((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11593018021521706783ULL)) && (((/* implicit */_Bool) (short)-10)))))));
        }
    }
    for (signed char i_16 = 0; i_16 < 18; i_16 += 2) 
    {
        arr_59 [i_16] [i_16] = ((((/* implicit */_Bool) ((arr_26 [i_16]) | (((var_8) ? (arr_58 [i_16]) : (((/* implicit */long long int) 1165120490U))))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)7))) : (arr_27 [i_16] [i_16]));
        /* LoopSeq 1 */
        for (long long int i_17 = 0; i_17 < 18; i_17 += 2) 
        {
            arr_62 [i_16] [i_17] = ((/* implicit */_Bool) ((int) (-(15699226717833145309ULL))));
            arr_63 [i_16] [i_16] = 594781273U;
        }
        var_21 = ((/* implicit */long long int) min(((-(arr_38 [i_16]))), (((((/* implicit */_Bool) arr_38 [i_16])) ? (15699226717833145312ULL) : (arr_38 [i_16])))));
    }
    var_22 = ((/* implicit */long long int) var_6);
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) 672156248U)) | (max((min((-7820556613522592917LL), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))))));
    var_24 = ((/* implicit */long long int) ((unsigned long long int) (((!(((/* implicit */_Bool) -5171600930673696365LL)))) ? (((/* implicit */unsigned long long int) ((long long int) var_5))) : (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (7889763410084628150ULL))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_18 = 0; i_18 < 25; i_18 += 3) 
    {
        arr_67 [i_18] = ((/* implicit */long long int) arr_66 [i_18]);
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_65 [i_18])) ? ((-(-518089871))) : ((-(((/* implicit */int) var_7))))));
    }
    for (int i_19 = 0; i_19 < 13; i_19 += 1) 
    {
        var_26 = ((/* implicit */long long int) (((-(7889763410084628150ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
        arr_71 [i_19] = ((/* implicit */int) (-(((unsigned long long int) 2747517355876406303ULL))));
        arr_72 [i_19] = ((/* implicit */short) 2501915253U);
    }
}
