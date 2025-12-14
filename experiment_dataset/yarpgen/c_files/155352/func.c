/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155352
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
    var_10 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))), (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23686)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) (_Bool)1);
        var_11 = ((/* implicit */signed char) (+(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)47062))) & (arr_1 [i_0])))));
    }
}
