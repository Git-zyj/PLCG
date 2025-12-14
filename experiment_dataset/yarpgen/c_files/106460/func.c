/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106460
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [(unsigned short)2] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_1 [i_0])))) + (-5227696585849705520LL)));
        var_20 = var_15;
        arr_3 [i_0] = ((/* implicit */int) var_18);
    }
    for (signed char i_1 = 2; i_1 < 22; i_1 += 4) 
    {
        var_21 = ((/* implicit */signed char) min((10174465432287704652ULL), (10174465432287704640ULL)));
        var_22 = ((/* implicit */int) max((var_22), ((~(((/* implicit */int) (((-(((/* implicit */int) var_3)))) != (arr_5 [i_1] [i_1]))))))));
        arr_6 [i_1] = ((/* implicit */int) (-(var_16)));
    }
    var_23 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) var_2)) >> (((var_13) - (3336526319U))))));
}
