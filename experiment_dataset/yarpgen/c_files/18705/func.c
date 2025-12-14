/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18705
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) 10U))))))) : (var_3)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) var_4);
                var_21 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 1])) ? (arr_2 [(short)1] [i_1 + 1]) : (arr_2 [7LL] [i_1 - 2])))));
            }
        } 
    } 
}
