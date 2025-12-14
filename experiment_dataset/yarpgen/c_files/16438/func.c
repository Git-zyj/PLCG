/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16438
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_8);
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) && ((!(((/* implicit */_Bool) var_8))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_16 = ((/* implicit */long long int) arr_5 [i_1]);
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 13231894325308416861ULL)) ? (((/* implicit */unsigned long long int) -7743446798488276829LL)) : (9003739307777177857ULL)));
    }
    var_18 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_9)) : (((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */long long int) var_5)))))), (((/* implicit */long long int) (+(((/* implicit */int) var_2)))))));
    var_19 ^= (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (unsigned char)64)))))))));
}
