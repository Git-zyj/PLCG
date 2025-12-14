/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171559
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        var_17 = ((/* implicit */_Bool) var_1);
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_5))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) var_4);
        var_20 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((arr_4 [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) (short)15)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) var_7)))), (((((/* implicit */int) arr_3 [i_1] [i_1])) + (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_1]))))))));
    }
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (min((((/* implicit */unsigned long long int) var_12)), (((var_3) << (((min((var_15), (((/* implicit */unsigned long long int) var_4)))) - (9992058580330650347ULL)))))))));
}
