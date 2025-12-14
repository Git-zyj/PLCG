/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160330
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_12 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((997394074U), (((/* implicit */unsigned int) (short)-1))))) ? (((/* implicit */long long int) -1)) : (var_1))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) var_5))))) ? (min((((/* implicit */int) var_5)), (var_2))) : (((/* implicit */int) var_10)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (((-(max((var_3), (((/* implicit */int) var_8)))))) & (((6) >> (((3297573221U) - (3297573196U)))))));
    }
    var_13 = max((((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), ((-(((/* implicit */int) var_9))))))), (((2909361294U) << (((-7) + (28))))));
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min(((-(var_6))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_6)) <= (var_7))))))) <= (((min((((/* implicit */unsigned long long int) var_6)), (var_7))) << (((max((var_7), (((/* implicit */unsigned long long int) var_6)))) - (13937350087642151091ULL)))))));
    var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((618282663U), (3676684653U)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) != (var_1))))))) : (((((/* implicit */_Bool) min((((/* implicit */short) var_4)), (var_8)))) ? (((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) && (((/* implicit */_Bool) var_1))))))))));
}
