/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109239
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
    var_19 = ((/* implicit */signed char) ((((long long int) 301518561U)) / (var_15)));
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_2 [i_0 - 2]))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_2 [i_0 - 1]), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0]))))))) : (((/* implicit */int) (_Bool)1))));
        var_22 = ((/* implicit */short) (_Bool)1);
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) ((_Bool) arr_3 [i_1])))))), (max((((/* implicit */long long int) var_10)), (min((var_6), (((/* implicit */long long int) var_4))))))));
        var_24 = ((/* implicit */unsigned long long int) arr_4 [i_1]);
    }
    var_25 = ((long long int) var_2);
}
