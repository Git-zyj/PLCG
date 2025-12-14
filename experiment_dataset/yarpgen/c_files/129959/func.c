/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129959
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (unsigned short)11533);
        var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)16383)) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16383))) : (var_1))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)62407)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [(unsigned char)5] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)16383))));
        var_19 |= ((((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_16))) + (4294967295U)))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-2242936580595672884LL)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (5844953423861799975ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((unsigned long long int) (unsigned short)1421)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_3 [i_1])))))));
    }
    var_20 = ((/* implicit */long long int) max((max((((/* implicit */int) var_10)), ((+(((/* implicit */int) var_2)))))), (((/* implicit */int) var_7))));
}
