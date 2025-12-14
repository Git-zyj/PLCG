/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153186
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((int) max((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) | (var_6)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = max((max((((/* implicit */unsigned int) arr_2 [i_0 + 2] [i_0])), (var_2))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) var_12))))));
        var_15 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned short) var_12)))))))));
    }
}
