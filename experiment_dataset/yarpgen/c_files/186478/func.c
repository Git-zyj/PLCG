/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186478
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
    var_11 = ((/* implicit */unsigned long long int) 1474398441);
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) max(((~(1474398441))), ((~(((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1]))))));
        var_12 += var_9;
    }
    for (long long int i_1 = 1; i_1 < 18; i_1 += 4) 
    {
        var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1423)) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (min((var_7), (((/* implicit */long long int) ((unsigned int) 1474398441))))));
        var_14 = ((/* implicit */_Bool) max((max((((/* implicit */int) ((short) 1474398441))), (max((-1474398442), (((/* implicit */int) var_8)))))), (((/* implicit */int) arr_5 [i_1 + 3] [2ULL]))));
    }
    var_15 -= ((/* implicit */short) 0LL);
}
