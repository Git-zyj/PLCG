/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152895
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
    var_12 = min((((((/* implicit */_Bool) ((var_3) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((var_9) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_6))))))), (((/* implicit */int) var_4)));
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) var_0))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((var_5) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1)) && (((/* implicit */_Bool) 3096590451U)))))))))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) -1LL))))) * (((/* implicit */int) max((arr_1 [(short)1] [i_0]), (((/* implicit */signed char) arr_0 [i_0])))))));
        var_16 = ((/* implicit */signed char) arr_0 [i_0]);
    }
    var_17 |= ((/* implicit */signed char) ((((/* implicit */int) var_11)) | (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)15))))))));
}
