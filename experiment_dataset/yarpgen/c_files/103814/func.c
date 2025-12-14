/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103814
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        var_12 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) (short)19330))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((int) var_11));
    }
    for (unsigned char i_1 = 3; i_1 < 18; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */short) 2500636572U);
        arr_8 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 3])) ? (((/* implicit */long long int) var_11)) : (7957412001493027810LL)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-19338))))) : (((unsigned int) var_1)));
    }
    var_13 = ((/* implicit */unsigned int) max((var_13), ((+(((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_7)) ? (var_7) : (764555737U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))))))));
    var_14 ^= ((/* implicit */unsigned long long int) var_10);
}
