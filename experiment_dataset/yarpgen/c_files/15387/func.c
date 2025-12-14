/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15387
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((min((2147483647), (((/* implicit */int) (signed char)117)))) - (var_3))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : ((-(((/* implicit */int) var_1))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (~(((((/* implicit */int) (!(((/* implicit */_Bool) -512LL))))) << (((min((var_13), (((/* implicit */int) (signed char)33)))) + (2040578135))))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_12) : (((/* implicit */unsigned long long int) 2147483647)))), (((/* implicit */unsigned long long int) -6242507857707630437LL))));
    }
}
