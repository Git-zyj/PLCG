/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156082
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
    var_17 = ((/* implicit */_Bool) (unsigned short)0);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))))) ? (((((/* implicit */_Bool) (short)22)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21518))) : (8988575343883111059ULL))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) (unsigned char)171)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (var_14)))) ? (((/* implicit */long long int) min((arr_6 [i_2 - 1] [i_0] [i_2]), (arr_6 [i_2 + 1] [i_0] [(unsigned char)4])))) : ((~(-3199573026783696898LL)))));
                                var_20 ^= var_1;
                                arr_14 [i_0] [i_0] [i_0] [i_3] [i_2] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_7 [i_4] [(unsigned char)23] [i_2 - 1])) ? ((-(2056054843212658330ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                var_21 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_10 [i_2 - 1] [i_2 - 1] [i_2 - 1] [11U]))))) ? (((/* implicit */unsigned int) (((~(((/* implicit */int) var_10)))) - (((((/* implicit */int) arr_12 [i_1] [10U] [10U])) - (((/* implicit */int) arr_16 [(unsigned short)22] [i_0] [(unsigned short)22] [i_0] [i_0]))))))) : (min((((/* implicit */unsigned int) (_Bool)1)), (0U)))));
                                arr_21 [6U] [i_1] [i_2] [i_5] [(unsigned short)4] = ((/* implicit */unsigned char) arr_11 [12ULL] [i_1]);
                                arr_22 [i_2] [i_1] = ((/* implicit */short) min((((/* implicit */int) (short)-12242)), (((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) + ((-(((/* implicit */int) var_12))))))));
                                var_22 += ((/* implicit */signed char) (~(((/* implicit */int) arr_18 [i_0] [i_5] [i_0]))));
                            }
                        } 
                    } 
                    arr_23 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (unsigned short)21518);
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_23 = ((/* implicit */signed char) arr_2 [i_1]);
                    var_24 = ((/* implicit */_Bool) (signed char)109);
                }
                var_25 += ((/* implicit */unsigned char) (_Bool)1);
            }
        } 
    } 
}
