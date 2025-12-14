/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172833
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
    for (short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_13 = ((unsigned short) ((((/* implicit */_Bool) var_1)) ? ((~(((/* implicit */int) (unsigned short)47833)))) : (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned short) var_3)))))));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (signed char)-122))));
    }
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)47833)) ? ((-(((/* implicit */int) (unsigned short)33138)))) : (((/* implicit */int) var_10)))))));
}
