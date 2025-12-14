/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171750
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
    var_17 = ((/* implicit */int) var_15);
    var_18 = ((/* implicit */unsigned char) var_13);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_7))));
        var_20 = ((/* implicit */int) arr_0 [10] [10]);
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)242))))) : (min((((/* implicit */long long int) var_13)), (arr_1 [i_0]))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)9)) << (((/* implicit */int) (_Bool)1))))) ? (-55300093) : ((~(-55300086)))))))))));
        var_22 = ((/* implicit */long long int) (+((+(arr_0 [i_0] [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_23 = ((/* implicit */short) (_Bool)1);
        var_24 &= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_15)), ((+(14633532800290825024ULL)))));
    }
}
