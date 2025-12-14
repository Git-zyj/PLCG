/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185864
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
    var_12 = ((/* implicit */unsigned char) var_10);
    var_13 = ((/* implicit */unsigned char) var_10);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) min((max((((/* implicit */unsigned char) arr_1 [i_0])), (min(((unsigned char)249), ((unsigned char)33))))), (((/* implicit */unsigned char) (_Bool)1))));
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) 0U))));
        var_16 ^= ((/* implicit */signed char) max((max((((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) arr_1 [i_0])))))), (((int) min((((/* implicit */int) (_Bool)1)), (543190514))))));
    }
}
