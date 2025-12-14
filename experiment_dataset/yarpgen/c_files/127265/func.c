/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127265
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
    var_13 = ((/* implicit */short) min((var_5), (((/* implicit */long long int) (+(((/* implicit */int) var_8)))))));
    var_14 = ((/* implicit */long long int) var_1);
    var_15 = ((/* implicit */long long int) (+(((unsigned long long int) var_1))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_16 += ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-14)));
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_3 [i_1]))))), (((unsigned int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (min((((/* implicit */unsigned int) var_8)), (arr_2 [i_1]))) : (min((var_2), (((/* implicit */unsigned int) (_Bool)1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_8))))));
                var_18 = ((/* implicit */signed char) min((((/* implicit */long long int) (+(var_2)))), (arr_3 [i_0])));
            }
        } 
    } 
}
