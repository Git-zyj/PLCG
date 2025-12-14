/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155294
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
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        var_16 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (var_11)))) ? (((/* implicit */int) min((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1])))) : (((((/* implicit */int) var_6)) / (var_2)))));
        var_17 = ((/* implicit */short) (~(max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [i_0] [i_0 - 1]))))))));
        arr_3 [i_0] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1])))) | (((((/* implicit */_Bool) var_15)) ? (var_9) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1]))))));
    }
    /* LoopSeq 2 */
    for (int i_1 = 2; i_1 < 13; i_1 += 4) 
    {
        arr_7 [i_1 + 3] [4] = ((((var_1) > (((/* implicit */unsigned long long int) arr_6 [i_1 - 1] [i_1 + 4])))) ? (((((/* implicit */_Bool) ((var_0) >> (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [i_1 + 3] [19])))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (-(arr_0 [i_1]))))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) (((+(((/* implicit */int) arr_1 [i_5])))) > (((/* implicit */int) arr_1 [i_5]))));
                                arr_19 [i_1 + 3] [i_1 + 3] [i_4] [(signed char)9] [i_5] = ((/* implicit */short) ((arr_10 [(_Bool)1] [(_Bool)1] [i_4]) > (((/* implicit */int) arr_4 [i_1]))));
                                arr_20 [i_4] = ((/* implicit */signed char) arr_5 [i_1 + 4]);
                            }
                        } 
                    } 
                    var_19 |= ((/* implicit */signed char) (-(((/* implicit */int) (signed char)94))));
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 1; i_7 < 16; i_7 += 4) 
                        {
                            var_20 = ((/* implicit */int) var_8);
                            var_21 = ((/* implicit */unsigned char) max((var_21), (arr_12 [i_1 + 3] [i_2] [i_3] [i_7 - 1])));
                            var_22 = ((((((/* implicit */_Bool) arr_18 [4U] [i_2] [(_Bool)1] [(_Bool)1] [i_1 + 2] [i_2])) ? (arr_18 [i_1] [10] [i_7] [(_Bool)1] [i_1 + 3] [(_Bool)1]) : (arr_18 [(signed char)6] [i_2] [i_3] [i_6] [i_1 - 2] [i_2]))) | (((/* implicit */int) ((arr_18 [i_1] [i_1] [i_2] [i_6] [i_1 + 4] [4]) >= (arr_18 [i_1 + 3] [i_1] [i_2] [i_6] [i_1 + 1] [i_6])))));
                        }
                        var_23 |= ((/* implicit */short) ((((/* implicit */_Bool) max((var_9), (((var_9) << (((var_7) - (539254808U)))))))) ? (min((-1LL), (0LL))) : (((/* implicit */long long int) var_5))));
                        arr_26 [i_1] = ((/* implicit */unsigned char) min((((arr_22 [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1]) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 + 2]))))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)198)))))));
                        var_24 = ((/* implicit */unsigned short) arr_25 [(signed char)14] [10ULL] [i_6] [i_6] [i_6] [i_6] [i_6]);
                        var_25 = ((/* implicit */long long int) ((((/* implicit */int) var_10)) | ((-(((/* implicit */int) arr_12 [i_1] [i_1 + 2] [i_1] [i_1]))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_31 [i_8] [(short)12] [i_2] [i_3] [i_8] = ((/* implicit */int) arr_14 [i_1] [i_2] [i_3] [i_8] [i_8] [i_3]);
                        /* LoopSeq 2 */
                        for (signed char i_9 = 0; i_9 < 17; i_9 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned short) min((var_26), (var_10)));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-87))) ^ (2660106512U)))) ? (((/* implicit */unsigned long long int) ((((arr_9 [i_1 + 4]) + (2147483647))) >> (((var_1) - (15245933318762047076ULL)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_12)) : (arr_14 [i_1 + 4] [4U] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1])))) ? (var_14) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (var_8))))))));
                        }
                        for (signed char i_10 = 0; i_10 < 17; i_10 += 3) 
                        {
                            var_28 = var_9;
                            var_29 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_22 [i_1] [i_1] [i_1 - 2] [i_1 + 4])) : (((/* implicit */int) var_4)))) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_1 + 3] [7LL] [i_1 - 2] [i_1 + 4]))) > (arr_36 [i_1] [i_1 - 2] [i_1] [i_1 + 2] [i_10]))))));
                            var_30 *= ((/* implicit */short) ((arr_6 [i_1 + 4] [i_1 + 3]) << (((((((/* implicit */_Bool) (-(arr_34 [i_2] [(_Bool)1] [i_1] [(unsigned char)6] [i_10])))) ? (arr_23 [i_10] [i_10] [3] [i_3] [i_2] [(unsigned short)9] [i_1 + 3]) : (((/* implicit */long long int) ((var_4) ? (((/* implicit */int) arr_13 [i_1] [i_2] [i_3] [i_8] [i_8] [i_10])) : (arr_9 [i_1])))))) + (4782834459522988389LL)))));
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1 + 4] [i_1 - 1]))) - (var_1)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_1 + 4] [i_1 - 1])) ? (var_2) : (((/* implicit */int) arr_17 [i_1 + 4] [i_1 - 1])))))));
                        }
                        var_32 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (arr_9 [i_1 - 1]) : (arr_11 [i_1 - 1] [(short)1] [i_3]))) / (((((/* implicit */_Bool) arr_9 [i_1 - 1])) ? (var_13) : (((/* implicit */int) arr_1 [i_1 - 2]))))));
                    }
                }
            } 
        } 
        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (-839787906))))));
    }
    for (short i_11 = 3; i_11 < 12; i_11 += 2) 
    {
        var_34 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_11])) ? (((/* implicit */unsigned long long int) var_7)) : (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)65535), ((unsigned short)14772))))) : (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_11] [i_11 - 3] [i_11] [i_11] [i_11] [i_11] [i_11]))) : (((((/* implicit */_Bool) (unsigned short)14756)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21795))) : (3813395106U)))));
        arr_40 [(short)12] = ((/* implicit */_Bool) (~(var_13)));
    }
    var_35 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_10)) ? (var_14) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (var_13)))))) : (((/* implicit */unsigned long long int) max((2660106512U), (((/* implicit */unsigned int) -20)))))));
    var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) var_13))));
}
