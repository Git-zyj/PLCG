/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140107
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 |= ((/* implicit */long long int) (~(((int) (unsigned char)169))));
                var_21 -= ((((/* implicit */_Bool) ((-1LL) - ((+(10LL)))))) ? (arr_4 [i_1]) : (min((arr_4 [i_0 - 1]), (((/* implicit */unsigned long long int) arr_1 [i_0 - 1])))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (min((min((-10LL), (((/* implicit */long long int) var_19)))), (((/* implicit */long long int) (-(((/* implicit */int) var_16))))))) : (max((15LL), (((/* implicit */long long int) var_1))))));
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_17))) ? (var_15) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) (signed char)-82))))) ? (((/* implicit */unsigned long long int) var_5)) : (((((/* implicit */_Bool) (signed char)118)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -670547164))))))));
    var_24 = ((/* implicit */unsigned short) min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) var_11)) ? (-670547162) : (((/* implicit */int) (signed char)-125))))));
}
