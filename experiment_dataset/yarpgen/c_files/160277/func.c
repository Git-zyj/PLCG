/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160277
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
    var_14 = ((/* implicit */unsigned long long int) ((long long int) min((var_13), (((/* implicit */long long int) var_3)))));
    var_15 = ((/* implicit */signed char) max((var_4), (((/* implicit */int) var_5))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) ((long long int) (-(((/* implicit */int) (unsigned short)726)))));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_3), (((/* implicit */signed char) arr_7 [i_0] [i_1] [i_1] [i_2]))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) | (arr_9 [(short)5] [(signed char)14] [i_1])))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)64792)))) : (((/* implicit */int) arr_0 [i_0])))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(signed char)13] [i_1])))))))));
                    var_17 = ((/* implicit */short) (~(max(((~(((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [(signed char)14])))), ((~(((/* implicit */int) arr_1 [i_2]))))))));
                    var_18 ^= ((/* implicit */short) arr_8 [i_0] [12U] [(signed char)4] [i_2]);
                    arr_11 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) min((arr_0 [i_2]), (arr_7 [i_2] [i_1] [i_0] [(signed char)13])))) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) min(((unsigned char)25), (var_2)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_2])))))))) : (((unsigned long long int) (+(((/* implicit */int) arr_6 [7LL])))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_3 = 2; i_3 < 20; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) (unsigned char)0);
                                arr_22 [i_0] [i_3 + 1] [i_0] [i_5] [i_0] = arr_15 [i_0] [i_3 - 1] [i_4] [i_0];
                                arr_23 [i_3] [i_3 - 1] [i_4] = ((/* implicit */signed char) ((long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (signed char)7))))) * (((((/* implicit */_Bool) (short)20297)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))) : (var_8))))));
                                arr_24 [(_Bool)1] [i_3 + 1] [(_Bool)1] [i_5] [i_6] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_1)) ? ((~(((/* implicit */int) (signed char)79)))) : (((/* implicit */int) (unsigned short)10))))));
                            }
                        } 
                    } 
                    arr_25 [i_0] [i_0] = ((/* implicit */long long int) arr_5 [i_0] [(unsigned char)14]);
                    var_20 = ((/* implicit */signed char) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)712)))))))));
                }
            } 
        } 
        var_21 = min((((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_5 [(unsigned short)2] [i_0]))))))), ((-((+(((/* implicit */int) (_Bool)1)))))));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)20297)))))));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_7])) ? (((/* implicit */int) arr_12 [i_7])) : (((/* implicit */int) arr_26 [i_7] [(signed char)19]))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) (unsigned short)742)) ? (((/* implicit */int) arr_26 [i_7] [15U])) : (((/* implicit */int) arr_4 [i_7]))))));
        arr_28 [i_7] [i_7] = ((/* implicit */short) ((arr_16 [i_7] [i_7] [i_7]) ? ((-(((/* implicit */int) (unsigned short)9709)))) : (((/* implicit */int) arr_7 [i_7] [(unsigned char)4] [i_7] [(signed char)0]))));
        arr_29 [i_7] = (unsigned short)64824;
        /* LoopNest 2 */
        for (short i_8 = 1; i_8 < 18; i_8 += 4) 
        {
            for (signed char i_9 = 1; i_9 < 19; i_9 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) ((unsigned long long int) (-(((/* implicit */int) arr_2 [i_7])))));
                    arr_38 [i_7] [i_7] [20ULL] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-27588)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-7)))))) : (arr_19 [i_9] [i_9 - 1] [i_9 + 2] [i_9])));
                    arr_39 [i_7] [i_7] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_27 [i_8 + 1])) : (((/* implicit */int) arr_17 [i_8 - 1] [i_9 + 1] [i_9 - 1] [i_9 + 1]))));
                }
            } 
        } 
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_11 = 0; i_11 < 21; i_11 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_12 = 0; i_12 < 21; i_12 += 2) 
            {
                for (signed char i_13 = 3; i_13 < 20; i_13 += 1) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_40 [i_13 - 3] [i_14]))));
                            arr_50 [5U] [5U] [i_12] [i_12] [i_14] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (short)0)) ? (arr_9 [i_12] [5ULL] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)739)))))));
                            arr_51 [8LL] [i_11] [i_11] [i_14] [3ULL] [i_13] [i_13] = ((/* implicit */long long int) arr_33 [i_14]);
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_10] [i_11] [i_12] [i_13 + 1]))) ^ (-9223372036854775800LL)))) ? (((long long int) (signed char)92)) : (((/* implicit */long long int) arr_37 [i_13 - 3] [i_13 + 1])))))));
                            arr_52 [i_14] [(unsigned char)6] [i_12] [i_11] [i_14] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_8 [i_14] [i_13 - 3] [i_12] [i_10]))));
                        }
                    } 
                } 
            } 
            arr_53 [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_11] [i_10])) ? (((((/* implicit */_Bool) var_1)) ? (var_13) : (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63)))));
            var_27 -= ((/* implicit */signed char) ((unsigned long long int) 15779169336054030216ULL));
            arr_54 [i_10] = ((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_10]))));
        }
        /* LoopNest 2 */
        for (long long int i_15 = 0; i_15 < 21; i_15 += 1) 
        {
            for (unsigned int i_16 = 3; i_16 < 20; i_16 += 1) 
            {
                {
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((2097152U), (((/* implicit */unsigned int) arr_0 [i_10])))), (((/* implicit */unsigned int) arr_34 [i_16 + 1] [i_16 + 1] [i_16 + 1]))))) ? ((-(((/* implicit */int) (signed char)-7)))) : (((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_12 [i_10]))))), (min((arr_33 [i_16]), (arr_12 [i_15]))))))));
                    /* LoopSeq 1 */
                    for (long long int i_17 = 3; i_17 < 18; i_17 += 4) 
                    {
                        var_29 = ((/* implicit */signed char) (+(5788765924400120551ULL)));
                        /* LoopSeq 3 */
                        for (signed char i_18 = 0; i_18 < 21; i_18 += 2) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned short) (unsigned char)255);
                            var_31 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) ((arr_7 [i_10] [i_10] [i_10] [i_10]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_3 [i_17] [(short)19])) : ((-(((/* implicit */int) arr_16 [i_18] [i_17 + 1] [i_10])))))));
                            var_32 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31))) : (9854496316000056435ULL)))) ? (((((/* implicit */_Bool) 9854496316000056435ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-4288883883737600261LL))) : (((/* implicit */long long int) ((arr_45 [i_17] [i_17] [i_17] [i_17]) ? (((/* implicit */int) arr_7 [i_10] [i_10] [0U] [i_10])) : (((/* implicit */int) arr_59 [i_16] [i_17] [(signed char)12])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_35 [i_16] [i_17 + 2]))) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */_Bool) 10LL)) ? (((/* implicit */int) (short)-26639)) : (((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_43 [i_15] [(unsigned char)3])), ((unsigned short)27381)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_37 [i_10] [i_18])) ? (9854496316000056435ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
                        }
                        for (signed char i_19 = 0; i_19 < 21; i_19 += 2) /* same iter space */
                        {
                            var_33 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (((unsigned long long int) arr_9 [i_16] [i_17 + 1] [i_19]))));
                            arr_66 [i_16] [(_Bool)1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) max(((unsigned char)87), ((unsigned char)1)))) ? (((/* implicit */int) arr_48 [i_16 - 2] [i_15] [i_17 - 1] [i_19])) : (((((/* implicit */_Bool) arr_31 [i_16] [i_19])) ? (((/* implicit */int) (unsigned short)64819)) : (((/* implicit */int) (short)30897))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_20 = 2; i_20 < 17; i_20 += 4) 
                        {
                            var_34 = ((/* implicit */signed char) ((long long int) arr_63 [i_10] [i_15] [i_20 - 1] [i_16] [9U] [i_17]));
                            var_35 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_10])))))));
                        }
                    }
                    /* LoopSeq 3 */
                    for (int i_21 = 2; i_21 < 20; i_21 += 1) 
                    {
                        arr_71 [i_10] [i_10] [i_10] [i_21] [i_16] = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned char) var_3))) ? (var_8) : (((/* implicit */long long int) (~(((/* implicit */int) arr_17 [i_15] [i_15] [(unsigned char)10] [i_15]))))))) / (8308120297430486876LL)));
                        arr_72 [i_16] [i_16] [i_21] = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_62 [i_15] [i_15] [i_16 + 1] [i_21 + 1] [i_15])) >> (((((/* implicit */int) arr_62 [i_16 - 1] [i_16 - 1] [i_16 - 3] [i_21 - 2] [i_21])) - (206)))))));
                        arr_73 [i_10] [i_10] [i_15] [i_16] [i_15] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_63 [i_10] [i_10] [i_10] [i_16] [(signed char)3] [3U])) && (((/* implicit */_Bool) arr_13 [1LL] [i_15] [i_16])))))))) ? ((+((~(var_11))))) : (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)64824))))))))));
                    }
                    for (signed char i_22 = 0; i_22 < 21; i_22 += 4) /* same iter space */
                    {
                        var_36 = ((/* implicit */long long int) (~((-((~(var_4)))))));
                        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_67 [i_16] [i_16 + 1] [i_16 - 1] [i_16] [i_16 - 1])) ? (((/* implicit */int) (unsigned char)113)) : (((/* implicit */int) arr_67 [i_16] [i_16] [i_16 + 1] [i_16] [i_16 - 2]))))) ? (((((/* implicit */_Bool) arr_76 [i_16] [i_16] [i_16 - 3] [i_16])) ? (arr_18 [6LL] [i_16] [i_16 - 2] [i_16 - 2]) : (4288883883737600260LL))) : (((((/* implicit */_Bool) arr_67 [i_16] [i_16] [i_16 - 1] [i_16] [i_16 - 2])) ? (-9223372036854775806LL) : (((/* implicit */long long int) ((/* implicit */int) arr_76 [i_16] [i_16] [i_16 + 1] [i_16])))))));
                    }
                    for (signed char i_23 = 0; i_23 < 21; i_23 += 4) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)64802))))), ((+(arr_36 [i_10] [(unsigned char)3] [(signed char)1])))))));
                        arr_80 [i_16] [i_16 + 1] [i_15] [i_16] = ((/* implicit */signed char) (unsigned short)53796);
                    }
                    var_39 = ((/* implicit */_Bool) (((((((~(((/* implicit */int) arr_77 [i_10] [i_10] [i_10] [i_10] [i_10])))) + (((/* implicit */int) arr_26 [i_16 - 1] [i_16 - 3])))) + (2147483647))) << (((/* implicit */int) var_7))));
                    arr_81 [i_16] [i_16] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_62 [i_16 - 1] [(unsigned char)1] [i_16 - 1] [(signed char)18] [i_16]))))), (max((arr_61 [i_16 + 1] [i_16] [i_16 + 1] [i_16 + 1] [i_16]), (((/* implicit */unsigned long long int) var_9))))));
                }
            } 
        } 
        arr_82 [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)65532)))) ? (max((((/* implicit */unsigned long long int) var_9)), (arr_30 [(short)8] [i_10] [(signed char)0]))) : (((((/* implicit */_Bool) (unsigned short)65532)) ? (15165060802897004621ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))) ? ((+((-(arr_64 [i_10] [i_10] [i_10] [(short)18] [i_10]))))) : ((-((+(9854496316000056435ULL)))))));
        var_40 = ((/* implicit */short) var_8);
    }
}
