/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141195
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
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        arr_4 [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? ((-(-2700526569329363335LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 499211631)) ? (((/* implicit */int) (signed char)72)) : (((/* implicit */int) (signed char)-73)))))));
        var_19 ^= ((/* implicit */_Bool) max(((signed char)-70), (var_7)));
        var_20 = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_17)) <= (((/* implicit */int) arr_1 [i_0 + 1])))));
        arr_5 [i_0] = ((/* implicit */unsigned short) var_1);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) ((short) 515396075520LL))) : (((/* implicit */int) ((_Bool) arr_3 [i_1] [i_1]))))))));
        var_22 = ((signed char) ((int) var_9));
        var_23 *= ((/* implicit */int) ((long long int) ((((var_6) + (9223372036854775807LL))) >> (((var_14) - (1532589107))))));
        var_24 = ((/* implicit */unsigned short) arr_1 [i_1]);
    }
    var_25 -= ((/* implicit */long long int) ((min((var_8), (var_18))) ? (((/* implicit */unsigned long long int) var_1)) : (((var_12) >> (((((unsigned int) var_11)) - (3346320411U)))))));
    var_26 += var_4;
}
