/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16921
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
    for (signed char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        var_18 = ((/* implicit */_Bool) max((var_18), (((_Bool) ((unsigned char) arr_2 [(_Bool)1])))));
        arr_3 [i_0 + 1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (short)24673)), (max((arr_1 [i_0 - 2]), (arr_1 [i_0 - 1])))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (short)-24673)) ? (((/* implicit */int) (short)-24674)) : (((/* implicit */int) (short)27497))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)224))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)31))))) : (((unsigned int) 0U)))))))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (~(-1549904772)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-24673)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))) : (((-4179651795391887650LL) & (((/* implicit */long long int) 0))))))) : (max((((/* implicit */unsigned long long int) var_14)), (max((var_13), (((/* implicit */unsigned long long int) arr_2 [i_0 - 2]))))))));
    }
    var_21 ^= ((/* implicit */_Bool) 3567381579U);
}
