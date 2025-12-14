/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140941
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
    for (unsigned long long int i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        var_19 = ((/* implicit */long long int) ((signed char) ((min((arr_1 [i_0]), (arr_2 [i_0]))) / (((/* implicit */unsigned long long int) max((arr_0 [i_0]), (((/* implicit */long long int) var_4))))))));
        var_20 = (-(var_8));
        arr_4 [i_0] = ((min((arr_1 [i_0 - 3]), (arr_1 [i_0 - 3]))) - ((-(arr_1 [i_0 + 1]))));
    }
    var_21 = ((/* implicit */_Bool) max((var_21), (var_18)));
    var_22 = ((var_13) ? ((((_Bool)1) ? (((/* implicit */int) var_0)) : (max((-1388637628), (((/* implicit */int) (_Bool)0)))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((15666417665298611792ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)52)))))) : ((+(((/* implicit */int) var_2)))))));
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11034214093043495995ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((max((var_17), (((/* implicit */unsigned long long int) var_7)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
}
