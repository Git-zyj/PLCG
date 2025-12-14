/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157176
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
    var_20 = ((/* implicit */unsigned char) var_11);
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((16918175190698794251ULL), (((((/* implicit */_Bool) 5209040966754313623ULL)) ? (18446744073709551615ULL) : (5430455181742489852ULL)))))) ? (min((min((((/* implicit */unsigned long long int) var_2)), (var_15))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) (_Bool)0))))))) : (((776438802488848348ULL) & (max((16918175190698794257ULL), (((/* implicit */unsigned long long int) var_18))))))));
    var_22 = ((16918175190698794251ULL) >> (((1528568883010757374ULL) - (1528568883010757333ULL))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_23 ^= (~(((((/* implicit */_Bool) var_15)) ? (arr_6 [i_0 + 2] [i_0 + 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
                var_24 = ((/* implicit */long long int) 16918175190698794275ULL);
            }
        } 
    } 
    var_25 ^= ((/* implicit */unsigned long long int) var_9);
}
