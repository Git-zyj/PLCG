/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188848
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
        arr_3 [i_0] = ((int) (unsigned short)26);
        var_12 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)0)), (arr_2 [12U])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(unsigned short)2])) || (((/* implicit */_Bool) arr_2 [10LL]))))) : (((((/* implicit */_Bool) (unsigned short)24426)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)-1))))))) ? (min((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) arr_1 [10LL])) : (arr_2 [(short)10])))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_0 [i_0]) : (-4771616527271908335LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    }
    var_13 += ((/* implicit */unsigned long long int) var_6);
    var_14 += ((/* implicit */int) ((long long int) (unsigned short)20));
}
