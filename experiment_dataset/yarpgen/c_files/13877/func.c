/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13877
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
    var_17 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)-127)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54668)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) (unsigned short)43431))))) : (((((((/* implicit */_Bool) (signed char)10)) ? (4294967283U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_3))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((3658705290U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-22)))));
        var_18 *= ((/* implicit */short) (~((~(41U)))));
        arr_5 [i_0] [2] = ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) == (((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (signed char)49)) : (var_11)))));
    }
    var_19 = ((/* implicit */long long int) (unsigned short)29629);
    var_20 = ((/* implicit */signed char) (-(var_11)));
}
