/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139784
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
    for (short i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = (+(var_6));
        var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) var_1))));
        arr_5 [i_0] = ((/* implicit */long long int) ((arr_2 [i_0 + 1]) <= (((/* implicit */int) ((unsigned short) var_7)))));
    }
    var_11 = ((/* implicit */short) var_0);
}
