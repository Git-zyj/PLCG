/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153813
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = arr_0 [(_Bool)1] [i_0];
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (arr_0 [i_0] [i_0])));
    }
    var_14 = ((/* implicit */short) min((var_4), (((/* implicit */long long int) var_7))));
    var_15 -= ((_Bool) var_6);
}
