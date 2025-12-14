/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152242
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
    var_15 = ((/* implicit */long long int) ((unsigned long long int) var_5));
    var_16 = ((/* implicit */long long int) max((var_16), (var_13)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [0])) ? (((/* implicit */long long int) ((int) arr_1 [i_0] [i_0 - 2]))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) arr_0 [i_0 - 2])) : (arr_1 [i_0] [(_Bool)0])))))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */long long int) arr_0 [i_0 - 1])) : (arr_1 [i_0 - 1] [i_0 + 1]))) : (((/* implicit */long long int) ((int) arr_1 [i_0 - 2] [i_0 + 1])))));
        arr_4 [1U] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_1 [(_Bool)1] [i_0]))) ? (((/* implicit */long long int) ((unsigned int) arr_3 [(unsigned short)7]))) : (((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (arr_1 [(unsigned short)0] [i_0 + 1]) : (((/* implicit */long long int) arr_0 [i_0 - 1]))))));
        var_18 |= ((unsigned int) arr_3 [i_0]);
        arr_5 [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((arr_0 [i_0 - 3]) <= (((/* implicit */int) arr_3 [i_0])))))));
    }
}
