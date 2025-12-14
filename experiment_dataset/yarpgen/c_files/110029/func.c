/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110029
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
    var_15 = ((/* implicit */int) max((var_15), (max((125829120), (125829120)))));
    var_16 = ((/* implicit */unsigned short) var_9);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((arr_0 [14]) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_0 - 1])) == (var_1)))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) / (((/* implicit */int) (_Bool)1))));
    }
}
