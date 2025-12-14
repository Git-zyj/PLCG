/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102927
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [4LL] [i_2]))) : (min((7700312439549215178ULL), (((/* implicit */unsigned long long int) var_8))))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_8)))) : (((unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                    var_11 *= ((/* implicit */short) ((unsigned long long int) (+((+(((/* implicit */int) (unsigned char)62)))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-31178))) != ((+(9223372036854775794LL)))));
}
