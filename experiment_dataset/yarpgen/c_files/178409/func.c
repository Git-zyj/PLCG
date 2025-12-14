/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178409
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) ((var_6) / (10469719080211435191ULL)));
        var_21 = 5ULL;
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 7647133341866399719ULL)) ? (3159279475389059464ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (~(7647133341866399731ULL)));
    }
    var_22 = ((/* implicit */signed char) max((var_22), (var_9)));
}
