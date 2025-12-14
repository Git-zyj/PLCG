/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172881
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
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0 - 2] = ((/* implicit */unsigned short) var_10);
        arr_4 [4] = ((/* implicit */int) arr_0 [i_0]);
        var_12 = ((/* implicit */short) arr_0 [i_0]);
        arr_5 [17U] = ((/* implicit */unsigned short) -1682338509);
    }
    var_13 = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_9)), (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_3)) : (var_1))) + (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
}
