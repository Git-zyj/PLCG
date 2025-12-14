/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140023
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
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 784815260U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (var_1)))) && ((!((!(((/* implicit */_Bool) var_1))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        var_19 = ((/* implicit */short) (~(arr_1 [i_0])));
        var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))));
    }
    var_21 |= ((/* implicit */long long int) min(((-(((var_12) * (var_12))))), (((/* implicit */unsigned int) var_14))));
    var_22 += ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) min((((/* implicit */int) var_17)), (var_11)))) ? ((~(((/* implicit */int) var_17)))) : (((int) var_14))))));
}
