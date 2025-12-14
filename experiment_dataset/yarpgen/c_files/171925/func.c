/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171925
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
    var_10 ^= ((/* implicit */short) (unsigned char)254);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_3 [(signed char)17] = ((/* implicit */unsigned int) max(((+(15458045955441912757ULL))), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))));
        var_11 = ((/* implicit */unsigned long long int) (~(((int) arr_1 [i_0]))));
    }
    var_12 ^= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((short) var_2))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))));
    var_13 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) min((2988698118267638858ULL), (((/* implicit */unsigned long long int) var_6))))))));
    var_14 = ((/* implicit */short) max((var_0), (max((var_2), (max((var_3), (4294967295U)))))));
}
