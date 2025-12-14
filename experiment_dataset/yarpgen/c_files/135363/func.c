/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135363
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
    var_16 = ((/* implicit */unsigned int) var_8);
    var_17 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((1137037560052066697LL) << (((var_8) - (908552523))))) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (1260719010) : (((/* implicit */int) (unsigned short)20612))))))))));
    var_18 = ((/* implicit */signed char) ((unsigned int) min((var_13), (((/* implicit */unsigned long long int) var_0)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_9)), (var_12)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_1 [i_0])))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_1 [i_0])) : (var_1))))))));
        var_20 = ((/* implicit */int) (~(var_3)));
        var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 3])))) | ((~(((/* implicit */int) arr_1 [i_0 - 3]))))));
    }
}
