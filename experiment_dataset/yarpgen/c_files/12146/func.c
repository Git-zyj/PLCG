/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12146
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
    var_13 = ((/* implicit */signed char) var_5);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */int) var_8);
        var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
        arr_5 [i_0] = ((/* implicit */unsigned short) (-(arr_2 [i_0])));
    }
    var_15 = ((/* implicit */signed char) var_3);
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) ((signed char) var_0))), (((((/* implicit */_Bool) 1326683669)) ? (((/* implicit */unsigned long long int) var_11)) : (var_1)))))))));
}
