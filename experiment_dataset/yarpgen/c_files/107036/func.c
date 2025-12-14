/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107036
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
    var_18 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) | (17801016683651598402ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 10)) == (558551906910208LL))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        var_19 = (~(var_5));
        var_20 -= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 3471142474U)) != ((~(0ULL)))))) << (((((min((((/* implicit */unsigned int) (unsigned char)63)), (var_10))) - (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0 + 1]))))))) - (36U)))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_21 -= ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) | (-558551906910209LL)))) ? (((-558551906910209LL) & (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_2 [i_1])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_2 [i_1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_1])) | (((/* implicit */int) var_2))))) : (var_6))))));
        arr_4 [i_1] = ((/* implicit */short) arr_3 [i_1] [3]);
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        arr_15 [16U] [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_7 [i_1])))) ? ((~(3229569188U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4] [i_3] [i_2])))))) ? (arr_3 [i_1] [i_4]) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_11 [i_1] [i_2] [(signed char)10] [i_2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_10 [i_1] [i_3] [i_4]))))))));
                        var_22 -= ((/* implicit */unsigned short) ((unsigned int) (unsigned short)32768));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_1] [i_3] [i_4])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))) : (arr_5 [(_Bool)1] [18U] [(_Bool)1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_3] [i_3] [i_2] [i_3])) ? (1090209823) : (((/* implicit */int) arr_10 [4] [i_3] [i_3])))))))) : (((((/* implicit */unsigned long long int) arr_9 [i_1] [i_3])) * (max((17293822569102704640ULL), (((/* implicit */unsigned long long int) arr_11 [i_3] [i_2] [i_4] [i_4]))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 2; i_5 < 23; i_5 += 4) 
                    {
                        var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) <= (arr_5 [i_2] [i_3] [i_5]))))) : ((-(arr_9 [i_2] [i_5])))));
                        /* LoopSeq 2 */
                        for (long long int i_6 = 2; i_6 < 20; i_6 += 4) 
                        {
                            arr_20 [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 3229569177U)) ? (var_0) : (((/* implicit */unsigned int) 0)))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_2] [i_2] [i_3])))));
                            arr_21 [i_3] [(unsigned char)2] [i_3] [i_5] [i_6] = ((/* implicit */unsigned int) arr_6 [i_5 - 1] [i_2]);
                        }
                        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            var_25 -= ((/* implicit */unsigned char) ((short) 1533926582U));
                            arr_24 [i_7] [i_5] [i_3] [i_3] [i_2] [i_1] = ((/* implicit */_Bool) ((arr_9 [i_1] [i_3]) / (((((/* implicit */_Bool) 0)) ? (4165938998U) : (arr_9 [i_2] [i_3])))));
                            arr_25 [i_1] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [(short)1] [(short)1] [i_5] [i_3] [i_2] [i_1])) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121))) * (1533926573U))))));
                        }
                        arr_26 [11] [i_3] [3ULL] [i_5 + 1] = ((/* implicit */long long int) var_0);
                        arr_27 [i_3] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */int) ((((/* implicit */int) arr_12 [0ULL] [i_2] [i_3] [i_3])) != (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_1] [i_3] [i_3])) || (((/* implicit */_Bool) arr_13 [18LL] [i_3] [i_1])))))));
                    }
                    for (int i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        var_26 -= max((max((((/* implicit */int) (signed char)120)), (((((/* implicit */_Bool) 4165939016U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_6 [i_1] [i_1])))))), (((/* implicit */int) (((+(arr_3 [i_2] [i_3]))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -558551906910213LL)) ? (8554014561600905282LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1] [i_2] [1U] [i_3] [(_Bool)1] [i_8]))))))))));
                        var_27 -= ((/* implicit */unsigned long long int) ((129028254U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_8])))));
                    }
                    var_28 -= ((((/* implicit */_Bool) min((arr_28 [i_1] [i_1] [i_2] [4LL]), (arr_23 [i_1] [i_2] [i_2] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3] [i_2] [i_2] [i_1]))) : (((((/* implicit */_Bool) min((3144922840U), (((/* implicit */unsigned int) -874540251))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4))) : (arr_14 [i_1] [i_2] [i_1]))));
                    var_29 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_22 [i_3] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_3] [i_2] [(short)20] [(short)23])) ? (((/* implicit */int) arr_18 [i_1] [16ULL] [i_1] [i_3] [22U] [i_3])) : (((/* implicit */int) (unsigned char)0))))) : (((1159364523644757854LL) + (-558551906910194LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 129028279U)) ? (((((/* implicit */_Bool) arr_9 [i_2] [i_3])) ? (((/* implicit */int) arr_2 [i_2])) : (-2147483647))) : (((((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_3])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_12 [16LL] [i_1] [i_1] [i_3])))))))));
                }
            } 
        } 
        var_30 -= ((/* implicit */int) max(((-(((((/* implicit */_Bool) arr_28 [i_1] [i_1] [i_1] [(unsigned char)8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)169))) : (0ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_4) >> (((-874540251) + (874540255)))))) ? (((((/* implicit */_Bool) 4165939016U)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 667530041)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-112))))))));
    }
}
