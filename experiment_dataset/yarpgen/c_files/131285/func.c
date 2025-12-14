/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131285
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
    var_17 = ((/* implicit */int) max((var_17), (var_14)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)12))) % (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
        var_19 = ((/* implicit */int) ((short) (~(((/* implicit */int) arr_1 [i_0])))));
        var_20 = ((/* implicit */signed char) (((~(var_14))) | (((((/* implicit */int) arr_3 [i_0])) * (((/* implicit */int) var_1))))));
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) var_11);
        var_22 = ((/* implicit */short) (+(max((((/* implicit */int) min((((/* implicit */short) var_7)), (var_13)))), (max((arr_4 [i_1]), (arr_4 [i_1])))))));
    }
}
