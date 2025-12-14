/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135502
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
    var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_5)))))))) : (max((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32367))) == (4062968431U)));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_1))))))) ? (((((((/* implicit */int) arr_1 [(_Bool)1])) <= (((/* implicit */int) var_2)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32342)) ? (((/* implicit */int) (unsigned short)2047)) : (((/* implicit */int) arr_1 [i_0]))))) : (2738045445U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned int) arr_1 [4U]))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_0])))))))));
        var_11 = ((/* implicit */short) min((min(((((_Bool)0) ? (766905205U) : (231998884U))), (((/* implicit */unsigned int) arr_0 [i_0] [i_0])))), (((/* implicit */unsigned int) ((var_7) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_4)))))))));
    }
}
