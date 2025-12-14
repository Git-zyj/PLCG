/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168103
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (min((min((((var_4) / (11004833715390351964ULL))), ((~(arr_1 [3ULL]))))), (((arr_0 [i_0]) & (max((var_17), (arr_1 [i_0])))))))));
        var_21 -= min((((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_0]) < (arr_0 [i_0])))), (min((((/* implicit */unsigned long long int) ((arr_0 [i_0]) >= (819418204371428267ULL)))), (((var_0) ^ (var_8))))));
    }
    var_22 = ((/* implicit */unsigned long long int) ((min((var_13), (max((var_17), (var_12))))) == ((~(3935513254800192113ULL)))));
}
