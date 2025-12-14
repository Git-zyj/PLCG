/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101280
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
    var_16 = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) max((var_15), (((/* implicit */short) var_8))))), (min((var_14), (var_1)))))));
    var_17 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_18 = ((/* implicit */_Bool) max((((unsigned int) ((signed char) arr_0 [i_0] [i_0]))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 17051285715899137805ULL)) && ((_Bool)0))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_6))))) : (((/* implicit */int) var_0)))))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_13)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_1)));
    }
    for (unsigned int i_1 = 2; i_1 < 12; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) 17051285715899137805ULL);
        var_20 = ((/* implicit */int) var_11);
    }
}
