/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104995
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
    var_13 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) max((var_3), ((unsigned char)236)))) | (((/* implicit */int) (signed char)-101)))) | (((/* implicit */int) var_10))));
                var_15 = ((/* implicit */unsigned int) var_5);
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)47906)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : ((((~(6369302355148561415ULL))) ^ (((/* implicit */unsigned long long int) min((7300940493915466523LL), ((-9223372036854775807LL - 1LL)))))))));
            }
        } 
    } 
    var_17 ^= ((/* implicit */unsigned char) (~(((4857690642772737448ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-23)))))));
    var_18 *= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-12))) <= (4294967284U)))))))), (var_2)));
    var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)(-32767 - 1))), (((1814420380U) * (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)155)) / (((/* implicit */int) (unsigned short)65535)))))))));
}
