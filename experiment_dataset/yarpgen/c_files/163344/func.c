/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163344
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
        var_16 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((arr_0 [i_0]), (arr_0 [i_0])))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)24864))) + (var_2))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (10320827119720594554ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))));
        var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_15)), ((-(((((/* implicit */int) arr_2 [i_0])) / (arr_1 [i_0])))))));
        var_18 = ((/* implicit */int) ((signed char) ((short) ((var_6) | (((/* implicit */unsigned int) var_9))))));
    }
    var_19 = ((/* implicit */short) ((unsigned short) var_0));
}
