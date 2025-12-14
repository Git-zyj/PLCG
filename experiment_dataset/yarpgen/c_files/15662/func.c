/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15662
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] = var_9;
        var_11 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
    }
    for (unsigned int i_1 = 3; i_1 < 13; i_1 += 2) 
    {
        var_12 = ((/* implicit */short) ((((/* implicit */long long int) var_10)) < ((((!(((/* implicit */_Bool) arr_5 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (max((var_2), (var_2)))))));
        var_13 = ((/* implicit */int) var_3);
        arr_7 [i_1 + 2] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_7)))) ? (var_10) : (((/* implicit */int) ((var_2) == (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))))))));
    }
    for (int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        arr_10 [i_2] [i_2] = var_5;
        arr_11 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (arr_2 [i_2] [i_2]) : (arr_2 [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_2] [(unsigned short)10])) : (((/* implicit */int) arr_0 [i_2] [(short)10]))))) : (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2]))) : (var_8))), (((/* implicit */unsigned long long int) ((unsigned int) arr_9 [i_2] [i_2])))))));
    }
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (var_8)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_6))))) : (((((/* implicit */long long int) var_1)) - (var_2)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 312754254087124528LL))))) * (min((var_10), (((/* implicit */int) var_9))))))) : ((~(max((((/* implicit */unsigned long long int) var_1)), (var_8)))))));
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) 483252881U)) ? (20U) : (259752061U))))));
}
