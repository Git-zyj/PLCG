/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152450
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) < (arr_1 [i_0])))))))));
        var_13 = ((/* implicit */unsigned char) (+(4294967283U)));
        var_14 = var_1;
    }
    var_15 = ((/* implicit */long long int) var_2);
}
