/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154625
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
    var_16 = ((/* implicit */unsigned long long int) max(((signed char)89), (((/* implicit */signed char) ((((/* implicit */int) var_9)) > (((/* implicit */int) (!(((/* implicit */_Bool) 11682633901633235757ULL))))))))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) -2812608368068535346LL)) || (((/* implicit */_Bool) var_2)))))))) : (min((2812608368068535360LL), (((/* implicit */long long int) (signed char)32))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */_Bool) ((long long int) ((-2812608368068535346LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)96))))));
                var_19 ^= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_3 [i_1] [i_1])) + (2147483647))) >> (((((unsigned int) max((((/* implicit */long long int) arr_4 [i_1] [i_1] [i_1])), (187528933263303425LL)))) - (1011114751U)))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) (((_Bool)1) ? (-9190986763954376040LL) : (((/* implicit */long long int) min((994201890U), (3221225472U)))))));
            }
        } 
    } 
}
