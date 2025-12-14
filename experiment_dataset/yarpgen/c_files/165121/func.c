/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165121
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
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-76))) % (var_6)))) ? (min((2988516812U), (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-73))))) ? (var_5) : (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        var_19 = ((/* implicit */int) arr_1 [i_0 + 1]);
        var_20 *= ((/* implicit */long long int) ((((/* implicit */_Bool) -410399214)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(signed char)5])) ? (var_3) : (((/* implicit */int) (signed char)75))))))))) : (min((((/* implicit */unsigned int) var_13)), (var_7)))));
    }
}
