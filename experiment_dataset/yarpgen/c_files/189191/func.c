/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189191
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
    var_18 = ((/* implicit */unsigned short) ((var_15) >> (((var_7) - (2854946230U)))));
    var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (var_8)))));
    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) var_14))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_0 [(unsigned short)4]))));
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_5))));
        arr_2 [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
    }
    for (unsigned short i_1 = 2; i_1 < 22; i_1 += 2) 
    {
        var_23 = ((/* implicit */short) min((((((/* implicit */_Bool) 9235048323883058728ULL)) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24902))) : (9607477098212529076ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31))))), (((/* implicit */unsigned long long int) (signed char)97))));
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 2])) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1]))))) : (((((/* implicit */unsigned long long int) 30LL)) ^ (6017335256581191183ULL))))))));
    }
    var_25 = ((/* implicit */long long int) var_11);
}
