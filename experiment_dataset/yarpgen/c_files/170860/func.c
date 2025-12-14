/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170860
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_9))));
                arr_6 [13ULL] [(short)4] [i_1] = ((/* implicit */long long int) (-(arr_2 [i_1])));
                arr_7 [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_1]) : (arr_2 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) < (arr_2 [i_1])))))));
                arr_8 [i_1] = ((/* implicit */int) ((arr_3 [i_0]) ^ (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_14)))))))));
            }
        } 
    } 
    var_18 -= ((((/* implicit */_Bool) ((int) max((var_4), (((/* implicit */int) var_5)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) | (var_6))) : (((((/* implicit */_Bool) var_13)) ? (max((var_10), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_16) : (var_2)))))));
    var_19 += ((/* implicit */int) ((unsigned long long int) var_0));
}
