/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148055
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
    var_11 = (-(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))));
    var_12 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (((min(((_Bool)1), ((_Bool)1))) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
    var_13 = ((((((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (var_7)))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (8144359014346956093ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_7)) : (var_6)))))) - (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((1243347109) - (-307865384)))) + (max((var_2), (var_2)))))));
    var_14 += ((/* implicit */unsigned int) var_1);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((((var_0) >> (((((/* implicit */int) var_8)) + (117))))) << (((min((((/* implicit */int) arr_3 [i_0] [i_0])), (arr_1 [i_0]))) + (1003466026)))))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) 1254265531U)) ? (-1039110688) : (((/* implicit */int) arr_2 [i_0]))))))) ? (max(((-(arr_1 [i_0]))), (arr_1 [i_0]))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0]))) == (((arr_0 [i_0]) / (var_6))))))));
    }
}
