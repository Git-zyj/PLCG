/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159557
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
    for (long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_16 = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (signed char)19)))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)5028)))))), (((/* implicit */int) arr_1 [i_0]))));
        arr_2 [i_0] = (!(((/* implicit */_Bool) ((long long int) (signed char)127))));
    }
    var_17 = max(((signed char)-91), ((signed char)22));
}
