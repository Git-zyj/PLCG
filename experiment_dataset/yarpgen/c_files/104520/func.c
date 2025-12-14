/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104520
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))), (min(((~(arr_0 [i_1] [i_1]))), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_2]))))));
                    arr_7 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */long long int) ((arr_0 [i_0] [i_0]) >= (((/* implicit */unsigned long long int) var_17)))))));
                }
            } 
        } 
    } 
    var_19 = min((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)36502)))) ? (((/* implicit */unsigned long long int) var_6)) : (((var_2) - (((/* implicit */unsigned long long int) var_14)))))), (((/* implicit */unsigned long long int) var_9)));
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_2))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_1)))))))) ? (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) | (var_16))))) : (((/* implicit */unsigned long long int) var_17))));
}
