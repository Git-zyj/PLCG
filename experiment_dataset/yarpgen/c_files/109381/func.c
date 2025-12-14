/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109381
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
    var_11 += ((/* implicit */long long int) 2684575700U);
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((6668975474205671649ULL) * (576460752303423488ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 0LL)))))))) ? (var_7) : (var_1))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(-8950071453470847566LL)))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (arr_1 [i_0] [i_0 - 1]))) : (((/* implicit */unsigned long long int) arr_2 [i_0]))));
        var_14 *= ((/* implicit */unsigned int) (~(max((3523694400412640598ULL), (((/* implicit */unsigned long long int) arr_2 [12LL]))))));
    }
}
