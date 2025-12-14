/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11838
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
    var_11 = ((/* implicit */short) var_3);
    var_12 += ((((/* implicit */int) (signed char)116)) >> (((-13) + (16))));
    var_13 = ((/* implicit */unsigned long long int) max((var_6), (var_7)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 - 1])) | (((/* implicit */int) (!(var_3))))));
        var_14 = ((/* implicit */int) arr_0 [i_0]);
    }
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_10))));
}
