/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139625
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
    for (signed char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_8 [i_0 + 1] [i_1] [i_0 + 1] [i_2] = ((/* implicit */int) ((var_3) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (arr_0 [i_0 + 1]) : (((/* implicit */long long int) 12U)))))));
                    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_10)) ? ((~(4294967284U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))))))))));
                    var_12 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)80)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)60)))))) ? (((/* implicit */unsigned long long int) ((4294967292U) / (var_6)))) : (((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))))) - (((/* implicit */unsigned long long int) 4294967291U))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) (unsigned char)182);
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (((((/* implicit */_Bool) (unsigned char)176)) ? (4294967267U) : (var_7)))))) ? (min((((/* implicit */unsigned int) max((-1943647787), (((/* implicit */int) (short)20025))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))) : (var_7))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned short)45041)) : (((/* implicit */int) (unsigned char)237)))) : (var_4))))));
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) min((var_0), (((unsigned char) 4294967295U))))) ? (((/* implicit */unsigned long long int) 4294967295U)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)250)))) : (((((/* implicit */unsigned long long int) var_5)) | (var_3)))))));
    var_16 = ((/* implicit */signed char) var_4);
}
