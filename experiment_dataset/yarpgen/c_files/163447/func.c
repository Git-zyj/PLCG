/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163447
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_0] = ((/* implicit */short) var_14);
                    arr_9 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)163))))) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) (signed char)73)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [(signed char)0] [i_0])))))));
                    var_20 = ((/* implicit */unsigned char) arr_7 [i_0] [i_1] [i_1 + 3]);
                }
                for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    arr_14 [i_0] [i_1 + 4] [i_0] = ((/* implicit */unsigned int) var_15);
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3392448213U)) ? (2232783305U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)66)))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) 
                        {
                            {
                                var_22 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-41)) && (((/* implicit */_Bool) (unsigned char)189)))) ? (((unsigned int) arr_10 [i_1 + 1])) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_13 [i_1 - 2])) < (arr_12 [i_0] [i_1] [i_1 + 4])))))));
                                arr_21 [i_0] [i_1] [i_0] [i_4] [i_4] [i_4] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */int) (unsigned char)208)) : ((~(((/* implicit */int) (unsigned char)173))))));
                            }
                        } 
                    } 
                }
                arr_22 [22LL] [i_0] [i_1] &= (unsigned char)128;
                arr_23 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_1] [i_1 + 4] [11U] [i_1 - 1])) << (((((/* implicit */int) (unsigned char)127)) - (119)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_1)) ? (min((arr_18 [i_0] [i_0] [i_0] [(unsigned char)4] [i_0]), (((/* implicit */unsigned int) (unsigned char)47)))) : (((/* implicit */unsigned int) 597161924))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) min(((short)2436), (((/* implicit */short) (unsigned char)77))))), (((6570373096027227323LL) >> (((((/* implicit */int) var_15)) + (11276)))))))) ? (min((var_12), (((/* implicit */unsigned long long int) (signed char)63)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)86)) ? (-1651215491) : ((-(((/* implicit */int) (unsigned char)47)))))))));
}
