/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140310
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
    var_20 = ((/* implicit */signed char) max((((var_17) ? ((~(var_7))) : (max((((/* implicit */unsigned long long int) var_1)), (1ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) var_0))) % (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_17))) ? (arr_1 [i_0] [i_0]) : (((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_6))))) ? (max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))) : ((~(((/* implicit */int) var_5))))))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_2 [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) : ((((_Bool)1) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26)))))));
        var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
        var_24 = max((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) min((var_8), (((/* implicit */int) var_19)))))))), (((int) min((((/* implicit */int) var_2)), (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_1] [i_1]))) ? (17635576775194675619ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((int) var_8)))))));
        var_26 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_1])), (var_0))))));
    }
}
