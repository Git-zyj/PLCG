/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188049
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
    for (long long int i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_18 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_8)), (arr_0 [i_1] [i_1]))))));
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((arr_2 [6U] [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))))) + (((((/* implicit */_Bool) ((var_14) - (-1911040889760148496LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (1911040889760148470LL)))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max((((/* implicit */long long int) (~(var_11)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-1911040889760148496LL)))) ? (((/* implicit */long long int) var_7)) : (((var_12) << (((((/* implicit */int) var_4)) - (151))))))))))));
}
