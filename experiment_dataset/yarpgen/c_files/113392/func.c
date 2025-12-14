/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113392
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
    var_15 = ((/* implicit */short) var_1);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] = arr_0 [(unsigned short)15] [i_0];
        var_16 = ((/* implicit */unsigned long long int) var_3);
    }
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) min((var_13), (((/* implicit */short) var_9))))) : ((-(((/* implicit */int) (unsigned char)16))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)254)), (0ULL)))))))));
}
