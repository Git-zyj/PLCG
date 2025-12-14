/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148112
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
    var_17 = ((/* implicit */int) min((((((/* implicit */_Bool) max((((/* implicit */int) var_0)), (var_11)))) ? (((/* implicit */unsigned long long int) var_11)) : (min((((/* implicit */unsigned long long int) (signed char)77)), (16872794716576868006ULL))))), (((/* implicit */unsigned long long int) var_0))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_0]))))) && (((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1] [i_0] [i_0])) ? (((((/* implicit */int) ((unsigned short) var_9))) * (((/* implicit */int) arr_0 [i_0])))) : (var_10)));
            arr_5 [i_1] [i_0] = ((/* implicit */long long int) 0);
        }
    }
}
