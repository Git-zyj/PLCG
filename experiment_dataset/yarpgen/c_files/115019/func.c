/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115019
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
    var_16 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned int) (unsigned char)150))))), (var_13)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 18446744073709551602ULL)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (var_0)))))) ? (((((/* implicit */_Bool) ((var_6) / (((/* implicit */long long int) ((/* implicit */int) (signed char)122)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (451365115U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2685917788U))))))));
        var_18 = ((/* implicit */signed char) -1393663781);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) ((short) arr_5 [i_1]));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1]))))))));
    }
}
