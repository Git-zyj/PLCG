/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122930
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)17))) * (((((/* implicit */long long int) 408185762U)) / (-3284278838492628619LL)))));
        var_17 = (signed char)23;
    }
    var_18 |= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) ((((/* implicit */_Bool) 478575006)) || (((/* implicit */_Bool) 884678779U)))))));
}
