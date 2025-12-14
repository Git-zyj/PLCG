/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136797
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
    var_10 = var_6;
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_11 = ((((/* implicit */int) var_7)) <= (((((/* implicit */int) ((((/* implicit */int) var_6)) >= (var_4)))) & (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (var_1)))))));
        var_12 += ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (var_1)))) == (((var_2) - (var_2)))));
        var_13 = ((/* implicit */unsigned long long int) var_3);
    }
}
