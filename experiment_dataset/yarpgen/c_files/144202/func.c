/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144202
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
    var_11 = ((/* implicit */long long int) var_5);
    var_12 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_6))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_3 [i_0])), ((+(((/* implicit */int) (unsigned short)9638))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (4294967284U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))))));
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0)))))));
            }
        } 
    } 
}
