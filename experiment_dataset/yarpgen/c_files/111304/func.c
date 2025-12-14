/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111304
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (+(((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1)))))));
        var_14 = ((/* implicit */short) (signed char)-97);
    }
    var_15 = var_6;
    var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7369314696689037073LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)73))) : (3711672582316154308LL)))), (((((/* implicit */_Bool) (unsigned char)236)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    var_17 &= (-(((((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) 288230376151580672LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_13))))));
}
