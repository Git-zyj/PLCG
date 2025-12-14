/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164870
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
    var_18 = ((((/* implicit */_Bool) (-(max((var_8), (((/* implicit */int) var_5))))))) ? (((/* implicit */int) ((signed char) ((var_7) ? (((/* implicit */int) (unsigned short)51520)) : (var_4))))) : ((~(-1858069799))));
    var_19 = ((/* implicit */short) ((long long int) var_12));
    var_20 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 1474576476551408352LL)) ? (((/* implicit */int) (short)-32753)) : (((/* implicit */int) (unsigned short)13989))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (_Bool)1);
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)51520)) ? (min((((/* implicit */long long int) (short)-958)), (2603643053681620789LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) (short)(-32767 - 1))))))));
    }
}
