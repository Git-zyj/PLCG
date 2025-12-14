/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134389
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
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [(signed char)0] [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                arr_6 [i_0] [i_1] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (min((((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (arr_4 [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned long long int) (-(var_5)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))));
                var_16 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (var_3)))) ? (18446744073709551615ULL) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_14)) : (arr_4 [i_1] [i_0])))))) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_2 [i_1])) : (var_14))))))));
            }
        } 
    } 
}
