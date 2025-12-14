/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160658
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
    var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) min(((short)25836), ((short)25853)))) ? (((((var_9) + (9223372036854775807LL))) << (((((((/* implicit */int) var_13)) + (25096))) - (39))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_16)))))))));
    var_20 = ((/* implicit */_Bool) ((((unsigned int) (short)25829)) << (((var_3) - (3949893561U)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)76)) | (((/* implicit */int) arr_0 [i_1]))))) ? ((~(((/* implicit */int) (short)-25836)))) : (((/* implicit */int) arr_0 [i_0]))));
                arr_5 [i_0] |= ((/* implicit */unsigned int) max((((/* implicit */short) (_Bool)1)), ((short)25807)));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_0 [i_1]))) != (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) < (((((/* implicit */unsigned long long int) var_3)) & (var_1))))))));
            }
        } 
    } 
}
