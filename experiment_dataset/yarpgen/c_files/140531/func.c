/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140531
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_8 [i_1] [i_3 - 3] [i_4] [i_3 - 3]), (((/* implicit */unsigned short) (short)11445))))) ? (((/* implicit */int) ((((/* implicit */int) arr_8 [i_1] [i_3 - 2] [i_3 - 2] [i_4 - 1])) == (((/* implicit */int) (signed char)-89))))) : (((((/* implicit */_Bool) 7438373222328407459LL)) ? (((/* implicit */int) arr_8 [i_1] [i_3 + 1] [(_Bool)1] [i_4])) : (((/* implicit */int) arr_3 [i_1] [6LL]))))));
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) (signed char)88)) | (((/* implicit */int) arr_10 [i_4 - 1] [i_4] [i_4 + 2] [i_4 + 1] [i_4 + 1] [i_4]))))), (7438373222328407459LL))))));
                                var_18 = ((/* implicit */signed char) (_Bool)0);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [(signed char)4] [i_1 + 2] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)74)), (7438373222328407459LL)))) && (((/* implicit */_Bool) arr_8 [i_1] [i_1 - 2] [i_2] [i_2 - 3]))))) : (((/* implicit */int) arr_5 [(_Bool)1] [i_1] [i_2] [i_2 + 3]))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)25929)) * (((/* implicit */int) var_8))));
    /* LoopSeq 1 */
    for (short i_5 = 2; i_5 < 16; i_5 += 2) 
    {
        arr_15 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-88)) <= (((/* implicit */int) (_Bool)1))));
        arr_16 [i_5] = ((/* implicit */_Bool) (unsigned short)65535);
        var_21 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_14 [i_5 - 1] [i_5 + 1]) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((arr_14 [9U] [i_5]) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [4U] [i_5]))) > (arr_14 [i_5] [i_5]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    }
    /* LoopSeq 2 */
    for (long long int i_6 = 4; i_6 < 24; i_6 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) arr_18 [i_6 - 1] [i_6]))));
        var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)37737)) ? (((/* implicit */int) (signed char)-81)) : (((/* implicit */int) (unsigned char)111))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1832))) : (7438373222328407459LL)))) ? (((((/* implicit */_Bool) 437271282U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37737))) : (417493749U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6] [i_6 - 2]))))) : (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_17 [i_6] [i_6 - 2])))))));
        arr_19 [i_6] = ((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_6 - 2] [7])) * (((/* implicit */int) max((arr_17 [i_6 - 2] [i_6 - 1]), (arr_17 [i_6 - 2] [(signed char)11]))))));
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (unsigned char)218)), (arr_18 [i_6] [i_6 - 1]))))));
    }
    /* vectorizable */
    for (unsigned char i_7 = 2; i_7 < 21; i_7 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_8 = 1; i_8 < 22; i_8 += 1) 
        {
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                {
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_8 - 1])) * (((/* implicit */int) arr_20 [i_7 + 1]))));
                    /* LoopSeq 4 */
                    for (signed char i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        arr_31 [14U] [(short)3] [14U] [i_7] [i_9 - 1] [i_10] = ((/* implicit */unsigned char) arr_23 [i_7] [i_7] [i_7]);
                        arr_32 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) (unsigned char)111);
                    }
                    for (int i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        arr_35 [(unsigned char)19] [i_8] [i_8 - 1] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-81)) + (((/* implicit */int) (short)-27026))))) ? (((((/* implicit */_Bool) (unsigned char)208)) ? (3413629490U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)37))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_7 - 1] [i_8 + 1]))));
                        var_26 = ((/* implicit */_Bool) ((3413629490U) % (((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [15LL])) - (((/* implicit */int) (unsigned short)25071)))))));
                        var_27 = ((/* implicit */int) (unsigned char)219);
                    }
                    for (unsigned char i_12 = 0; i_12 < 23; i_12 += 3) 
                    {
                        var_28 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_12])) < (((/* implicit */int) (short)27026))));
                        arr_39 [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_7 - 2])) ? (((((/* implicit */_Bool) arr_24 [i_7 + 1])) ? (((/* implicit */int) arr_37 [i_7] [i_8 + 1] [i_8] [i_9] [i_12])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_21 [i_7]))));
                        var_29 -= ((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_25 [6] [i_9] [i_9 - 1])) * (881337782U)));
                        arr_40 [i_7] [i_7] [i_7] [i_7] [i_7 - 2] [i_7] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 3413629518U)) ? (((/* implicit */int) arr_27 [i_7] [i_7] [(unsigned short)1] [i_12])) : (((/* implicit */int) arr_26 [i_7])))) < (((/* implicit */int) arr_27 [i_8 + 1] [i_7] [i_8 + 1] [i_7 - 1]))));
                    }
                    for (short i_13 = 0; i_13 < 23; i_13 += 1) 
                    {
                        arr_45 [i_7 + 2] [(unsigned short)4] [(unsigned short)4] [i_7 + 2] [i_7] [i_13] = ((/* implicit */short) ((arr_43 [i_13] [i_13] [i_9 - 1] [i_7 + 1]) == (arr_41 [i_8 + 1] [i_7 + 1])));
                        /* LoopSeq 2 */
                        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                        {
                            arr_48 [i_7] [i_8] [i_7] [i_13] [i_14] = ((/* implicit */long long int) arr_44 [i_7] [i_8] [i_9 - 1] [(_Bool)1] [i_13] [i_14]);
                            var_30 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [(unsigned char)8])) ? (348033453U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [(_Bool)1])))));
                            var_31 -= ((/* implicit */_Bool) (unsigned char)41);
                        }
                        for (unsigned char i_15 = 0; i_15 < 23; i_15 += 2) 
                        {
                            arr_52 [i_7] [i_7] [(_Bool)1] [i_13] [(signed char)6] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_7 - 2] [i_7] [i_9 - 1] [i_9 - 1])) ? (((/* implicit */int) arr_42 [i_7 + 2] [i_8 + 1] [i_8 + 1] [i_9 - 1] [i_9 - 1])) : (((/* implicit */int) arr_29 [i_7 + 2] [i_7] [(signed char)14] [i_9 - 1]))));
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1431184570)) ? (((/* implicit */int) arr_20 [i_7])) : (((/* implicit */int) (unsigned short)65535))));
                        }
                        arr_53 [(short)9] [i_8] [i_7] [i_7 - 1] [i_8] [i_13] = ((/* implicit */short) (_Bool)0);
                    }
                }
            } 
        } 
        var_33 = ((/* implicit */int) ((((/* implicit */int) (short)-27026)) != (((/* implicit */int) arr_44 [i_7] [i_7] [i_7 + 1] [i_7 - 1] [i_7] [i_7 - 1]))));
    }
    var_34 *= ((/* implicit */unsigned char) var_8);
}
