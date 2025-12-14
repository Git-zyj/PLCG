/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189358
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
    var_14 |= var_5;
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)99)) << (((((((/* implicit */int) (signed char)-99)) + (127))) - (24)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_1 [i_0] [i_0])) % (((/* implicit */int) arr_1 [13] [i_0])))) | (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_15 = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0] [(unsigned char)6])) >= (((/* implicit */int) arr_1 [i_0] [i_0]))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_9 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_1]);
                arr_10 [i_2] [i_1] = (((!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))) - (arr_6 [i_0] [i_1] [i_0]))) : (arr_6 [i_0] [i_1] [i_2]));
                arr_11 [(short)7] = arr_1 [i_1] [i_1];
            }
            for (unsigned char i_3 = 4; i_3 < 13; i_3 += 4) 
            {
                arr_15 [i_3 - 4] [i_1] [i_0] = ((/* implicit */short) (!(((((/* implicit */_Bool) (signed char)-98)) || (((/* implicit */_Bool) (signed char)-99))))));
                var_16 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_3 + 1] [i_3 + 1] [i_3 + 1])) - (((((/* implicit */int) arr_1 [i_0] [i_0])) % (((/* implicit */int) arr_1 [13LL] [13LL]))))));
                var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [i_0] [i_0] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1]))))))) / (arr_7 [i_3 - 4] [i_3] [i_3 - 4])));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) (-(arr_7 [i_3 - 2] [i_3 - 3] [i_3 - 2])));
                            arr_21 [i_0] [i_1] [i_3 - 1] [i_0] [i_0] [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_5] [i_0] [i_0] [i_0] [i_0])) ? (arr_6 [i_1] [i_3] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0] [(unsigned short)0] [i_4] [i_5])))))) / (((arr_19 [12]) / (arr_0 [i_1])))));
                            var_19 = ((/* implicit */unsigned long long int) arr_17 [i_0] [i_1] [i_4] [i_0]);
                        }
                    } 
                } 
            }
            for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                arr_24 [i_0] [i_1] [i_1] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [(signed char)7] [i_6] [i_6]))) % (arr_17 [i_0] [i_1] [i_1] [i_6])))) ? (((/* implicit */int) arr_23 [i_0] [7LL] [i_6] [i_6])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_6]))));
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    arr_28 [i_0] [i_1] [i_6] [i_7] = arr_25 [i_0] [i_1] [i_1] [i_6] [i_7];
                    arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (-(arr_19 [i_7]));
                }
                arr_30 [i_0] [i_1] [i_1] = ((/* implicit */short) arr_8 [i_6] [i_1] [i_0]);
            }
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_0])) / (((/* implicit */int) arr_12 [i_1]))));
        }
        for (int i_8 = 0; i_8 < 16; i_8 += 1) 
        {
            var_21 *= ((/* implicit */short) ((arr_20 [i_0] [i_0] [i_8] [i_0] [i_0]) < (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])));
            /* LoopNest 2 */
            for (unsigned short i_9 = 1; i_9 < 15; i_9 += 3) 
            {
                for (int i_10 = 0; i_10 < 16; i_10 += 4) 
                {
                    {
                        var_22 = ((/* implicit */int) arr_1 [i_0] [i_0]);
                        var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_27 [i_10] [i_10] [i_9 - 1] [i_10])) / (((/* implicit */int) arr_8 [i_9 + 1] [i_9 - 1] [i_9 - 1]))));
                        var_24 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_36 [i_9 + 1] [(_Bool)1] [i_9] [i_9] [11LL] [i_9 - 1])) ^ (((((/* implicit */int) (unsigned short)41680)) | (((/* implicit */int) (signed char)-100))))));
                        var_25 += ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) arr_32 [i_8] [i_9] [i_8])) > (((/* implicit */int) arr_35 [i_0] [i_0] [i_9] [13] [13])))))));
                        arr_37 [i_0] [(short)3] [i_9] [i_9] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_18 [(unsigned short)5] [i_9] [i_8] [(unsigned short)5] [(unsigned short)5]))) | (arr_20 [i_0] [(unsigned short)10] [i_0] [i_0] [i_0]))) >= (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 1] [i_10])))));
                    }
                } 
            } 
            arr_38 [i_0] [i_8] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_27 [i_8] [i_0] [i_0] [i_0]))));
            arr_39 [(unsigned short)14] [i_8] [i_8] |= ((/* implicit */unsigned int) arr_0 [i_0]);
        }
        for (short i_11 = 0; i_11 < 16; i_11 += 4) 
        {
            var_26 = ((/* implicit */int) ((arr_7 [i_0] [i_0] [i_0]) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_11] [i_11])))))));
            var_27 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_11] [i_0] [7] [i_0] [i_0])) ? (((/* implicit */int) ((arr_34 [i_0] [i_11]) > (((/* implicit */unsigned long long int) arr_22 [i_0] [i_0] [i_0]))))) : (((/* implicit */int) arr_41 [i_0]))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_12 = 0; i_12 < 16; i_12 += 2) 
        {
            arr_45 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_42 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_22 [i_0] [i_0] [i_12])) : (arr_5 [i_0] [i_0]))) != (((/* implicit */unsigned long long int) ((arr_44 [i_0] [i_12] [i_12]) + (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_12] [i_0] [i_0]))))))));
            var_28 = ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0]);
            /* LoopNest 2 */
            for (signed char i_13 = 2; i_13 < 14; i_13 += 1) 
            {
                for (long long int i_14 = 0; i_14 < 16; i_14 += 3) 
                {
                    {
                        arr_50 [i_12] [i_14] = ((/* implicit */short) arr_18 [i_0] [i_0] [i_14] [i_13 + 2] [i_0]);
                        arr_51 [9LL] [i_12] [(short)5] [i_12] [i_14] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */int) (signed char)99)) : (((/* implicit */int) (unsigned char)150))))) ? (((/* implicit */unsigned long long int) arr_22 [i_0] [i_0] [i_0])) : (((arr_5 [(signed char)5] [(signed char)5]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_0])))))));
                        arr_52 [i_14] [(signed char)6] [i_14] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) arr_49 [i_0] [i_0] [i_0] [i_14] [i_0])) + (((/* implicit */int) arr_49 [i_0] [i_12] [i_12] [i_13] [i_0]))))) + (((arr_17 [i_0] [i_0] [i_13 + 2] [i_14]) | (((/* implicit */long long int) arr_4 [i_12] [i_14]))))));
                        arr_53 [i_14] [i_14] [i_14] [i_0] = ((((/* implicit */_Bool) (signed char)-106)) ? (-149287800) : (((/* implicit */int) arr_27 [i_13 + 1] [i_13] [i_13 - 1] [i_13])));
                        var_29 = arr_16 [i_14] [i_13 - 2] [i_14] [i_13 - 2] [i_13 - 2];
                    }
                } 
            } 
        }
    }
    for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 4) 
    {
        var_30 += ((/* implicit */short) arr_55 [i_15] [(unsigned short)12]);
        var_31 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) arr_54 [i_15] [i_15]))) & (arr_55 [9] [i_15]))) & (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_55 [i_15] [i_15])) ? (((/* implicit */int) arr_54 [i_15] [i_15])) : (((/* implicit */int) arr_54 [i_15] [i_15])))))))));
        arr_56 [i_15] = ((/* implicit */unsigned long long int) ((arr_55 [i_15] [i_15]) ^ (((/* implicit */long long int) (~((+(((/* implicit */int) arr_54 [i_15] [i_15])))))))));
        arr_57 [i_15] [i_15] = ((/* implicit */unsigned short) ((max((((arr_55 [10] [i_15]) | (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_15] [i_15]))))), (((/* implicit */long long int) arr_54 [i_15] [i_15])))) < (((/* implicit */long long int) ((/* implicit */int) ((max((arr_55 [i_15] [i_15]), (arr_55 [i_15] [i_15]))) != (arr_55 [i_15] [i_15])))))));
        arr_58 [i_15] [i_15] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-87)) || (((/* implicit */_Bool) (signed char)-117)))))) / ((~(arr_55 [i_15] [i_15]))))) + (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_54 [9LL] [i_15])) ? (((/* implicit */int) arr_54 [i_15] [i_15])) : (((/* implicit */int) arr_54 [i_15] [i_15]))))) / (arr_55 [(short)9] [2])))));
    }
    for (int i_16 = 0; i_16 < 15; i_16 += 2) 
    {
        var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_35 [i_16] [i_16] [i_16] [i_16] [i_16])) * (((/* implicit */int) ((((/* implicit */int) arr_35 [i_16] [i_16] [5ULL] [5ULL] [i_16])) < (((/* implicit */int) arr_35 [i_16] [i_16] [i_16] [i_16] [i_16])))))));
        arr_63 [i_16] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_60 [i_16])) % (((max((arr_5 [i_16] [i_16]), (((/* implicit */unsigned long long int) arr_25 [i_16] [i_16] [i_16] [i_16] [i_16])))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))) * (12767077562448728729ULL)))))));
    }
    var_33 = ((/* implicit */long long int) var_6);
}
