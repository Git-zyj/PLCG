/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123962
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
    var_14 |= ((/* implicit */unsigned int) var_5);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                var_15 += ((/* implicit */signed char) ((((/* implicit */int) ((arr_1 [i_0 + 2] [i_1 + 1]) <= (arr_1 [i_0 + 2] [i_1 + 2])))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_1 + 1])) || (((/* implicit */_Bool) arr_2 [i_0 + 2])))))));
                var_16 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1])) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1 - 2])) ? (((/* implicit */long long int) var_5)) : (arr_2 [i_1])))) ? ((+(arr_1 [i_0] [i_0]))) : (((int) arr_3 [i_1] [i_1]))))));
                arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1] |= ((/* implicit */_Bool) arr_2 [i_1 - 1]);
                var_17 = ((/* implicit */unsigned int) ((int) ((arr_4 [i_0 + 2] [i_0]) ? (arr_0 [i_0 + 2] [i_1 - 1]) : (arr_0 [i_1] [4LL]))));
                var_18 = ((/* implicit */unsigned short) min((((/* implicit */int) (signed char)48)), (2067314805)));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned short) var_8))))) ? (((/* implicit */int) var_3)) : (var_6)))))));
}
