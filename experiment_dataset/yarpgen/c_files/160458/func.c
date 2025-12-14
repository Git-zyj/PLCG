/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160458
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
    for (long long int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                var_18 += ((/* implicit */_Bool) min((((/* implicit */long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) (short)20818))))), (((((/* implicit */_Bool) (unsigned short)20703)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-18205))) : (var_3)))))), (((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned int) (_Bool)0))))) ? (((/* implicit */long long int) arr_4 [(short)15])) : (((var_13) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12665))) : (-1116378509245172935LL)))))));
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) var_7);
                var_19 += ((/* implicit */long long int) var_0);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((var_6) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_15))) : (var_5))) : (((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) (signed char)-74))))) ? (((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_3))) : (var_15)))));
}
