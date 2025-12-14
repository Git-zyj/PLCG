/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179345
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
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        arr_4 [i_0 - 1] [i_0] = ((/* implicit */unsigned short) var_9);
        var_16 = arr_3 [i_0];
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((-1007002032), (((/* implicit */int) (_Bool)1))))) ? (arr_2 [i_0]) : (-8879396828266929435LL)))) | (arr_0 [i_0]))))));
        arr_5 [i_0] [i_0] = ((/* implicit */int) min((min((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) var_12))));
    }
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_11))));
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) 18446744073709551615ULL))));
    var_20 = ((/* implicit */int) var_15);
}
