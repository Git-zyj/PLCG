/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162407
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
    var_18 = ((/* implicit */unsigned char) var_16);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_3 [i_0] [3] = ((/* implicit */long long int) ((unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) << (((((/* implicit */int) arr_1 [i_0])) - (99)))))), (((((/* implicit */long long int) ((/* implicit */int) var_17))) % (-829672277925389705LL))))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((unsigned int) 8993726988618342889LL));
    }
}
