/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121203
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_19 |= ((_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_0])) : (var_17)));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((_Bool) arr_1 [i_0] [i_0])))));
        var_21 = arr_0 [i_0];
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
    }
    var_23 = ((/* implicit */unsigned short) var_11);
    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (!(((_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)1))))))))));
}
