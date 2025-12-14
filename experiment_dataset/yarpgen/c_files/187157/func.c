/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187157
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
    var_20 = ((/* implicit */int) var_7);
    var_21 = ((/* implicit */long long int) (-2147483647 - 1));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) arr_1 [i_0])) >> (((max((((/* implicit */long long int) arr_0 [i_0])), (7495453039090439800LL))) - (7495453039090439769LL)))))));
        arr_4 [i_0] = ((/* implicit */int) ((unsigned char) 5409435122266146397LL));
    }
}
