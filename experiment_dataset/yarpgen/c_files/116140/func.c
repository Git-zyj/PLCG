/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116140
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
    var_18 ^= ((/* implicit */signed char) var_7);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(5325150980532239803LL)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) >= (arr_0 [i_0])))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (var_5)))));
        var_20 ^= ((/* implicit */unsigned short) ((4294967295U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18153)))));
        var_21 = (+(var_11));
        var_22 |= ((/* implicit */signed char) var_11);
        var_23 = (+(((/* implicit */int) var_0)));
    }
    var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) (unsigned char)240)), (4294967287U))), (((/* implicit */unsigned int) (signed char)121))))) == (15555696929044830550ULL)));
    var_25 = ((/* implicit */unsigned short) ((0ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_16)), (var_13)))) ? (((/* implicit */int) var_7)) : ((-(var_13))))))));
}
