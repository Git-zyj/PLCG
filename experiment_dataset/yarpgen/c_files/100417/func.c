/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100417
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
    for (short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (short i_4 = 3; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)9)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9))) : (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)234)))))) ? ((-(((var_10) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29724))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)1)))))));
                                var_15 |= ((/* implicit */unsigned short) arr_6 [i_0] [0U] [i_4] [i_3] [i_4 - 2]);
                            }
                        } 
                    } 
                    arr_10 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_4))));
                    arr_11 [i_0] [i_0 + 2] [(short)7] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)29724)) ? (((/* implicit */int) (short)13105)) : (((/* implicit */int) (unsigned char)31)))) >= (((/* implicit */int) (unsigned char)9)))))));
                }
            } 
        } 
    } 
    var_16 += ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) 1023)) ? (var_8) : (((/* implicit */unsigned long long int) var_0)))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-13106))) : (var_1))))))));
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (short)-29708))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))))));
    var_18 |= ((/* implicit */unsigned char) var_12);
}
