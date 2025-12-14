/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169110
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
    var_15 = ((/* implicit */short) var_11);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2635)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 281474976710648ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_2 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_2))))) : (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (((/* implicit */int) (short)2645)) : (((/* implicit */int) min(((short)1449), (((/* implicit */short) arr_0 [i_0])))))))), (((((/* implicit */_Bool) -1)) ? (arr_2 [i_0]) : (((/* implicit */long long int) 67043328))))));
    }
    for (short i_1 = 1; i_1 < 17; i_1 += 1) 
    {
        arr_7 [i_1] [i_1 + 1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((var_8), (((/* implicit */unsigned int) var_6))))), (((((/* implicit */_Bool) arr_5 [i_1 + 1])) ? (arr_5 [i_1 - 1]) : (((/* implicit */unsigned long long int) arr_2 [i_1 - 1]))))));
        arr_8 [i_1 + 1] [i_1 + 1] = ((/* implicit */unsigned char) arr_1 [i_1 + 1]);
    }
    for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 2) 
    {
        arr_13 [i_2] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_5 [i_2 + 1])) ? (17442502176927435446ULL) : (max((var_4), (((/* implicit */unsigned long long int) arr_6 [i_2] [i_2 - 1])))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) * (((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */unsigned long long int) arr_12 [i_2 + 2] [i_2 + 2])) : (arr_11 [i_2 + 2])))))));
        arr_14 [i_2] [12ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_2] [(short)7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((max(((short)-1449), (((/* implicit */short) var_14)))), (((/* implicit */short) arr_10 [i_2 + 1])))))) : (((unsigned long long int) arr_12 [9U] [i_2 + 2]))));
    }
}
