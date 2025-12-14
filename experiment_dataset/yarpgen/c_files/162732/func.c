/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162732
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
    for (int i_0 = 2; i_0 < 6; i_0 += 4) 
    {
        arr_4 [i_0 - 2] = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)24182))) <= (arr_2 [i_0]));
        var_17 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (-(3251251827U)))) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) arr_3 [i_0]))))));
    }
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_14))));
}
