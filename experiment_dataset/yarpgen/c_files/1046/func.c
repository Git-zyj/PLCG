/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1046
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
    var_17 = ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) min((((long long int) (+(((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (~(arr_1 [i_0] [i_0]))))));
        var_18 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)62)) ? (var_2) : (var_4)))) & (((((/* implicit */_Bool) (signed char)87)) ? (min((((/* implicit */long long int) (unsigned char)5)), (-4868876555968975374LL))) : (((/* implicit */long long int) ((2273730209U) * (((/* implicit */unsigned int) 1)))))))));
        var_19 = ((/* implicit */int) arr_2 [i_0] [i_0]);
    }
}
