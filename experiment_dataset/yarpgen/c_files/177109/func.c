/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177109
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_12 &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)18821)) == (((/* implicit */int) (unsigned short)0)))))) / (((unsigned long long int) arr_0 [i_0]))))));
        arr_4 [(signed char)23] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)3)) == (((/* implicit */int) arr_0 [i_0]))))) << (((((unsigned int) arr_1 [i_0])) - (2646393276U)))));
        arr_5 [i_0] = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (arr_1 [i_0]))))) > (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (var_2))));
        var_13 = ((/* implicit */long long int) ((arr_1 [i_0]) & (((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)2)), ((unsigned short)17872)))) - (((/* implicit */int) var_7))))));
    }
    var_14 = ((/* implicit */long long int) min((var_14), (min((((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))) - (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_9))))))), ((~(var_2)))))));
    var_15 -= var_4;
    var_16 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((18446744073709551615ULL) == (12470963125657481414ULL))))));
    /* LoopSeq 3 */
    for (signed char i_1 = 3; i_1 < 14; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 3; i_2 < 13; i_2 += 1) 
        {
            for (unsigned int i_3 = 4; i_3 < 13; i_3 += 3) 
            {
                {
                    var_17 -= ((/* implicit */unsigned long long int) (~(((((((/* implicit */int) (unsigned short)2)) - (((/* implicit */int) arr_6 [(short)4])))) * (((/* implicit */int) var_7))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        var_18 = ((/* implicit */_Bool) arr_3 [i_1 - 2] [i_2 - 2]);
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 1; i_5 < 13; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)23))) == (2ULL)));
                            arr_19 [i_3] [i_3] [i_3] [(_Bool)1] = ((/* implicit */signed char) ((arr_16 [i_1 - 1] [i_2 + 2]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46715)))));
                            arr_20 [i_1] [i_1] [i_3 + 1] [i_3] [i_5 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_1 - 2] [(unsigned short)2] [i_3] [i_1 - 2] [i_2 + 1])) && (((/* implicit */_Bool) var_5))));
                            arr_21 [i_4] [4ULL] [4ULL] [4ULL] [i_1] &= ((((/* implicit */int) var_7)) << (((((524322135472093498LL) - (((/* implicit */long long int) ((/* implicit */int) var_11))))) - (524322135472091811LL))));
                            var_20 -= ((/* implicit */unsigned int) arr_8 [i_1]);
                        }
                        for (short i_6 = 1; i_6 < 13; i_6 += 1) 
                        {
                            var_21 -= ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)103))))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)35462)) - (((/* implicit */int) var_5))))));
                            var_22 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-88)) > (((/* implicit */int) arr_3 [i_1] [i_1]))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (-(((/* implicit */int) arr_10 [(short)8] [i_2] [i_1])))))));
                            var_24 -= ((/* implicit */unsigned long long int) arr_17 [i_1] [i_2 + 2] [8LL] [i_4] [(_Bool)1]);
                        }
                        var_25 = (i_3 % 2 == 0) ? (((/* implicit */unsigned short) (((((~(((/* implicit */int) (unsigned short)65532)))) + (2147483647))) << (((((((/* implicit */int) arr_18 [i_1 - 1] [i_3])) + (22067))) - (2)))))) : (((/* implicit */unsigned short) (((((~(((/* implicit */int) (unsigned short)65532)))) + (2147483647))) << (((((((((/* implicit */int) arr_18 [i_1 - 1] [i_3])) + (22067))) - (2))) + (481))))));
                        var_26 -= ((/* implicit */unsigned int) ((arr_22 [i_1] [i_1 - 1] [i_2] [i_2 + 1] [i_3 - 1] [i_1 - 1]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_3 - 4] [i_1 - 1] [10])))));
                    }
                    arr_26 [10] [i_3] [i_3] [(unsigned short)2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_3] [i_1] [(unsigned char)12]))));
                }
            } 
        } 
        var_27 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-((-(var_2)))))) >= ((~(max((12470963125657481414ULL), (arr_8 [i_1 - 1])))))));
    }
    for (short i_8 = 0; i_8 < 20; i_8 += 1) 
    {
        var_28 -= ((/* implicit */unsigned char) 18446744073709551588ULL);
        arr_31 [i_8] = ((/* implicit */unsigned long long int) ((long long int) arr_0 [i_8]));
        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (((-(3766707161U))) > (((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_27 [(short)18]))))))))))));
    }
    for (signed char i_9 = 0; i_9 < 18; i_9 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_10 = 0; i_10 < 18; i_10 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_11 = 2; i_11 < 17; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 18; i_12 += 2) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */signed char) (((~(((/* implicit */int) arr_40 [i_13] [i_13] [i_11 - 2] [i_9])))) * ((-(((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) arr_44 [i_9] [i_9] [i_10] [i_10] [2U] [i_9] [2U])))))))));
                            arr_46 [i_9] = ((/* implicit */short) ((4294967270U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6564)))));
                            arr_47 [6ULL] [i_12] [i_12] [i_11] [(_Bool)0] [i_12] [i_13] &= ((/* implicit */unsigned long long int) ((((_Bool) var_0)) && (((((/* implicit */_Bool) arr_42 [i_9] [i_12])) && (((/* implicit */_Bool) (short)-14644))))));
                            var_31 = ((/* implicit */signed char) arr_34 [i_9] [(_Bool)1]);
                        }
                    } 
                } 
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)16553))) >= (((((unsigned long long int) var_7)) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_9]))))))));
            }
            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) arr_43 [i_9] [i_9] [i_9] [(unsigned short)8] [i_9]))));
            arr_48 [(unsigned char)14] [i_10] &= ((/* implicit */long long int) ((((((/* implicit */int) arr_42 [(unsigned short)2] [(unsigned short)2])) + (((/* implicit */int) arr_42 [i_9] [12ULL])))) <= (((((/* implicit */_Bool) arr_42 [i_10] [12ULL])) ? (((/* implicit */int) arr_42 [i_9] [2U])) : (((/* implicit */int) arr_42 [(short)16] [(short)16]))))));
        }
        arr_49 [i_9] [i_9] = ((/* implicit */unsigned long long int) arr_30 [i_9] [i_9]);
    }
}
