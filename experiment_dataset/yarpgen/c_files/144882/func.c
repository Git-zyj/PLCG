/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144882
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) ((arr_0 [i_0]) && (((/* implicit */_Bool) (signed char)3))))) : (((arr_0 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                var_13 ^= min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */signed char) var_6)), (arr_8 [i_0] [i_1] [i_2] [i_1]))))))), (arr_1 [i_1] [i_2]));
                arr_9 [i_2] [i_2] [i_1] [i_0] = arr_8 [i_0] [i_0] [i_0] [(unsigned char)8];
                var_14 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_11))))))) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_11)), (arr_2 [i_1] [i_2]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    var_15 -= ((/* implicit */long long int) ((arr_6 [i_2] [i_1] [i_0]) & (arr_2 [i_3] [i_2])));
                    arr_12 [i_3] [9ULL] [8ULL] [i_3] = ((/* implicit */long long int) var_10);
                    arr_13 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((long long int) arr_5 [i_0] [i_1] [i_3]));
                    arr_14 [i_3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_11)))) : ((+(15501145809947817163ULL)))));
                    arr_15 [i_0] [i_1] [i_1] [i_0] = ((((/* implicit */int) arr_10 [i_2] [i_1])) - (var_7));
                }
            }
            /* vectorizable */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        {
                            var_16 -= ((/* implicit */_Bool) ((unsigned long long int) (signed char)-51));
                            var_17 ^= ((/* implicit */long long int) (+(((/* implicit */int) (signed char)(-127 - 1)))));
                            arr_23 [i_6] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_4]))));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_17 [i_0] [i_0]))) ? (arr_1 [i_0] [i_5]) : (((unsigned long long int) arr_4 [i_0] [i_0]))));
                        }
                    } 
                } 
                var_19 -= ((/* implicit */unsigned short) ((3547959872U) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (arr_6 [i_1] [i_1] [i_1]) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_1] [i_4] [i_4])))))));
                arr_24 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(arr_6 [i_0] [i_1] [i_0]))))));
            }
            /* vectorizable */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned char i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    var_20 = ((/* implicit */unsigned int) ((long long int) arr_4 [i_7] [i_7]));
                    arr_29 [i_0] [i_7] [i_7] [i_0] = ((/* implicit */short) ((unsigned long long int) arr_2 [i_0] [i_1]));
                }
                arr_30 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_7] [i_1] [i_1] [(signed char)2])) ^ (((/* implicit */int) (signed char)-53))));
                var_21 -= ((unsigned long long int) var_8);
            }
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) (-(min((((/* implicit */long long int) arr_16 [(signed char)1] [i_1] [(signed char)1] [i_1])), (9177612396632265686LL)))))))))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_23 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_9] [i_0] [i_0]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8))) >= (4270982541938198495ULL)))))), (min((max((1420411037), (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_19 [i_9])) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_0]))))))));
            var_24 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)45))) : (0LL)))));
        }
        arr_33 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((min((1415173621), (((/* implicit */int) arr_18 [i_0] [i_0] [i_0])))) - (arr_25 [i_0] [i_0])))));
        arr_34 [i_0] &= ((/* implicit */unsigned long long int) ((1585747661352299109ULL) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)134)) ? (((/* implicit */int) (unsigned char)242)) : (996422203))))));
        /* LoopSeq 4 */
        for (signed char i_10 = 0; i_10 < 14; i_10 += 4) /* same iter space */
        {
            var_25 += ((/* implicit */signed char) min((((long long int) arr_19 [i_0])), (((/* implicit */long long int) ((((/* implicit */_Bool) 4486121660430817930ULL)) && (((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_0] [i_0] [i_10] [i_10] [i_10] [i_10])) ^ (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))))))));
            /* LoopSeq 1 */
            for (signed char i_11 = 0; i_11 < 14; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_12 = 1; i_12 < 12; i_12 += 4) 
                {
                    for (int i_13 = 2; i_13 < 12; i_13 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (short)4498))));
                            arr_44 [i_0] [i_10] [i_10] [i_12 - 1] [i_13] = ((/* implicit */short) (+(min((arr_43 [i_13] [i_13] [i_13 - 2] [i_12 - 1] [i_12 + 1]), (((/* implicit */unsigned long long int) (_Bool)1))))));
                            arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((arr_37 [i_0]) <= (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (-4041058105234634272LL)))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_14 = 3; i_14 < 11; i_14 += 1) 
                {
                    var_27 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_39 [i_11] [i_11] [i_14 + 1] [i_14] [i_14 - 2] [i_14 - 2])) > (((/* implicit */int) (!(var_4))))));
                    arr_48 [i_14] [i_11] [i_0] [i_14] = arr_0 [i_0];
                    var_28 -= ((/* implicit */signed char) ((arr_7 [i_0] [i_10] [i_11] [i_14 - 3]) - (((((((/* implicit */int) arr_4 [i_11] [i_0])) + (2147483647))) << (((((((/* implicit */int) arr_46 [i_0] [0LL] [i_10] [i_11] [i_14])) + (82))) - (2)))))));
                }
                for (long long int i_15 = 2; i_15 < 13; i_15 += 1) 
                {
                    var_29 += ((/* implicit */unsigned char) min((((arr_47 [i_15 - 1] [i_10] [i_11] [i_0]) - (arr_47 [i_15 - 1] [i_10] [i_10] [i_10]))), (((/* implicit */long long int) ((-25844762) > ((+(((/* implicit */int) arr_22 [i_0] [i_0] [i_10] [i_11] [i_0] [i_15])))))))));
                    var_30 ^= ((/* implicit */unsigned char) max((arr_32 [i_15 + 1]), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((arr_37 [i_0]) << (((4772564276379881878LL) - (4772564276379881878LL)))))), (((var_12) << (((((/* implicit */int) (signed char)-1)) + (13))))))))));
                    arr_52 [i_0] [i_10] [i_11] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_10])) ? (311724796U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))));
                    /* LoopSeq 3 */
                    for (signed char i_16 = 0; i_16 < 14; i_16 += 4) 
                    {
                        var_31 ^= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_16 [i_16] [i_11] [11U] [i_0]))))) ? (((/* implicit */int) ((unsigned char) var_8))) : (((((/* implicit */int) arr_17 [i_10] [i_15])) * (((/* implicit */int) (unsigned char)77)))))) > (((/* implicit */int) ((signed char) ((var_9) ? (((/* implicit */unsigned long long int) 288230376151187456LL)) : (var_1)))))));
                        arr_55 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_11)), ((unsigned char)217)))) ? (((/* implicit */int) max((((unsigned short) arr_35 [i_11] [i_11])), (((/* implicit */unsigned short) (signed char)88))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((var_1) - (((/* implicit */unsigned long long int) arr_2 [i_0] [i_10]))))))))));
                    }
                    for (signed char i_17 = 0; i_17 < 14; i_17 += 2) 
                    {
                        var_32 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0] [i_0] [i_11] [i_0]))))) ? (((/* implicit */unsigned long long int) ((unsigned int) -1188833920586179248LL))) : (min((((/* implicit */unsigned long long int) ((long long int) arr_0 [i_15]))), (((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */unsigned long long int) 6)) : (18102799848792429328ULL)))))));
                        var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) (~(((((/* implicit */int) (unsigned short)34766)) ^ (((/* implicit */int) arr_56 [i_0] [i_10] [i_15 + 1])))))))));
                        var_34 = ((((/* implicit */int) arr_28 [i_0] [i_15 + 1] [i_11] [i_11] [i_17] [i_11])) + (((((/* implicit */int) arr_28 [i_0] [i_15 - 2] [i_15 - 2] [8LL] [i_0] [i_0])) + (((/* implicit */int) arr_28 [i_0] [i_15 - 1] [i_0] [i_11] [10ULL] [i_0])))));
                        arr_59 [i_11] [i_11] = ((/* implicit */unsigned char) var_1);
                        arr_60 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (signed char)-11);
                    }
                    /* vectorizable */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        arr_65 [i_11] [i_18] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)29)) > (((/* implicit */int) arr_58 [(_Bool)1] [(_Bool)1] [8ULL]))));
                        arr_66 [i_0] [i_18] [i_10] [i_11] [i_15] [i_0] [i_18] = ((((/* implicit */_Bool) (signed char)-9)) ? (arr_62 [i_0] [i_10] [3LL] [i_15 - 2] [i_18] [i_10] [3LL]) : (5321080537653882452LL));
                        var_35 |= ((/* implicit */signed char) ((((arr_50 [i_18] [i_10] [i_10] [i_10] [i_0]) ^ (((/* implicit */int) arr_57 [i_11] [i_0] [i_11] [i_11] [i_18] [i_0] [i_10])))) / (((arr_21 [i_15] [i_10] [i_11] [i_15] [(signed char)2]) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) arr_5 [i_0] [i_10] [i_18]))))));
                    }
                }
            }
            var_36 = ((/* implicit */unsigned char) arr_35 [i_0] [(unsigned char)7]);
            arr_67 [i_10] [i_10] [i_0] = ((/* implicit */signed char) (((~(arr_25 [i_0] [i_0]))) & (((((var_7) + (2147483647))) >> (((/* implicit */int) var_6))))));
        }
        for (signed char i_19 = 0; i_19 < 14; i_19 += 4) /* same iter space */
        {
            var_37 = ((/* implicit */unsigned long long int) max((var_37), (((9259858992554117712ULL) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))))));
            arr_70 [i_0] = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) 12166958682383442340ULL)))), ((!(((/* implicit */_Bool) arr_61 [i_19] [i_19] [i_0] [(signed char)9] [i_0]))))));
        }
        for (unsigned int i_20 = 0; i_20 < 14; i_20 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0]))))) == (((((/* implicit */long long int) arr_50 [i_0] [i_0] [i_0] [i_20] [i_0])) ^ (arr_40 [i_0] [i_20] [i_21]))))))));
                arr_76 [i_20] = ((/* implicit */unsigned int) arr_42 [i_0] [i_0] [i_0] [i_0] [i_0]);
                arr_77 [i_0] [i_20] [i_20] [i_21] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) -2147483642))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-121))) != (16777215LL))))) : (-1LL))) <= (((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))))) ^ (((arr_20 [i_0] [i_20] [i_0]) + (((/* implicit */long long int) 0))))))));
            }
            var_39 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((var_1) > (((/* implicit */unsigned long long int) var_8)))))))) >= (var_2));
        }
        for (unsigned long long int i_22 = 0; i_22 < 14; i_22 += 4) 
        {
            arr_80 [i_22] [i_0] [i_0] = ((/* implicit */unsigned short) min((((arr_62 [(unsigned short)6] [i_22] [i_22] [i_22] [i_0] [(unsigned short)6] [i_0]) / (arr_62 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), ((+(((long long int) (signed char)-61))))));
            arr_81 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) max((((/* implicit */long long int) arr_50 [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_26 [i_0] [i_22] [i_22]))))) / (max((((/* implicit */int) arr_16 [i_0] [i_0] [i_22] [i_22])), (((((/* implicit */int) (short)24101)) * (((/* implicit */int) var_6))))))));
        }
    }
    var_40 = ((/* implicit */unsigned char) (signed char)124);
    var_41 *= ((/* implicit */unsigned long long int) ((((long long int) max((((/* implicit */unsigned char) var_4)), (var_10)))) ^ (((/* implicit */long long int) min(((-(((/* implicit */int) (short)-15215)))), (((/* implicit */int) var_11)))))));
}
