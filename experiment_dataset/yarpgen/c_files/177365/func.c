/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177365
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
    var_14 = ((/* implicit */signed char) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(signed char)6] [i_0]))) : (var_12)))) && (((/* implicit */_Bool) (-(arr_0 [i_0 + 1]))))));
        var_16 &= ((/* implicit */signed char) var_12);
        var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)53541))));
        var_18 = (unsigned short)64830;
    }
    var_19 = ((/* implicit */signed char) (-(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) != (var_11))))) ^ (var_11)))));
}
