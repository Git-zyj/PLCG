/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10178
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
    var_11 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0])))) ? (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))) : ((-(((/* implicit */int) arr_0 [i_0]))))));
        arr_2 [i_0] |= ((/* implicit */_Bool) arr_0 [i_0]);
    }
    var_13 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_3))));
    var_14 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)33456))));
    var_15 = ((/* implicit */short) var_2);
}
