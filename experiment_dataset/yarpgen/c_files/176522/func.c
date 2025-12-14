/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176522
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
    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) var_1))));
    var_12 = ((/* implicit */_Bool) var_5);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_13 = ((/* implicit */int) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_1))) & (var_5)))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (var_3)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))))));
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) max((max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))))), (((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_5))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))))));
    }
}
