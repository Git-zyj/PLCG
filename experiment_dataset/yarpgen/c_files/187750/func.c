/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187750
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
    var_14 = (signed char)62;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)62433)) ? (((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (6178162112036200672LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_4))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 2])) != (((/* implicit */int) arr_1 [i_0])))))) : (min((((/* implicit */long long int) ((short) (unsigned short)0))), (-1LL))))))));
        var_16 = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (var_9)))))));
        var_17 = ((/* implicit */long long int) (+(var_10)));
        arr_2 [i_0 + 1] [i_0] = ((/* implicit */short) var_7);
        var_18 = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)65535));
    }
}
