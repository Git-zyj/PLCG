/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119894
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1 - 1] = ((/* implicit */_Bool) var_1);
                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])) ? (((((/* implicit */int) arr_3 [i_1])) % (((/* implicit */int) var_13)))) : ((+(((/* implicit */int) var_8))))))), (min((min((((/* implicit */unsigned long long int) var_7)), (var_10))), (((/* implicit */unsigned long long int) (~(-1LL)))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_8)) ? (1965308667U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (1965308667U)))))) ? ((-(((((/* implicit */_Bool) var_11)) ? (var_6) : (var_5))))) : (((((/* implicit */_Bool) (+(-161787070)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
}
