/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162232
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
    var_20 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        arr_3 [10LL] |= (!(((/* implicit */_Bool) max((min((((/* implicit */short) var_4)), ((short)-9005))), (((/* implicit */short) (signed char)68))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1578874374548988032LL)) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) ((short) -9169598646943276618LL)))));
        var_21 = ((/* implicit */unsigned int) (((~(((((/* implicit */unsigned int) ((/* implicit */int) var_14))) + (var_11))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 307341797U))))))));
    }
}
