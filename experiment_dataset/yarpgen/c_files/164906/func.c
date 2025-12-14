/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164906
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
    var_17 ^= ((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) var_8)))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (+(var_9))))) ? (((unsigned long long int) ((((/* implicit */_Bool) 600329686756145495LL)) ? (262128) : (((/* implicit */int) (unsigned char)139))))) : (((/* implicit */unsigned long long int) ((var_3) << (((((unsigned long long int) var_3)) - (2108637426ULL))))))));
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (max((max((((/* implicit */unsigned long long int) var_2)), (var_6))), (((/* implicit */unsigned long long int) (short)32767)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    var_20 = ((/* implicit */_Bool) var_16);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) max((max((-1LL), (((/* implicit */long long int) -882266077)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)32767))))) ? (arr_0 [i_0]) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_1 [i_0]))))))))));
        arr_3 [(_Bool)1] [i_0] &= var_9;
    }
}
