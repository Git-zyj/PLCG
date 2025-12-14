/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116625
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
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_12 += ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16320))) : (arr_0 [i_0] [i_0]))) << ((((+(((/* implicit */int) (unsigned short)65535)))) - (65489)))));
        var_13 = max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_1 [i_0] [i_0]))), (((/* implicit */long long int) max((693581707U), (((/* implicit */unsigned int) (unsigned char)255))))));
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1]))))) <= (((/* implicit */int) max(((signed char)-41), ((signed char)41))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 3; i_3 < 10; i_3 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) ((((((((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_2] [i_3]))) : (arr_7 [i_1] [i_2] [i_3]))) + (9223372036854775807LL))) << (((max((var_0), (var_0))) - (201585822U))))) >= (((/* implicit */long long int) ((/* implicit */int) min((arr_3 [i_3 + 1] [i_3]), (((/* implicit */unsigned char) var_1))))))));
                    var_15 = ((/* implicit */unsigned long long int) ((((min((((/* implicit */long long int) (short)-8192)), (((((/* implicit */long long int) ((/* implicit */int) var_2))) + (arr_8 [i_3] [i_2]))))) + (9223372036854775807LL))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (arr_9 [i_2] [i_3]))) - (1ULL)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 4; i_4 < 9; i_4 += 3) 
        {
            for (unsigned char i_5 = 1; i_5 < 7; i_5 += 3) 
            {
                {
                    var_16 = max(((!((!(((/* implicit */_Bool) var_5)))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)18)), (arr_12 [i_1] [i_1])))) || (((/* implicit */_Bool) (unsigned short)35861)))));
                    /* LoopSeq 4 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_17 -= ((/* implicit */long long int) ((((unsigned long long int) arr_5 [i_1] [i_5 + 3] [i_5 + 3])) / (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1] [i_1] [i_5 + 3])) & (((/* implicit */int) arr_18 [i_1] [i_4] [i_5 + 4] [i_4 - 4] [i_6] [i_6])))))));
                        var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_14 [i_1] [i_4] [i_4] [i_6])) <= (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (var_8)))) : (min((arr_0 [i_1] [i_4]), (((/* implicit */unsigned long long int) var_8))))))));
                        arr_20 [i_4] [i_4] [i_4] [i_6] [i_6] = ((/* implicit */short) arr_8 [i_1] [i_1]);
                    }
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        var_19 += ((/* implicit */int) ((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_4 - 1])))));
                        arr_24 [i_1] [i_4] [2U] [(short)0] [i_4] |= ((/* implicit */unsigned char) var_5);
                        arr_25 [i_1] [i_1] [i_4] [i_1] = ((/* implicit */long long int) ((9666286474919747688ULL) - (((/* implicit */unsigned long long int) arr_23 [i_1] [i_1] [i_5 + 4] [i_5 - 1] [i_1] [i_7]))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        var_20 = ((/* implicit */signed char) (+(((/* implicit */int) arr_28 [(short)3] [i_4] [(short)3] [(unsigned char)9]))));
                        /* LoopSeq 2 */
                        for (short i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            var_21 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned short)2)) ? (arr_8 [i_1] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned char)9] [(unsigned char)9] [i_5 + 3]))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_3)) != (15543603481501743861ULL))))));
                            arr_32 [i_1] [i_4] [i_1] [i_8] = ((/* implicit */unsigned short) arr_9 [i_5 - 1] [i_4 - 2]);
                            var_22 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) var_3)) >= (((arr_19 [i_1]) / (((/* implicit */unsigned long long int) var_9)))))) || (max((arr_15 [i_1] [i_1] [i_5] [i_5 + 1]), ((!(((/* implicit */_Bool) 3601385581U))))))));
                        }
                        for (unsigned short i_10 = 2; i_10 < 7; i_10 += 3) 
                        {
                            var_23 = ((/* implicit */signed char) max((((/* implicit */unsigned int) arr_15 [i_4 - 1] [i_4] [i_4] [i_4])), (max((var_8), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [4] [4] [i_5])))))))));
                            var_24 &= (unsigned short)65529;
                        }
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_5)))) || (((/* implicit */_Bool) ((unsigned char) ((_Bool) arr_1 [i_4] [i_4]))))));
                    }
                    for (long long int i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        arr_37 [i_4] [i_4 - 3] [i_4] [i_11] [i_1] = ((/* implicit */short) ((unsigned char) arr_28 [i_4] [i_4 + 2] [i_4] [i_4]));
                        var_26 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) (signed char)105))))));
                        arr_38 [(unsigned short)0] &= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (arr_16 [i_5 + 1] [i_5] [i_4 - 1] [i_1])))) ? (((/* implicit */int) ((signed char) min((((/* implicit */int) (signed char)105)), (1338324171))))) : (((/* implicit */int) var_2)));
                    }
                    arr_39 [i_4] [i_4] [i_1] [i_5] = ((/* implicit */unsigned long long int) (unsigned char)133);
                    arr_40 [i_4] = ((/* implicit */int) var_7);
                    arr_41 [i_1] [(_Bool)1] |= ((/* implicit */signed char) (+(var_6)));
                }
            } 
        } 
        var_27 = ((/* implicit */short) max(((signed char)-124), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_0)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_12 = 4; i_12 < 16; i_12 += 1) 
    {
        var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)4)) / (553563043)))) ? (((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_44 [i_12])))) : (((/* implicit */int) arr_44 [i_12 - 4]))));
        var_29 += ((/* implicit */long long int) ((short) (_Bool)1));
    }
    var_30 = ((/* implicit */signed char) max(((+(max((var_6), (var_6))))), (((/* implicit */unsigned long long int) var_3))));
    var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) var_5))));
    /* LoopSeq 1 */
    for (short i_13 = 1; i_13 < 11; i_13 += 3) 
    {
        var_32 = ((/* implicit */signed char) ((min((max((((/* implicit */unsigned long long int) (unsigned char)186)), (15003523241025469876ULL))), (2899557615492656909ULL))) / (((/* implicit */unsigned long long int) max((min((var_5), (693581700U))), (((/* implicit */unsigned int) ((short) var_4))))))));
        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_9)))) || (((/* implicit */_Bool) max((1055531162664960ULL), (((/* implicit */unsigned long long int) (short)-8192)))))));
    }
}
