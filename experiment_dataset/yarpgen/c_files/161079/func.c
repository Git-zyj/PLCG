/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161079
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
    var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) / (var_9)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (max((((/* implicit */unsigned long long int) var_0)), (19ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) (short)-16450)) : (((/* implicit */int) (short)16449))))))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_2 [i_0] [i_0]))))))))));
        var_19 += arr_0 [i_0] [i_0];
    }
}
