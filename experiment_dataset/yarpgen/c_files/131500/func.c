/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131500
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
    var_10 += ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) | (var_1))), (((/* implicit */unsigned long long int) (unsigned char)242))))) ? ((+(((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned long long int) var_4)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))))));
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((((/* implicit */_Bool) var_6)) ? (min((((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) var_0)))) : (var_1)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (0LL) : (((/* implicit */long long int) ((((/* implicit */int) (short)-1)) | (((/* implicit */int) (short)1)))))))));
        arr_3 [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)135))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */short) (+((+(((/* implicit */int) arr_0 [9LL] [i_0 - 2]))))));
                    arr_9 [i_1] [i_1] [2U] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) (short)-32764)) | (((/* implicit */int) (short)-1))))) ? (((/* implicit */int) (unsigned short)32084)) : (((/* implicit */int) (unsigned char)0)))) / ((-(((((/* implicit */int) (unsigned char)254)) | (((/* implicit */int) var_5))))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        arr_13 [i_0 - 3] [i_1] [(short)11] [i_2] [i_3] = ((/* implicit */short) arr_1 [i_2]);
                        arr_14 [i_0] [i_1] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_8 [i_3 - 1] [i_3 - 1] [17] [i_0 + 1]))));
                        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((var_9) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_3])) ? ((-(arr_4 [i_1] [(unsigned char)12] [i_3 + 2]))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)0)))))))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 1; i_4 < 16; i_4 += 3) 
                    {
                        var_15 = ((/* implicit */short) (-(var_9)));
                        var_16 = ((/* implicit */unsigned long long int) ((short) arr_0 [i_0 - 1] [i_4 - 1]));
                    }
                    arr_17 [2LL] [i_0] [16ULL] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [9]) + (((/* implicit */long long int) ((/* implicit */int) (signed char)39)))))) ? (min((((/* implicit */unsigned int) -348433605)), (arr_2 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)13))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)254)) | (((/* implicit */int) (unsigned char)80))))) : (min((((/* implicit */unsigned long long int) var_2)), (var_9))))) : (min((((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) (unsigned char)137)))));
                    arr_18 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_0);
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_2))) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)-7), ((short)-3))))) : (((arr_4 [i_0 - 1] [0ULL] [i_0 - 3]) << (((((((/* implicit */int) var_6)) + (137))) - (42)))))));
    }
    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        arr_22 [i_5] |= (+(((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (max((((/* implicit */unsigned long long int) arr_19 [i_5] [i_5])), (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [(unsigned char)0])) ? (((/* implicit */int) var_6)) : (arr_19 [i_5] [i_5])))))));
        var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5]))) : (-7753680306611015025LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (7753680306611015002LL)))), (((unsigned long long int) ((unsigned char) arr_20 [i_5])))));
        arr_23 [i_5] = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)32064))))))) ? (min((((/* implicit */unsigned long long int) arr_21 [i_5])), (12886877465697020508ULL))) : ((+(min((1644104171353453030ULL), (((/* implicit */unsigned long long int) var_5)))))));
    }
    var_19 = (((~(0ULL))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-28692))))));
}
