/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145680
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_10)))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)56564)) | (((/* implicit */int) (unsigned short)8972))));
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        arr_2 [(_Bool)1] = ((/* implicit */unsigned short) var_15);
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 4; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [i_1] [(signed char)14] = ((/* implicit */_Bool) min(((+(arr_6 [i_0 + 1] [i_2 - 4]))), (((/* implicit */int) arr_1 [i_0 + 1]))));
                                arr_12 [(_Bool)1] [(unsigned char)13] [(_Bool)1] [i_3] [i_3] [11] [6ULL] = ((/* implicit */short) arr_0 [3ULL] [3ULL]);
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)8966)))) || (((/* implicit */_Bool) arr_4 [i_0] [i_0 - 2]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 1; i_5 < 16; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */signed char) arr_3 [i_0] [4LL] [i_2]);
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)8972)) / (((arr_6 [i_1] [i_5]) / (((((/* implicit */_Bool) var_3)) ? (arr_0 [i_1] [1U]) : (((/* implicit */int) var_12))))))));
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_5 - 1] [13] [i_0 + 1] [i_2 - 3])) || (((/* implicit */_Bool) var_3)))))));
                        var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_15), (((/* implicit */int) (unsigned short)8970)))))))), (((unsigned int) ((((/* implicit */_Bool) arr_8 [(short)6] [10] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) arr_8 [11LL] [11LL] [(short)18] [11LL])) : (arr_15 [i_0] [(unsigned short)8] [(unsigned short)8] [6ULL]))))));
                    }
                    arr_16 [i_0] [i_0] [i_2] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */unsigned long long int) arr_3 [i_0] [13U] [i_2]))))));
                }
            } 
        } 
    }
    for (short i_6 = 1; i_6 < 23; i_6 += 4) 
    {
        arr_21 [i_6] = (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)8958)) && (((/* implicit */_Bool) 0ULL))))));
        arr_22 [i_6] = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) (unsigned short)56555)), (var_11))), (((/* implicit */unsigned long long int) var_14))));
        var_22 += ((/* implicit */signed char) arr_20 [2]);
        var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8963))) + (-6536381461451302011LL)))) >= (min((406160640413936094ULL), (arr_20 [(signed char)11])))))), (min((-2034499400), (((/* implicit */int) arr_18 [i_6]))))));
        var_24 += ((((/* implicit */int) ((((10707418997266754791ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8972))))) == (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_18 [0ULL])) + (2147483647))) >> (((var_9) + (3330417396611254162LL))))))))) | (((((/* implicit */int) arr_18 [2ULL])) ^ (((/* implicit */int) ((_Bool) -1))))));
    }
    /* vectorizable */
    for (short i_7 = 3; i_7 < 16; i_7 += 4) 
    {
        var_25 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [4ULL])) | (((/* implicit */int) (unsigned short)56564))));
        var_26 = ((/* implicit */int) max((var_26), (((((((/* implicit */_Bool) -854994052)) ? (((/* implicit */int) arr_7 [(signed char)4] [5LL] [i_7] [i_7])) : (((/* implicit */int) var_4)))) - (((/* implicit */int) ((_Bool) var_2)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 18; i_9 += 4) 
            {
                for (unsigned long long int i_10 = 1; i_10 < 14; i_10 += 3) 
                {
                    {
                        arr_33 [14ULL] [(_Bool)1] [(_Bool)1] = arr_6 [i_7] [i_7];
                        /* LoopSeq 2 */
                        for (unsigned short i_11 = 0; i_11 < 18; i_11 += 4) 
                        {
                            arr_36 [12ULL] [i_8] [(short)6] [13ULL] [1ULL] = (+(arr_34 [i_10 + 3] [i_10] [0LL] [i_10 + 4] [i_10 + 3]));
                            arr_37 [(_Bool)1] [i_8] [1ULL] [15] [i_11] [i_11] = ((/* implicit */unsigned short) arr_10 [i_7] [i_7] [i_8] [i_9] [i_7] [i_10] [i_11]);
                            arr_38 [(signed char)0] [i_9] [i_10] [8U] = ((/* implicit */int) ((signed char) ((unsigned long long int) var_6)));
                            var_27 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_7 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [15U] [(short)1] [i_8] [(short)5])) >> (((arr_34 [i_7] [i_8] [(signed char)3] [i_10] [(_Bool)1]) - (15702503573683900979ULL)))))) : (arr_29 [(signed char)10] [i_8] [i_9] [i_8])));
                        }
                        for (unsigned char i_12 = 4; i_12 < 17; i_12 += 3) 
                        {
                            arr_42 [i_12] [1U] [1U] [i_8] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_7 - 3] [i_7 - 3])) ? (((/* implicit */unsigned long long int) var_10)) : (arr_28 [i_7 - 2] [i_7 - 3])));
                            arr_43 [i_7] [i_7] [i_8] [i_9] [i_10] [(unsigned short)6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [9ULL] [(signed char)1] [13ULL] [10])) ? (406160640413936094ULL) : (((/* implicit */unsigned long long int) var_6))))) ? (arr_5 [i_12]) : (((/* implicit */unsigned long long int) ((long long int) 406160640413936073ULL)))));
                            var_28 ^= ((/* implicit */short) var_8);
                            var_29 = ((/* implicit */long long int) (~(arr_34 [i_10] [(_Bool)1] [(_Bool)1] [i_10] [i_10 + 4])));
                        }
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((int) arr_27 [i_7 - 2] [i_7 + 2] [i_10 + 2])))));
                        var_31 = ((/* implicit */short) arr_40 [i_7] [i_7] [i_7 - 3] [0]);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_13 = 0; i_13 < 18; i_13 += 4) 
            {
                for (int i_14 = 1; i_14 < 17; i_14 += 4) 
                {
                    for (long long int i_15 = 0; i_15 < 18; i_15 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned long long int) ((unsigned short) arr_34 [(short)3] [i_8] [i_13] [2] [i_15]));
                            var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) arr_47 [i_7 - 3] [i_7 - 3] [i_14 + 1]))));
                            var_34 *= ((/* implicit */unsigned char) arr_5 [i_13]);
                            var_35 = ((/* implicit */unsigned long long int) ((arr_3 [i_7 - 2] [i_7 + 2] [i_14 + 1]) ^ (3841746820U)));
                        }
                    } 
                } 
            } 
            arr_52 [i_7] [(short)12] = ((/* implicit */short) arr_50 [0] [i_7 - 3] [i_7 - 2] [0] [0]);
            arr_53 [1U] = ((/* implicit */int) (+(arr_9 [12LL] [12LL] [9U] [i_7 + 2] [9U])));
        }
        for (unsigned short i_16 = 1; i_16 < 17; i_16 += 4) 
        {
            var_36 += ((var_14) + (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_7 - 2]))));
            var_37 += ((((/* implicit */_Bool) arr_54 [i_16 - 1] [i_7 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_7] [i_7] [i_7 - 1] [(unsigned char)12] [i_7 - 1] [i_16 + 1] [i_16 + 1]))) : (arr_54 [i_16 + 1] [i_7 - 2]));
        }
    }
}
