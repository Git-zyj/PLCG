/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126701
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
    var_19 = ((/* implicit */unsigned int) var_16);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 2])) || (((/* implicit */_Bool) arr_3 [i_0 - 1]))))) * (((/* implicit */int) min(((short)32733), (((/* implicit */short) var_0)))))));
                var_20 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0 - 1])) << (((54420543) - (54420528)))))) / (min((((/* implicit */unsigned int) arr_4 [i_0 - 1])), (arr_2 [i_0 - 1])))));
                arr_6 [i_1] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0 - 1]))))) ? (((var_11) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((var_16) <= (((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [(unsigned short)1])))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 2]))));
                var_21 = ((/* implicit */unsigned long long int) var_11);
            }
        } 
    } 
    var_22 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) ((var_0) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))))));
}
