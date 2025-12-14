/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188356
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned char) arr_2 [(unsigned char)7]);
        var_13 &= ((/* implicit */int) (unsigned short)49383);
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 10; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_2 = 3; i_2 < 8; i_2 += 3) 
        {
            arr_8 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) & (((/* implicit */int) (unsigned short)16137))))) ? (var_7) : (((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 - 2])))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                var_14 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_1 + 1]))));
                /* LoopSeq 2 */
                for (unsigned int i_4 = 2; i_4 < 10; i_4 += 3) /* same iter space */
                {
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (((-(-1312883142))) < (((/* implicit */int) (short)21375)))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_13 [i_5]) ^ (524287U)))) ? (arr_3 [6ULL] [i_5]) : (arr_6 [i_4 - 2] [(short)5] [3])));
                        var_17 &= ((/* implicit */short) var_5);
                        var_18 = ((/* implicit */unsigned long long int) arr_5 [i_2 - 2]);
                        var_19 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) var_9)) >> (((arr_1 [i_1] [i_2]) - (2318580411721554256ULL))))));
                    }
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_4))));
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_10 [0ULL] [10U] [i_4] [i_4 - 1]))));
                        var_22 *= ((/* implicit */short) (signed char)15);
                        var_23 = ((/* implicit */signed char) arr_17 [i_3] [i_3] [i_6]);
                    }
                    for (short i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        var_24 ^= ((/* implicit */int) (~(arr_14 [3LL] [3LL] [i_2 + 2] [i_2] [i_2 - 2] [i_7])));
                        var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-95))));
                        arr_22 [i_1] [i_1] [i_1 - 1] [i_3] [i_1 + 1] = ((/* implicit */short) arr_11 [(unsigned char)7] [(unsigned char)7] [(unsigned char)7] [i_4]);
                        arr_23 [i_1 + 1] [i_2] [i_3] [i_4] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32764))) | (arr_10 [i_3] [i_2 + 2] [i_2 + 2] [7U])));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        arr_27 [i_8] [i_1 + 1] [i_3] [i_4] [9] [9U] = (-(((((((/* implicit */int) (short)-4)) + (2147483647))) << (((((((/* implicit */int) (signed char)-8)) + (20))) - (12))))));
                        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_1 - 2])) ? (((/* implicit */unsigned long long int) arr_25 [i_1] [(signed char)8] [(short)6] [i_8] [10LL])) : (arr_21 [i_8])));
                    }
                    var_27 = ((/* implicit */unsigned long long int) (+(arr_13 [i_3])));
                }
                for (unsigned int i_9 = 2; i_9 < 10; i_9 += 3) /* same iter space */
                {
                    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_2]))))) / (arr_19 [i_3]))))));
                    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) arr_9 [i_1] [4U]))));
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_3 [i_2 + 3] [i_3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3]))))) : (((/* implicit */int) (short)2047))));
                    var_31 = ((/* implicit */int) arr_10 [i_3] [i_3] [i_3] [i_9]);
                }
                var_32 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (12865746410778165800ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1 - 1] [(signed char)1])) ? (354907731U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3]))))))));
                var_33 += arr_14 [i_1] [i_2] [i_3] [i_3] [i_2 + 3] [i_3];
                var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1 - 1] [10U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1] [i_1] [(short)2] [i_2 - 3] [i_1 - 1]))) : (arr_12 [i_2 + 2] [i_1 - 1] [i_1 + 1] [i_1 - 1]))))));
            }
            arr_30 [i_2] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_2 - 2] [i_2 - 1] [i_2] [i_2]))));
        }
        var_35 = ((/* implicit */unsigned int) 5580997662931385816ULL);
        arr_31 [i_1] [i_1] = ((/* implicit */signed char) arr_3 [(unsigned short)2] [i_1]);
    }
    /* vectorizable */
    for (unsigned int i_10 = 2; i_10 < 10; i_10 += 3) /* same iter space */
    {
        var_36 = ((/* implicit */long long int) (+(arr_18 [i_10] [8] [i_10 + 1] [i_10 - 2] [i_10])));
        /* LoopNest 2 */
        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 3) 
        {
            for (unsigned char i_12 = 0; i_12 < 11; i_12 += 1) 
            {
                {
                    var_37 = ((/* implicit */short) (+(arr_10 [i_10] [i_10] [i_10] [i_12])));
                    /* LoopSeq 2 */
                    for (short i_13 = 0; i_13 < 11; i_13 += 1) 
                    {
                        arr_45 [i_10] [i_11] [i_12] [i_12] = ((/* implicit */int) (-(arr_12 [i_10 - 1] [i_11] [i_11] [(signed char)6])));
                        var_38 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) / (var_8)));
                        arr_46 [6ULL] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_10 [i_10] [i_12] [i_11] [i_10]) >> (((((/* implicit */int) (short)-2047)) + (2048)))))) ? (arr_3 [i_11] [i_12]) : (((/* implicit */long long int) 1108852014U))));
                    }
                    for (unsigned int i_14 = 0; i_14 < 11; i_14 += 3) 
                    {
                        var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) < (arr_13 [2ULL])))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_15 = 1; i_15 < 10; i_15 += 1) /* same iter space */
                        {
                            var_40 = ((/* implicit */unsigned char) (signed char)-42);
                            arr_54 [i_10] = ((/* implicit */signed char) arr_4 [9]);
                        }
                        for (unsigned char i_16 = 1; i_16 < 10; i_16 += 1) /* same iter space */
                        {
                            var_41 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-(var_5)))) ? ((~(var_2))) : (((/* implicit */unsigned long long int) ((long long int) var_3)))));
                            var_42 = ((/* implicit */unsigned long long int) (~((~(-1LL)))));
                            arr_59 [i_10] [i_11] [i_12] [i_14] [i_14] [i_16] = (+(((arr_50 [7LL] [7LL] [(short)3] [i_14] [i_16]) ^ (11353794605166084727ULL))));
                        }
                        var_43 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-103)) ? (arr_47 [i_10] [i_11] [i_12] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_10 + 1] [i_11] [i_12] [i_12] [i_14])))))) : (((((/* implicit */_Bool) arr_28 [i_11] [(unsigned char)10] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)38))) : (5580997662931385808ULL)))));
                    }
                }
            } 
        } 
        arr_60 [i_10] [i_10] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_26 [i_10 - 2] [i_10 - 2] [i_10 - 1] [i_10 - 2] [i_10 - 2]))));
        arr_61 [8LL] |= arr_48 [i_10 - 1] [i_10] [i_10] [i_10] [i_10];
    }
    var_44 *= ((/* implicit */unsigned long long int) (signed char)-91);
    var_45 = ((/* implicit */unsigned int) max((((/* implicit */int) (short)0)), (var_6)));
    var_46 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16151))) : (-8051555474798448099LL)))) ? (((var_8) * (4294967280U))) : ((~(var_11))))) < (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
    var_47 = ((/* implicit */long long int) ((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
}
