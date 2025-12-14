/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189137
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
    var_15 &= min((var_2), (((/* implicit */unsigned long long int) ((unsigned int) max(((short)-19343), (((/* implicit */short) var_3)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_10)) : (var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13857590291245969485ULL)) ? (arr_0 [4] [4]) : (((/* implicit */int) arr_1 [i_0])))))))) ? (((/* implicit */int) ((arr_2 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        var_17 = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_0]))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)180)), (arr_2 [i_0])))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)180)))))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) >> ((((-(((/* implicit */int) arr_1 [i_0])))) + (17082)))))) ? (((/* implicit */int) ((signed char) max((var_7), (((/* implicit */unsigned long long int) (unsigned char)80)))))) : ((~(((/* implicit */int) arr_1 [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)76))) - (arr_2 [i_0])))) : (4847326564410878038ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) arr_0 [i_0] [i_0])) : (var_14)))) ? (max((4174209589U), (((/* implicit */unsigned int) (unsigned char)180)))) : (((/* implicit */unsigned int) ((arr_0 [i_0] [i_0]) * (((/* implicit */int) var_12)))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_2 [i_0]))))), (max((var_2), (((/* implicit */unsigned long long int) arr_2 [0U]))))))));
    }
}
