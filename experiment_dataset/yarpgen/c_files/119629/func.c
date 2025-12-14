/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119629
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
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((4294967295U) - (arr_1 [i_0]))) != (((/* implicit */unsigned int) -1519279899)))))) < (0U)));
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_3 [i_0] [i_1] [i_0 + 1])) % (((/* implicit */int) arr_3 [i_0] [i_0] [i_0 + 1]))))));
                    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)213))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_2))) == (((((/* implicit */_Bool) (unsigned short)33609)) ? (var_3) : (((/* implicit */unsigned long long int) 2676141037U)))))))));
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)33621), (((/* implicit */unsigned short) (unsigned char)253))))) ? ((+(((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (short)32441)))))))));
}
