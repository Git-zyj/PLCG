/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111545
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_19 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (unsigned char)198)) : (((/* implicit */int) arr_0 [i_0 - 2]))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            arr_7 [i_0 + 2] [i_1 + 1] = ((/* implicit */unsigned char) arr_2 [(short)14]);
            /* LoopSeq 3 */
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                /* LoopSeq 4 */
                for (unsigned char i_3 = 1; i_3 < 23; i_3 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */_Bool) ((((arr_10 [i_0] [i_1] [i_2 - 1] [i_3]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23708))))) / (((/* implicit */long long int) ((((/* implicit */int) (short)-5)) + (((/* implicit */int) var_18)))))));
                    /* LoopSeq 1 */
                    for (signed char i_4 = 3; i_4 < 21; i_4 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_1 + 1] [i_1 - 1] [i_3 - 1] [9LL])) / (((/* implicit */int) ((short) var_11)))));
                        var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_0] [i_0 - 2] [i_1] [i_3 - 1] [i_0 - 2] [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(signed char)14]))) : (arr_12 [i_0] [i_0 - 2] [i_1] [i_3 - 1] [i_4] [i_4 - 1])));
                    }
                }
                for (unsigned char i_5 = 1; i_5 < 23; i_5 += 1) /* same iter space */
                {
                    var_23 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0] [i_1 - 2] [i_2] [i_5])) && (((/* implicit */_Bool) 67108864U)))))));
                    var_24 = ((/* implicit */signed char) 1563839573U);
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 3; i_6 < 23; i_6 += 4) 
                    {
                        arr_19 [i_5 - 1] = ((/* implicit */short) ((unsigned short) var_4));
                        var_25 += ((/* implicit */signed char) 4194303U);
                    }
                    for (short i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_15 [i_0] [i_1 + 1] [i_2]))) || ((!(((/* implicit */_Bool) (signed char)0))))));
                        arr_23 [i_7] [i_7] [i_2] [i_5 + 1] [i_2] = ((/* implicit */short) arr_20 [i_0] [i_1] [17U] [i_7]);
                        var_27 = ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) > (arr_3 [22U] [i_7])));
                        var_28 = ((/* implicit */signed char) ((unsigned int) arr_6 [i_0 + 2]));
                    }
                    for (short i_8 = 0; i_8 < 24; i_8 += 1) /* same iter space */
                    {
                        arr_27 [i_0] [i_1 - 2] [i_2] [i_5] [i_8] [(short)0] = ((/* implicit */signed char) var_6);
                        arr_28 [i_0 - 2] [i_0 - 2] [i_1] [i_2] [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_12 [i_2] [22U] [i_1] [i_5] [i_1] [i_2]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1])))))) && (((((/* implicit */_Bool) (short)-17091)) && (((/* implicit */_Bool) 491520U))))));
                    }
                }
                for (unsigned char i_9 = 1; i_9 < 23; i_9 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12479))) >= (3246189358U)));
                    var_30 = ((/* implicit */signed char) (+(((/* implicit */int) arr_11 [i_0 + 1] [i_1 - 1] [i_2 - 1] [i_9 + 1]))));
                    var_31 = ((/* implicit */unsigned int) ((signed char) arr_20 [i_0] [i_0] [(signed char)17] [3LL]));
                }
                for (unsigned char i_10 = 1; i_10 < 23; i_10 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (short i_11 = 2; i_11 < 21; i_11 += 1) 
                    {
                        arr_37 [i_0] [i_1] [i_11] = ((/* implicit */_Bool) ((((/* implicit */int) (short)-11125)) - (((((/* implicit */int) arr_21 [i_0 + 1] [i_1] [i_1 - 1] [i_2 + 3] [i_10] [i_11 + 2])) | (((/* implicit */int) (unsigned char)191))))));
                        var_32 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_29 [i_10 - 1] [i_10] [(short)19] [i_10] [i_10 - 1]))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_33 = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)173))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 1]))) : (var_10));
                        arr_40 [(signed char)3] [i_2] [i_2] [i_10 + 1] [i_2] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) 33554431U)) ? (483845408512668527LL) : (((/* implicit */long long int) ((/* implicit */int) var_18)))));
                        var_34 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_31 [i_0 - 1] [10U] [i_12] [i_12]))));
                        var_35 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */int) arr_25 [i_0 + 2] [i_0 + 2] [i_10 + 1] [i_10 + 1] [i_12])) : (((/* implicit */int) var_18))));
                    }
                    for (unsigned short i_13 = 3; i_13 < 23; i_13 += 1) 
                    {
                        var_36 = ((unsigned short) (unsigned char)137);
                        var_37 = ((/* implicit */unsigned char) arr_22 [i_0 - 1] [i_1] [(signed char)10] [(short)11]);
                    }
                    arr_43 [i_0] [i_1] [i_2 + 4] [i_2 + 4] = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_8 [i_0 - 1] [i_1] [i_1] [i_1 + 1])) / (arr_10 [i_0] [i_0] [i_0] [i_1 - 2])));
                    var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) (~(((/* implicit */int) arr_16 [i_0 - 2] [i_1 - 1] [i_2 + 3] [i_10 - 1])))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 0; i_14 < 24; i_14 += 4) 
                    {
                        arr_46 [i_10] [i_10] [(unsigned char)8] [i_10] [(unsigned char)9] [(signed char)0] = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)64))));
                        var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((((/* implicit */_Bool) arr_15 [i_14] [i_14] [(signed char)5])) ? (arr_39 [(short)23] [i_1 - 1] [i_2] [i_10 + 1] [i_14] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_18))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_2] [i_2 + 4] [i_2 + 1] [i_2 + 1] [i_2 + 3]))))))));
                        var_40 = ((/* implicit */signed char) arr_36 [i_1] [i_1] [i_1] [i_1] [i_0]);
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_41 = ((/* implicit */signed char) arr_36 [i_0] [(signed char)3] [i_15] [i_10 - 1] [i_15]);
                        var_42 *= ((/* implicit */unsigned char) arr_21 [i_0 - 1] [i_1 - 2] [i_1] [i_1 + 1] [i_2 - 1] [i_10 + 1]);
                        arr_50 [i_0] [i_1] [(short)23] [i_10] [(short)23] = (unsigned char)65;
                        var_43 = ((/* implicit */signed char) ((arr_36 [i_10] [i_10] [i_10] [i_10 - 1] [i_10]) | (arr_36 [i_10] [i_10] [i_10] [i_10 - 1] [i_10 + 1])));
                    }
                }
                arr_51 [i_2] [i_1] [i_0 - 2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_17))));
                /* LoopSeq 1 */
                for (unsigned int i_16 = 0; i_16 < 24; i_16 += 1) 
                {
                    var_44 = ((/* implicit */short) arr_3 [i_0] [i_0 - 1]);
                    var_45 = ((/* implicit */signed char) max((var_45), (((signed char) arr_12 [i_0] [i_0 - 1] [i_1] [i_0 - 1] [i_0] [i_0 + 1]))));
                    arr_56 [i_0] [2LL] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_29 [i_0 - 1] [i_1] [i_0 - 1] [i_16] [i_0 - 1])) * (((/* implicit */int) arr_29 [i_0 - 2] [i_1] [(unsigned short)12] [i_16] [(unsigned short)7]))));
                }
            }
            for (signed char i_17 = 0; i_17 < 24; i_17 += 1) 
            {
                arr_59 [i_17] [i_1 - 1] [i_0] = ((unsigned int) arr_33 [7U] [i_17] [i_17] [i_17] [i_1 + 1] [i_0]);
                arr_60 [i_0] [(unsigned short)2] [i_17] = ((/* implicit */signed char) arr_1 [i_0 - 2]);
                arr_61 [(short)18] [i_1] [i_0] = ((/* implicit */unsigned short) (unsigned char)199);
            }
            for (signed char i_18 = 0; i_18 < 24; i_18 += 1) 
            {
                var_46 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_7)) == (((/* implicit */int) (unsigned char)73)))) ? (((/* implicit */int) ((((/* implicit */int) arr_38 [(signed char)7] [i_1] [i_18] [(signed char)7] [(signed char)7] [i_18] [i_1 - 1])) < (((/* implicit */int) (unsigned short)65535))))) : ((~(((/* implicit */int) var_2))))));
                var_47 = ((/* implicit */unsigned char) arr_18 [i_0] [i_1]);
            }
        }
        arr_64 [i_0 + 1] [(short)10] = ((/* implicit */_Bool) ((((/* implicit */int) var_17)) - (((((((/* implicit */int) (short)-5722)) + (2147483647))) << (((((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) - (19367)))))));
        var_48 = ((/* implicit */unsigned int) (signed char)120);
        arr_65 [i_0] [(signed char)13] = ((/* implicit */short) ((((/* implicit */int) arr_38 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0])) > (((/* implicit */int) arr_38 [i_0 - 1] [i_0] [i_0] [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0 + 2]))));
    }
    /* vectorizable */
    for (signed char i_19 = 1; i_19 < 22; i_19 += 4) 
    {
        arr_68 [i_19 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [i_19] [(short)21] [i_19 + 1] [i_19 - 1] [i_19])) % ((-(((/* implicit */int) arr_33 [(signed char)21] [(short)4] [(signed char)21] [i_19] [i_19] [i_19]))))));
        /* LoopSeq 1 */
        for (unsigned char i_20 = 0; i_20 < 23; i_20 += 1) 
        {
            arr_71 [i_19] [i_19] = ((/* implicit */long long int) var_4);
            /* LoopSeq 1 */
            for (unsigned int i_21 = 0; i_21 < 23; i_21 += 2) 
            {
                arr_75 [i_19] [i_19] [i_21] [2LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)214)) || (((/* implicit */_Bool) arr_26 [i_19 - 1] [(signed char)4]))));
                /* LoopSeq 1 */
                for (short i_22 = 0; i_22 < 23; i_22 += 4) 
                {
                    arr_80 [i_21] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_54 [(short)1] [(signed char)23] [i_21] [i_21]))))));
                    var_49 = ((/* implicit */unsigned char) min((var_49), (((/* implicit */unsigned char) (signed char)0))));
                }
            }
        }
        arr_81 [i_19] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_26 [i_19] [i_19 + 1])) & (((/* implicit */int) arr_26 [i_19] [i_19 + 1]))));
    }
    var_50 = ((/* implicit */unsigned int) var_5);
}
