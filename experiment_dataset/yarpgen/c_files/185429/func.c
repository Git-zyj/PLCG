/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185429
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
    var_10 = ((/* implicit */long long int) (~((~(var_6)))));
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 1996309832))))))))));
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? ((+(((/* implicit */int) var_9)))) : ((~(3)))));
    var_13 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                var_14 *= ((/* implicit */signed char) 5088171694228421704LL);
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((unsigned char) var_6))) : (((/* implicit */int) arr_3 [i_0]))))) ? (((((/* implicit */_Bool) (signed char)82)) ? (0LL) : (((/* implicit */long long int) 2077189060)))) : (((/* implicit */long long int) (~(var_0))))));
            }
        } 
    } 
}
