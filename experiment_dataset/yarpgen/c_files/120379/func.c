/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120379
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
    var_18 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_10)) / (var_16)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_19 ^= ((/* implicit */short) (_Bool)1);
        arr_2 [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) & (((((/* implicit */_Bool) 4221199908U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_10)))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */short) min((max((((((/* implicit */_Bool) var_9)) ? (var_4) : (var_9))), (((/* implicit */unsigned long long int) max((((/* implicit */short) arr_4 [i_1])), (arr_1 [i_1] [i_1])))))), (((/* implicit */unsigned long long int) var_10))));
        var_20 = (~((+(((/* implicit */int) (_Bool)1)))));
        var_21 = ((/* implicit */unsigned int) ((min((arr_0 [i_1 - 1] [i_1 - 2]), (arr_0 [i_1 - 2] [i_1 + 2]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_1 + 2] [i_1 - 3])) : (((/* implicit */int) arr_0 [i_1 + 2] [i_1 - 3]))))));
        var_22 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)1075))))) ? (((/* implicit */int) ((unsigned char) arr_3 [i_1]))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_4 [i_1]))))))), (((/* implicit */int) ((signed char) var_0)))));
    }
    var_23 ^= ((/* implicit */unsigned int) var_14);
    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) max((min((((/* implicit */unsigned int) (_Bool)1)), (73767394U))), (var_6))))));
    var_25 = ((/* implicit */signed char) min((min((((/* implicit */long long int) var_2)), (((long long int) (short)1088)))), (((/* implicit */long long int) ((((((/* implicit */int) (short)-1075)) + (2147483647))) >> (((((/* implicit */int) (short)1077)) - (1052))))))));
}
