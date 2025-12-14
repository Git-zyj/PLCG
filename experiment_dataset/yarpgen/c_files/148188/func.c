/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148188
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
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned short) var_2)))))));
    var_12 = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) (unsigned short)45844)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))) >> (((((/* implicit */int) var_4)) - (144))))), (((/* implicit */int) var_4))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((2915335229754425687LL) >> (((((/* implicit */int) arr_0 [i_0] [(short)7])) - (56155))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)190)) : (((/* implicit */int) (unsigned char)43))))))), (((/* implicit */long long int) min(((-(((/* implicit */int) arr_1 [i_0 - 1])))), (((/* implicit */int) max((var_7), (var_6)))))))));
        var_13 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) max((-5639416221646143152LL), (((/* implicit */long long int) (unsigned short)39361))))))));
    }
}
