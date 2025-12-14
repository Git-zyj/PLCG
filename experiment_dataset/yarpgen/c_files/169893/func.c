/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169893
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
    var_11 += ((/* implicit */int) ((var_0) ? (((var_0) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    var_12 = ((signed char) (!(((/* implicit */_Bool) var_10))));
    var_13 = ((/* implicit */int) var_3);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) arr_1 [(unsigned short)2]);
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((_Bool) var_4))) : (min((((/* implicit */int) (signed char)46)), (arr_1 [10LL])))));
    }
}
