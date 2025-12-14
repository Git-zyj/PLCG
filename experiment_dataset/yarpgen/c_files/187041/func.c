/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187041
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))) - (((/* implicit */int) var_8))))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned short) max((max((arr_2 [i_0 - 1]), (arr_2 [i_0 - 1]))), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) || (((/* implicit */_Bool) arr_2 [i_0 - 1])))))));
                arr_5 [i_0 - 1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_2 [i_0 - 1])), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1])))))));
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) max((arr_2 [i_0]), (arr_4 [i_0])))) * (((((/* implicit */int) arr_2 [10U])) / (((/* implicit */int) arr_4 [i_0 - 1]))))))) || (((/* implicit */_Bool) ((arr_1 [i_1 + 1]) ? (((/* implicit */int) min((((/* implicit */signed char) arr_1 [i_0])), (arr_4 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1]))))))))));
                var_17 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) max((arr_0 [i_1]), (((/* implicit */unsigned int) arr_4 [i_0]))))), (((arr_3 [i_0] [10]) ^ (((/* implicit */unsigned long long int) arr_0 [i_1])))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))) + (((arr_3 [i_1] [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))))));
            }
        } 
    } 
}
