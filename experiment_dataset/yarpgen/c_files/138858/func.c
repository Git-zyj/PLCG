/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138858
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
    var_15 = ((/* implicit */_Bool) (+(((unsigned long long int) (-(2147483647))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) arr_1 [i_0] [i_1]))));
                var_17 = ((/* implicit */signed char) max((((/* implicit */long long int) (-(8126464U)))), (0LL)));
                var_18 *= ((/* implicit */short) (-((+(4286840818U)))));
                var_19 += ((/* implicit */unsigned char) 1954477869U);
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_14);
    var_21 = ((/* implicit */_Bool) (~(var_7)));
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((8126464U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) << (((((((/* implicit */_Bool) 1954477883U)) ? (2184426681497163617LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) - (2184426681497163602LL)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */int) var_3)) >= (((((((/* implicit */int) var_4)) + (2147483647))) << (((1954477888U) - (1954477888U))))))))));
}
