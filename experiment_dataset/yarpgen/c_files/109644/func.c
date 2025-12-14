/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109644
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
    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (max((var_9), (((/* implicit */unsigned int) var_12)))) : (max((((/* implicit */unsigned int) var_2)), (var_9))))))));
    var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) var_2)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) (+((~(((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) + (var_9)))))));
                var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)32747))))) ? (min((((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_3 [10LL] [10LL]))), (((((/* implicit */_Bool) arr_1 [(signed char)6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1]))) : (arr_3 [(unsigned short)22] [(unsigned short)22]))))) : (((/* implicit */long long int) 1176914402))));
            }
        } 
    } 
}
