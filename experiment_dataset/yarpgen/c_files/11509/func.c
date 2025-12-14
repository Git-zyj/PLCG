/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11509
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
    var_16 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0 + 3] [i_0 + 4] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0]))) : (((arr_2 [i_0 - 2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
        var_17 ^= ((/* implicit */long long int) ((arr_1 [i_0 + 1] [i_0 - 1]) ? (max((((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_0 + 1])), (arr_2 [i_0 + 3]))) : (((/* implicit */unsigned long long int) ((long long int) arr_2 [i_0 + 2])))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0]))));
        var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0 - 1]))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0 + 4])))))));
    }
    var_19 = (short)11983;
}
