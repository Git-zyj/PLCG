/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151166
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
    var_19 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_10))))) ? (((var_0) / (((/* implicit */int) var_10)))) : ((~(var_0)))))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) * (max((((/* implicit */unsigned int) var_15)), (314585669U)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) arr_1 [i_0] [i_1]);
                arr_5 [i_0 + 1] = 3980381636U;
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1])) ? (arr_3 [i_0 - 2] [i_0 - 2] [i_0 + 1]) : (((/* implicit */unsigned long long int) var_17)))))) | (((/* implicit */int) ((((/* implicit */unsigned int) ((int) var_3))) <= (3980381640U))))));
            }
        } 
    } 
}
