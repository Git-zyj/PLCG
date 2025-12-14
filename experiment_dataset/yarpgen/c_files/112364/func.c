/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112364
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_11)))))) : (max((((/* implicit */unsigned long long int) var_0)), (var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_8)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [(signed char)4] [i_0] &= ((/* implicit */short) ((6U) / (4294967291U)));
        arr_4 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))));
        arr_5 [i_0] = ((/* implicit */short) ((unsigned short) ((4U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)235))))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 13; i_1 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) var_5))));
        var_14 = ((short) (!(((/* implicit */_Bool) 4294967291U))));
        arr_8 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_10))))));
    }
    var_15 = ((/* implicit */unsigned long long int) var_6);
}
