/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162130
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
    var_10 = var_8;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */int) arr_1 [i_0]);
        var_11 = ((/* implicit */int) min((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_0 [i_0 - 1]) : (((/* implicit */long long int) var_7))))));
    }
    var_12 = ((/* implicit */signed char) ((((/* implicit */int) ((short) ((unsigned int) var_2)))) * (min((((/* implicit */int) var_1)), (((((/* implicit */int) (_Bool)1)) % (var_7)))))));
    var_13 = ((/* implicit */int) ((signed char) min((min((var_5), (((/* implicit */int) (short)20887)))), (((/* implicit */int) var_4)))));
}
