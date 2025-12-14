/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150161
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_16 = ((/* implicit */_Bool) var_8);
        arr_4 [i_0] = ((/* implicit */long long int) var_10);
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_10)))) : (min((((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))), (var_5))))))));
    }
    var_18 = ((/* implicit */long long int) var_8);
}
