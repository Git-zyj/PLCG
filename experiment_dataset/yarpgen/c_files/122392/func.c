/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122392
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
    for (long long int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        var_18 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) max((-1LL), (((/* implicit */long long int) (unsigned short)60323))))) ? (((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0 - 2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [(signed char)11]))))));
        var_19 = ((/* implicit */unsigned short) arr_2 [i_0] [i_0 - 2]);
    }
    var_20 *= ((/* implicit */signed char) var_16);
    var_21 = ((/* implicit */unsigned short) var_3);
}
