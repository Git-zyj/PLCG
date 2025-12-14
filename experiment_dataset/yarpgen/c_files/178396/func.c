/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178396
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
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_4 [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_1]))) : (arr_2 [i_0]))), (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_0] [i_0])))));
                var_13 += ((/* implicit */short) (-(var_10)));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
    var_15 = ((/* implicit */unsigned int) var_1);
}
