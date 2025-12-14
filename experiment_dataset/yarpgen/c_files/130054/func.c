/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130054
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) - (arr_3 [i_0] [i_0])))) ? (((((/* implicit */_Bool) 0ULL)) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((arr_3 [i_0] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_4 [(signed char)6])))))))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) var_2);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (-(var_2))))));
}
