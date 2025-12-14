/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127857
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (min((18446744073709551615ULL), (18446744073709551615ULL)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */int) arr_3 [i_1]);
                arr_8 [i_1] [i_0] = ((int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) arr_2 [i_1])) : (((unsigned long long int) arr_3 [i_0]))));
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) arr_6 [i_0] [i_1]))));
                arr_9 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((unsigned int) var_3)) : (arr_3 [i_0])))) ? (max((min((((/* implicit */unsigned long long int) var_3)), (18446744073709551615ULL))), ((-(1ULL))))) : (min((arr_1 [i_0]), (18446744073709551590ULL)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_5))))));
    var_18 = (+(18446744073709551614ULL));
    var_19 = ((/* implicit */int) (+(((long long int) var_10))));
}
