/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154328
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
    for (int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = var_9;
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_0)))) && (((/* implicit */_Bool) ((((var_9) + (2147483647))) << (((((/* implicit */int) var_15)) - (4539)))))))))));
        var_18 = ((/* implicit */int) var_3);
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) var_8)) / (((var_0) - (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
    }
    var_19 = max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_1)))))) : (((var_13) + (((/* implicit */long long int) ((/* implicit */int) var_1))))))), (((((/* implicit */long long int) ((/* implicit */int) max((var_3), (var_2))))) & (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_11))))));
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_5))));
}
