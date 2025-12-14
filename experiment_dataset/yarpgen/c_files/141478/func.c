/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141478
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    var_11 = ((/* implicit */long long int) (unsigned char)190);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        var_12 = (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) < (((/* implicit */int) (unsigned char)255))))));
                        arr_11 [i_3] [i_2] [i_3] = ((/* implicit */int) (~(min((arr_9 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 + 1]), (((/* implicit */unsigned long long int) (unsigned char)126))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 4) 
                    {
                        arr_14 [i_0] [i_1] [i_2] [14] = ((/* implicit */signed char) max((arr_1 [i_0]), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (-8378074739201740033LL)))) > (((/* implicit */int) (_Bool)0)))))));
                        arr_15 [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_3)), (max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_3)), (arr_13 [i_0] [i_1] [i_2] [i_4])))), (max((arr_9 [i_0] [i_1] [i_2] [i_4 - 1]), (((/* implicit */unsigned long long int) var_4))))))));
                    }
                    for (unsigned char i_5 = 1; i_5 < 13; i_5 += 1) 
                    {
                        arr_18 [i_5] [i_5] [i_5] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)63))));
                        arr_19 [i_5] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */int) (-(((((/* implicit */long long int) ((/* implicit */int) (signed char)-71))) / (8378074739201740033LL)))));
                        arr_20 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [(unsigned char)15] [i_5])) && (((/* implicit */_Bool) arr_3 [i_0])))))) : (((((/* implicit */_Bool) -5569649393538437454LL)) ? (8378074739201740033LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2])))))))) >= (((((/* implicit */unsigned long long int) var_5)) - (max((((/* implicit */unsigned long long int) arr_1 [i_2])), (arr_9 [i_0] [i_1] [i_2] [i_5])))))));
                    }
                    arr_21 [i_0] [(unsigned char)4] = ((/* implicit */int) var_7);
                }
                /* LoopSeq 1 */
                for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    var_13 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_0] [i_1] [i_6])) ^ (arr_5 [i_0] [6LL] [i_0])))) ? (((/* implicit */int) (unsigned short)36829)) : (arr_5 [i_6] [i_1] [i_0]))), (((/* implicit */int) ((((/* implicit */_Bool) 602857800)) || (((/* implicit */_Bool) ((((/* implicit */int) var_9)) % ((-2147483647 - 1))))))))));
                    var_14 &= ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0]))) & (var_4))), (min((-5781476527202905239LL), (arr_6 [i_0] [i_1])))));
                    var_15 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_4 [i_0] [i_1])))) / (((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_1]))))));
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        for (unsigned char i_8 = 3; i_8 < 15; i_8 += 2) 
                        {
                            {
                                arr_29 [i_8 - 1] [i_8] [i_7] [i_6] [i_8] [(unsigned short)6] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_22 [i_8 - 1] [i_8 - 1])), (((((/* implicit */_Bool) arr_6 [i_1] [i_6])) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)53921)), (arr_23 [i_8 - 3])))) : (11744040843094769341ULL)))));
                                arr_30 [i_0] [i_1] [i_6] [i_8] [i_8 - 2] = ((/* implicit */unsigned long long int) (-(arr_6 [i_6] [i_6])));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_0] [i_1]))))) || (((/* implicit */_Bool) min((var_3), (var_9))))))), ((((-(arr_28 [2LL] [i_1] [i_6] [i_1] [i_0] [i_1]))) << (((arr_24 [i_0] [i_1] [i_1] [8ULL]) - (7477860758361611318ULL))))))))));
                }
                arr_31 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) var_8);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((1152921504606846975LL), (var_2)))) ? (min((arr_33 [i_9]), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_34 [i_9])))))))) ? (max((((((/* implicit */long long int) 445945091)) | (7194887893218062182LL))), ((+(arr_32 [i_9]))))) : (((((/* implicit */_Bool) min((arr_33 [i_9]), (34359737344LL)))) ? (((arr_33 [i_9 - 1]) >> (((/* implicit */int) (unsigned short)63)))) : ((+((-9223372036854775807LL - 1LL))))))));
        var_18 = ((/* implicit */_Bool) (signed char)-13);
        var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)86))) / (max((((((/* implicit */_Bool) arr_32 [i_9])) ? (arr_32 [i_9]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), ((-(-220620184459940321LL)))))));
        var_20 = ((((/* implicit */int) (unsigned char)105)) % (((/* implicit */int) (!(((/* implicit */_Bool) 0LL))))));
    }
    var_21 = var_1;
}
