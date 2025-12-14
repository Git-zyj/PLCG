/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124584
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
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) var_15);
        var_17 = ((/* implicit */short) max(((-(arr_1 [i_0 + 3]))), (((/* implicit */unsigned int) ((signed char) arr_1 [i_0 + 3])))));
    }
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (signed char)-24))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-24))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_0)))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (min(((-(((/* implicit */int) var_3)))), ((~(((/* implicit */int) var_14)))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_8)))))) == (var_1))))));
}
