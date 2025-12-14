/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110670
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_7 [i_2 + 2] [i_2 + 2] [i_2 + 2])) + (((/* implicit */int) arr_7 [i_2 + 1] [i_2 + 1] [i_2 + 1])))) + ((~(((/* implicit */int) arr_7 [i_2 + 2] [i_2] [i_2]))))));
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */int) (unsigned short)65532)) : (((/* implicit */int) (unsigned short)21))))) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : ((~((~(var_15)))))));
                    var_16 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)43860)) && (((/* implicit */_Bool) (signed char)-1))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_0]))))))) && (((((/* implicit */_Bool) (signed char)-6)) || (((((/* implicit */_Bool) 678340415U)) && (((/* implicit */_Bool) arr_5 [i_1]))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)37)), (arr_12 [i_0] [i_0] [i_0] [i_3] [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_0)))))) ? ((~(((/* implicit */int) arr_11 [i_1 - 4])))) : (((/* implicit */int) max((max((var_5), (arr_4 [i_3]))), (arr_13 [i_0] [i_1] [i_1]))))));
                                var_17 = ((/* implicit */unsigned int) (+(max(((~(var_9))), (((/* implicit */unsigned long long int) arr_6 [i_1 + 1] [i_2 + 2] [i_1 + 1]))))));
                                var_18 &= ((/* implicit */signed char) max((((/* implicit */int) (unsigned short)65518)), (((((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_14)) - (32435))))) << ((((~(((/* implicit */int) (unsigned char)195)))) + (223)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = max((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_15))))), (((((/* implicit */_Bool) var_2)) ? (195258098U) : (var_12))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))) >= (501487079U)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65534)))))))));
    }
    var_20 *= ((/* implicit */unsigned int) (short)-13154);
}
