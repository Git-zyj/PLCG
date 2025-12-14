/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119562
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))) : (var_8))) : ((~(var_8)))))) ? (min((((((/* implicit */unsigned long long int) var_8)) / (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_15)) : (var_8)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                    var_17 |= ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_2])), (var_13))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), (arr_2 [i_1] [i_2]))))))))));
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (((~(((/* implicit */int) var_14)))) < ((-(((/* implicit */int) arr_2 [i_0] [i_1]))))))) : (((/* implicit */int) var_2))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (max((var_10), (((/* implicit */unsigned long long int) var_3))))))) ? (min(((~(var_13))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
}
