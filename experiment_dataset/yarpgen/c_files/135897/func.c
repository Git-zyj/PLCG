/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135897
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
    var_15 = var_5;
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (signed char)7));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-33)), (arr_2 [i_0]))))) : (arr_0 [i_0])));
        arr_4 [(unsigned char)0] |= ((/* implicit */unsigned int) (((~(arr_0 [4U]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [4ULL]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(_Bool)0])))))))));
        var_17 = ((/* implicit */int) 4232402627256906317LL);
    }
    for (long long int i_1 = 1; i_1 < 23; i_1 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_2 = 3; i_2 < 24; i_2 += 3) 
        {
            arr_9 [i_1 + 1] = ((/* implicit */long long int) (_Bool)1);
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 4; i_3 < 22; i_3 += 2) 
            {
                arr_13 [i_1 + 2] [i_3 + 1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_7 [i_1 + 1]))));
                var_18 |= ((/* implicit */unsigned char) ((arr_8 [i_1 + 1] [i_2 - 2] [i_3 + 3]) % (arr_8 [i_1 + 2] [i_2 - 2] [i_3 - 1])));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_19 ^= ((((/* implicit */int) arr_11 [i_1 + 2] [i_2 - 1] [i_4])) << (((var_13) - (14975341220732683566ULL))));
                var_20 = ((unsigned char) (_Bool)1);
                /* LoopSeq 3 */
                for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_6 = 3; i_6 < 23; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_2 - 3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_12 [i_2 + 1]))));
                        arr_21 [i_1] [(unsigned short)5] [i_6] [i_5] [i_6] = ((/* implicit */unsigned short) arr_18 [17U] [i_2 - 3] [i_6]);
                    }
                    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        var_22 = ((((/* implicit */_Bool) var_5)) ? (4232402627256906297LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) (short)-12869)) : (((/* implicit */int) var_2))))));
                        arr_24 [2U] [i_2 - 2] [i_2] [8ULL] = ((/* implicit */unsigned long long int) arr_5 [i_2 - 2] [i_7]);
                        arr_25 [(_Bool)1] [i_2 + 1] [i_4] [(signed char)24] [i_2] [(unsigned short)3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_5]))) : (var_4))) << (((/* implicit */int) arr_11 [i_1 + 1] [i_1 - 1] [i_1 + 1]))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        var_23 = arr_18 [i_2 - 1] [(unsigned char)10] [i_1 + 2];
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)60))) | (var_5)));
                        var_25 = ((/* implicit */unsigned int) ((-229701815) ^ (((/* implicit */int) arr_6 [i_1 - 1] [9ULL]))));
                    }
                    arr_28 [i_1 + 2] [16U] [i_2 - 3] [(short)20] [(short)19] [i_5] = ((/* implicit */unsigned char) arr_10 [i_2 - 3]);
                    var_26 = ((/* implicit */long long int) arr_26 [i_1 - 1] [i_2 - 1] [i_4] [i_5]);
                }
                for (unsigned char i_9 = 0; i_9 < 25; i_9 += 1) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [i_9] [i_1 - 1] [i_1])) >> (((((/* implicit */int) (unsigned short)34854)) - (34848)))));
                    arr_31 [i_9] [(unsigned char)9] [i_1] = ((arr_22 [i_4] [i_2 - 2] [i_1 + 2] [i_1 + 2] [(unsigned short)8] [i_1 + 2] [i_1]) ? (1153891564U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [9ULL] [i_2 - 2] [i_2] [i_2 - 3] [(short)19] [i_1 + 2] [(short)19]))));
                    var_28 = ((/* implicit */short) (+(((/* implicit */int) arr_11 [i_2 + 1] [i_1 + 2] [i_1 + 1]))));
                    var_29 = ((/* implicit */unsigned char) arr_19 [i_1 + 1] [i_1 - 1] [i_2 - 2] [12ULL] [i_2 + 1]);
                }
                for (unsigned char i_10 = 0; i_10 < 25; i_10 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 1; i_11 < 24; i_11 += 1) 
                    {
                        var_30 ^= ((/* implicit */_Bool) arr_18 [i_2] [i_10] [i_2]);
                        var_31 |= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_30 [(short)23])) ? (-7245069356305535957LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_2] [i_1]))))));
                    }
                    var_32 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_37 [i_1 - 1] [i_4] [i_4] [i_4] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (4232402627256906326LL)));
                    var_33 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [13] [13])) || (arr_11 [i_10] [i_4] [i_2]))))));
                }
            }
            /* LoopSeq 4 */
            for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 2) 
            {
                var_34 = ((/* implicit */short) ((unsigned char) arr_35 [i_1] [i_2 - 3]));
                arr_41 [(signed char)2] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_1))));
                var_35 = ((/* implicit */unsigned char) arr_35 [i_1] [(signed char)13]);
                var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) (~(arr_30 [i_1 + 1]))))));
            }
            for (int i_13 = 2; i_13 < 21; i_13 += 4) 
            {
                arr_44 [i_13] [i_2] [i_1] = ((/* implicit */signed char) (unsigned short)30681);
                var_37 = (~(((5173983744760976416LL) / (((/* implicit */long long int) arr_18 [i_1] [i_2] [i_13])))));
                var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_35 [i_13] [i_2 + 1]))))) ? (((/* implicit */int) arr_32 [i_13] [23])) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 3670094736120580237LL))))))))));
            }
            for (unsigned char i_14 = 0; i_14 < 25; i_14 += 1) 
            {
                arr_47 [i_14] [i_2] = ((/* implicit */_Bool) var_12);
                arr_48 [i_14] [6ULL] [i_14] = ((/* implicit */signed char) arr_26 [i_14] [i_2] [i_2] [i_1]);
                var_39 = ((/* implicit */_Bool) ((unsigned char) arr_43 [i_1 + 1] [i_2] [i_14]));
            }
            for (short i_15 = 0; i_15 < 25; i_15 += 4) 
            {
                arr_53 [(unsigned char)7] [i_2] [i_15] [1LL] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_1] [i_1] [i_1] [i_15] [i_1])) ? (((/* implicit */int) arr_43 [i_1] [i_2] [i_15])) : (((/* implicit */int) arr_38 [i_1 + 2] [i_1] [i_1 - 1] [i_2] [i_2] [i_15]))))) & (3670094736120580220LL)));
                /* LoopSeq 2 */
                for (unsigned int i_16 = 0; i_16 < 25; i_16 += 1) 
                {
                    var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) arr_23 [6LL]))));
                    var_41 += ((/* implicit */_Bool) ((unsigned short) ((-844562345266678680LL) + (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_16] [18ULL] [(unsigned char)9] [i_1] [i_2 + 1] [i_1] [i_1]))))));
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    arr_59 [i_17] [i_15] [i_15] [i_2] [i_1] [(signed char)6] = ((/* implicit */unsigned int) var_10);
                    var_42 *= ((((/* implicit */int) arr_32 [i_1 - 1] [i_1 + 2])) - (((/* implicit */int) arr_32 [i_1] [i_1 + 1])));
                    arr_60 [i_1] [i_2 - 3] [5LL] = ((/* implicit */_Bool) arr_52 [i_1] [19U] [i_15] [i_17]);
                    var_43 = ((/* implicit */_Bool) ((signed char) var_14));
                }
                arr_61 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_6)) ? (14ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)186))))) <= (((/* implicit */unsigned long long int) ((int) arr_51 [i_1])))));
            }
        }
        /* vectorizable */
        for (int i_18 = 2; i_18 < 23; i_18 += 2) 
        {
            arr_64 [i_18 - 1] = ((/* implicit */long long int) 4177920);
            arr_65 [i_1] [16ULL] [(unsigned char)20] = ((/* implicit */unsigned int) (+(arr_57 [(short)6] [i_1 + 2] [i_18 - 1] [i_18 - 2])));
            var_44 = ((/* implicit */short) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_1] [i_18]))) ^ (var_3))));
            var_45 = ((/* implicit */unsigned short) min((var_45), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-21578))) >= (var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_18] [i_1 + 1] [i_18] [i_18 + 1]))))))))));
        }
        var_46 &= ((/* implicit */short) max((((((/* implicit */_Bool) arr_14 [i_1 + 2] [i_1 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 2]))) : (arr_14 [i_1] [i_1 + 2]))), ((((_Bool)1) ? (arr_14 [i_1] [i_1 + 2]) : (arr_14 [i_1 + 1] [i_1 + 1])))));
        var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) max((((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-30))) / (arr_19 [i_1] [(unsigned char)12] [i_1] [2ULL] [i_1 + 2]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_36 [i_1] [i_1 + 2] [16ULL] [(_Bool)1] [i_1]), ((unsigned char)11))))))), (((/* implicit */unsigned long long int) min((((var_14) + (((/* implicit */long long int) ((/* implicit */int) arr_23 [4ULL]))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_15 [(signed char)20] [i_1] [i_1])))))))))))));
    }
    for (long long int i_19 = 0; i_19 < 10; i_19 += 3) 
    {
        arr_69 [i_19] = ((/* implicit */unsigned short) (+(((var_14) / (((/* implicit */long long int) arr_8 [i_19] [i_19] [i_19]))))));
        arr_70 [i_19] [6LL] &= ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [18ULL] [i_19] [i_19] [i_19]))) * (arr_1 [(short)6])))));
        var_48 -= ((/* implicit */_Bool) max((min((((/* implicit */long long int) var_0)), (((((/* implicit */long long int) ((/* implicit */int) var_9))) + (844562345266678679LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_68 [2])), (var_12)))) || (((/* implicit */_Bool) 18446744073709551615ULL)))))));
    }
}
