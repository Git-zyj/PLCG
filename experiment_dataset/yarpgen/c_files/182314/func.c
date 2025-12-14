/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182314
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
    var_13 = ((/* implicit */long long int) var_7);
    var_14 = ((/* implicit */long long int) min((var_4), (((/* implicit */int) (((((_Bool)0) ? (2147483647) : (1402056568))) > (min((-1156906684), (((/* implicit */int) var_12)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_16 = ((/* implicit */long long int) arr_2 [i_0]);
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0])));
        var_18 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
    }
    var_19 = ((/* implicit */signed char) (~(max((var_10), (((/* implicit */long long int) var_8))))));
}
