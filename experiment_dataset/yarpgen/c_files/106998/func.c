/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106998
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
    var_14 = var_0;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned int) min((var_15), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) * (arr_2 [i_0] [i_1 - 1])))));
                var_16 = min((max((132356757U), (((/* implicit */unsigned int) (unsigned short)0)))), (max((arr_5 [i_0]), (arr_5 [i_0]))));
                arr_6 [18] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)65535)), (var_12)))) ? (((unsigned int) arr_0 [i_0])) : (((var_13) ^ (((/* implicit */unsigned int) arr_0 [i_0])))))), (((((/* implicit */_Bool) (unsigned short)0)) ? (min((arr_1 [i_0] [i_0]), (var_0))) : (min((arr_2 [i_0] [i_1 + 1]), (2841892556U)))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) var_6);
            }
        } 
    } 
}
