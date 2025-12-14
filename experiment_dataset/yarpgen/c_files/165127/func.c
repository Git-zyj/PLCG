/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165127
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
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-23898)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2147483648U)) && (((/* implicit */_Bool) var_11)))))) : (max((var_5), (((/* implicit */long long int) var_2)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_19 = ((/* implicit */short) (signed char)116);
    }
    var_20 = ((/* implicit */unsigned char) var_12);
    var_21 += ((/* implicit */unsigned int) var_4);
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)2)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_16))))))) ? ((+(3819195252554994830LL))) : (((/* implicit */long long int) var_1))));
}
