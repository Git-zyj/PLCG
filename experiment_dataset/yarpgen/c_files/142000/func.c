/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142000
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)140)) || ((_Bool)1)));
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-72)), (arr_0 [i_0] [i_0])))))))));
        var_21 += ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    var_22 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (796704697U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-72)))))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_8)))))))));
    var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)92))) : (-4054617341967509688LL)));
}
