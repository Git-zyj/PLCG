/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118792
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 4; i_2 < 18; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        {
                            arr_14 [i_0] = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) arr_12 [i_0] [i_1] [i_2 - 3] [i_2 - 1] [i_4])) > (((/* implicit */int) var_3)))));
                            arr_15 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (~((((-(((/* implicit */int) var_5)))) ^ (((/* implicit */int) arr_7 [i_2 - 1] [i_2 + 4] [i_2 - 2] [i_2 + 3]))))));
                            var_11 = ((/* implicit */short) (signed char)6);
                        }
                    } 
                } 
            } 
            var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))), ((~(((/* implicit */int) (short)16383))))))) ? (((/* implicit */int) ((unsigned char) arr_11 [i_0] [19LL] [i_1] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */int) min((((/* implicit */short) var_5)), ((short)16383))))));
        }
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            arr_18 [i_0] = var_7;
            arr_19 [i_0] = ((/* implicit */unsigned char) (-(arr_13 [i_0] [i_0] [i_5] [i_5])));
        }
        for (unsigned char i_6 = 2; i_6 < 19; i_6 += 2) 
        {
            arr_22 [i_0] [i_6 - 2] [i_6] = ((/* implicit */short) arr_13 [i_0] [i_6] [i_0] [i_6 + 1]);
            arr_23 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)255))));
        }
        arr_24 [i_0] = ((/* implicit */unsigned char) (-(((arr_8 [i_0] [(signed char)5] [i_0] [i_0] [i_0] [i_0]) / (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
        /* LoopSeq 2 */
        for (short i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            /* LoopSeq 4 */
            for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
            {
                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_27 [i_0])) <= (((/* implicit */int) var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_0]))) : (arr_6 [i_0] [(unsigned char)8])))) ? (((/* implicit */int) max(((short)-16384), (((/* implicit */short) (signed char)-7))))) : (min(((~(((/* implicit */int) (signed char)(-127 - 1))))), ((-(((/* implicit */int) arr_10 [i_0] [i_7]))))))));
                /* LoopSeq 1 */
                for (short i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    /* LoopSeq 4 */
                    for (signed char i_10 = 2; i_10 < 19; i_10 += 2) /* same iter space */
                    {
                        arr_38 [i_0] [i_0] [(unsigned char)16] [i_9] [5LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(-3478119533947995361LL)))) ? (((/* implicit */int) var_1)) : ((-(((/* implicit */int) (signed char)-109))))));
                        var_14 = ((/* implicit */short) (~(((/* implicit */int) var_6))));
                        var_15 = ((/* implicit */unsigned short) max(((-(((/* implicit */int) var_10)))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_11 [i_10] [i_10 + 3] [i_10] [i_10 + 2] [i_10 + 2] [(short)2] [i_0])), ((unsigned short)53973))))));
                        arr_39 [i_0] [i_9] [i_7] [i_7] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) (unsigned short)47200)) : (((/* implicit */int) (short)-1))));
                    }
                    /* vectorizable */
                    for (signed char i_11 = 2; i_11 < 19; i_11 += 2) /* same iter space */
                    {
                        var_16 = ((unsigned short) arr_17 [i_0]);
                        arr_43 [i_0] [(short)9] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((((+(((/* implicit */int) var_10)))) + (2147483647))) << (((((/* implicit */int) (unsigned char)18)) - (18)))));
                        var_17 = ((/* implicit */unsigned short) (signed char)-18);
                    }
                    for (signed char i_12 = 2; i_12 < 19; i_12 += 2) /* same iter space */
                    {
                        arr_46 [i_0] [11LL] [i_8] [i_0] [i_12] = ((/* implicit */unsigned char) max(((unsigned short)18336), (((/* implicit */unsigned short) (signed char)6))));
                        arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) (short)-29613)))), ((-(((/* implicit */int) arr_31 [i_12 + 3] [i_12 + 2] [i_12 + 2] [i_12] [i_12 - 2]))))));
                    }
                    for (short i_13 = 2; i_13 < 21; i_13 += 2) 
                    {
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_32 [i_13] [i_13 - 1] [i_13 + 1] [(unsigned char)12] [i_13]))))) ? (((/* implicit */int) min((arr_32 [i_13] [i_13 - 1] [i_13 - 2] [i_13 - 1] [i_13]), (arr_32 [i_13] [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13])))) : (((((/* implicit */int) (unsigned char)28)) * (((/* implicit */int) arr_32 [i_13] [i_13 - 2] [i_13 + 1] [i_13 - 2] [(short)16]))))));
                        var_19 = ((/* implicit */short) min(((~(((/* implicit */int) arr_40 [i_0])))), (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)124)), ((unsigned char)91))))));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_27 [i_9])) * (((/* implicit */int) arr_29 [i_0])))), (((/* implicit */int) max(((short)-24210), (((/* implicit */short) (signed char)16)))))))) ? (((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */int) (signed char)-50)) : (((/* implicit */int) (unsigned short)18329)))) : (((/* implicit */int) (unsigned short)65515))));
                        var_21 = ((/* implicit */unsigned char) var_10);
                        arr_51 [i_0] [i_7] [i_8] [i_9] [(signed char)16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_48 [i_7] [i_13] [i_13 - 2] [i_13 - 1] [i_0]), (arr_48 [i_9] [i_13] [i_13] [i_13 + 1] [i_0])))) ? (1688810970057825914LL) : (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)137)), ((unsigned short)47232)))) >> (((((/* implicit */int) (unsigned short)65515)) - (65497))))))));
                    }
                    arr_52 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_48 [i_0] [i_7] [(unsigned char)4] [i_8] [i_0])) / (((/* implicit */int) arr_48 [i_0] [i_0] [(unsigned short)0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_48 [i_0] [i_7] [i_8] [i_8] [i_0])) ? (((/* implicit */int) arr_48 [i_0] [i_7] [i_8] [i_7] [i_0])) : (((/* implicit */int) arr_48 [i_0] [i_7] [i_8] [i_9] [i_0])))) : (((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) (short)-29613)) : (((/* implicit */int) (short)1016))))));
                    arr_53 [i_0] [(short)16] [i_8] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_11 [i_0] [i_0] [(short)16] [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */int) var_10)) | (((/* implicit */int) arr_2 [i_0]))))));
                    arr_54 [i_0] [(signed char)2] [i_0] [i_0] [(unsigned short)4] [i_8] = ((/* implicit */unsigned char) (-(((/* implicit */int) min(((signed char)-8), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))))))))));
                }
                arr_55 [i_0] [i_0] [(signed char)13] = ((/* implicit */unsigned short) var_0);
            }
            /* vectorizable */
            for (unsigned char i_14 = 0; i_14 < 22; i_14 += 1) 
            {
                arr_58 [i_0] [i_7] [i_0] [i_0] = var_1;
                arr_59 [i_0] [i_0] [i_14] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)94))));
            }
            for (unsigned short i_15 = 3; i_15 < 21; i_15 += 1) 
            {
                arr_63 [i_0] [i_0] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((3449743945208588422LL) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [19LL])))))))) ? (((((/* implicit */int) (short)15919)) + (((/* implicit */int) arr_20 [i_15 - 3] [i_15 + 1])))) : ((+((~(((/* implicit */int) (short)-24210))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_16 = 0; i_16 < 22; i_16 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_17 = 0; i_17 < 22; i_17 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_10))));
                        arr_69 [i_0] [(signed char)1] [i_15] [20LL] [i_17] = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0])) == (((/* implicit */int) arr_2 [i_0]))));
                        var_23 = ((/* implicit */short) var_6);
                    }
                    for (unsigned short i_18 = 0; i_18 < 22; i_18 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */short) (~(((/* implicit */int) arr_66 [i_15 - 1] [i_15 - 2] [i_15 - 3] [i_15] [i_0] [i_15 - 1]))));
                        arr_73 [i_0] [i_0] [20LL] [(unsigned short)15] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_3)))) == (arr_13 [i_15 - 2] [i_15 - 3] [i_15] [i_15 - 3])));
                    }
                    for (unsigned short i_19 = 0; i_19 < 22; i_19 += 3) /* same iter space */
                    {
                        arr_77 [i_0] [(unsigned char)15] [i_15] [(unsigned short)8] [i_19] = ((/* implicit */signed char) (~(((/* implicit */int) arr_32 [i_0] [i_7] [i_0] [i_16] [i_15 - 1]))));
                        arr_78 [(unsigned char)6] [i_7] [i_0] [i_16] [(signed char)0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))))) ? ((-(((/* implicit */int) (unsigned short)47207)))) : (((/* implicit */int) (unsigned char)24))));
                    }
                    arr_79 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_8);
                    var_25 = ((/* implicit */short) ((((/* implicit */int) arr_60 [i_15 - 3] [i_15 - 2] [(unsigned char)8] [i_15])) + (((/* implicit */int) arr_60 [i_15 - 2] [i_15] [i_16] [i_16]))));
                }
                arr_80 [i_0] = ((/* implicit */unsigned char) (((+(arr_64 [i_15 - 3]))) & (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))))));
            }
            for (short i_20 = 0; i_20 < 22; i_20 += 4) 
            {
                var_26 = ((/* implicit */short) var_8);
                var_27 = ((/* implicit */unsigned char) var_10);
                var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
                var_29 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) var_5))))) ? (min((((/* implicit */long long int) arr_32 [i_0] [i_7] [i_0] [i_7] [i_20])), (8800445371401038857LL))) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) var_3))));
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-5585)) ? (((((/* implicit */_Bool) arr_35 [i_0] [i_20] [i_20] [i_0] [i_20])) ? (-4564042836889895123LL) : (((/* implicit */long long int) (-(((/* implicit */int) var_10))))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_7] [i_20])) ? (((/* implicit */int) (unsigned short)18345)) : (((/* implicit */int) arr_33 [i_0] [i_0] [i_7] [i_20])))), (((/* implicit */int) arr_5 [i_0] [(signed char)2] [i_20])))))));
            }
            var_31 = ((/* implicit */unsigned char) (signed char)-2);
            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_21 [i_7]))) ? ((~(arr_8 [(unsigned char)3] [i_7] [i_0] [i_0] [i_7] [i_7]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_20 [(short)11] [i_7])))))));
            arr_85 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned short)20), (((/* implicit */unsigned short) (signed char)-50))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned char)199)))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-15940)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))), (arr_64 [i_0])))));
        }
        /* vectorizable */
        for (long long int i_21 = 0; i_21 < 22; i_21 += 4) 
        {
            arr_88 [i_0] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)35))));
            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */int) arr_87 [i_0] [i_21])) : (((/* implicit */int) arr_60 [(signed char)18] [i_21] [i_21] [i_21]))));
        }
    }
    var_34 = ((/* implicit */short) var_8);
}
