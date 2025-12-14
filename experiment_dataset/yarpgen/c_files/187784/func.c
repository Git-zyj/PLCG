/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187784
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
    var_10 -= ((((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) ((unsigned int) 3ULL)))))) ? (max(((+(var_0))), (((/* implicit */int) (unsigned char)183)))) : ((+(((/* implicit */int) (!(var_6)))))));
    var_11 = ((/* implicit */int) (~(((((/* implicit */_Bool) (~(var_1)))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
    var_12 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)86), ((unsigned char)62))))) ^ (var_2))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)183)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_13 ^= ((/* implicit */short) arr_5 [i_1]);
                arr_7 [3LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) == (-1254043855885260725LL))) ? (max((var_5), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (24U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))) ? (((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), ((short)30494)))) ? (max((2097144), (((/* implicit */int) (unsigned short)10948)))) : (((/* implicit */int) ((unsigned char) var_0))))) : (((/* implicit */int) (signed char)37))));
            }
        } 
    } 
}
