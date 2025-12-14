/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126363
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
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (~((~(((arr_0 [i_0 - 3]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_1))))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((_Bool) (signed char)8));
        var_14 = ((_Bool) (~(((((/* implicit */_Bool) arr_2 [i_0] [(signed char)6])) ? (0U) : (((/* implicit */unsigned int) var_10))))));
    }
    var_15 = ((/* implicit */short) (((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned int) (signed char)29))))) ? (((/* implicit */int) min((((/* implicit */signed char) var_13)), ((signed char)-9)))) : (((((/* implicit */_Bool) var_6)) ? (var_8) : (var_12))))))));
}
