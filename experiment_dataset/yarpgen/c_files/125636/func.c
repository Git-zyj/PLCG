/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125636
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_1 [i_0]))))) ? (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))), (var_8))) : (((/* implicit */unsigned long long int) (~(var_7))))));
        var_14 = ((/* implicit */int) var_7);
    }
    var_15 = ((/* implicit */unsigned long long int) (_Bool)0);
    var_16 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)52519))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)31)) || (((/* implicit */_Bool) var_6)))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_4))))));
    var_17 = ((/* implicit */long long int) (unsigned char)23);
}
