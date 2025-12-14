/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172825
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
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) arr_0 [0]);
        var_20 = ((/* implicit */int) (-(arr_1 [i_0 + 1])));
        var_21 = ((/* implicit */signed char) ((long long int) arr_0 [i_0 - 1]));
    }
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) -7251533681764443081LL))))))))))));
}
