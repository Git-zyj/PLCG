/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159885
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
    var_19 = ((/* implicit */long long int) var_18);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_11))) + ((+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [i_0]))))))));
        arr_2 [i_0] [15] = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (signed char)112))))));
        var_21 = ((/* implicit */unsigned long long int) var_13);
    }
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_0)))) && (((/* implicit */_Bool) var_18))));
    var_23 = ((/* implicit */long long int) min((var_23), (((((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_18), (((/* implicit */short) var_17)))))) : (((var_9) / (((/* implicit */long long int) var_12)))))) * (((((/* implicit */_Bool) ((var_16) ^ (((/* implicit */long long int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_0)))))));
}
