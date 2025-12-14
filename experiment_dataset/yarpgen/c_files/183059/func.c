/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183059
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
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (signed char)-88))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) min((((((/* implicit */int) var_0)) / (66846720))), (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 + 2])))))))));
        var_19 = ((/* implicit */unsigned long long int) (~(((min((((/* implicit */unsigned int) var_3)), (var_6))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) -2340822713999571016LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_0])))))))));
    }
    var_20 = ((/* implicit */int) var_5);
}
