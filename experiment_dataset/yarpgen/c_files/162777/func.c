/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162777
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)200))))) & (min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) > (var_6)))), (((((/* implicit */int) var_9)) * (((/* implicit */int) var_2))))))));
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((unsigned char) var_2)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */_Bool) ((unsigned char) ((((arr_0 [i_0] [i_0 + 1]) + (9223372036854775807LL))) << (((((arr_0 [i_0 + 1] [i_0 + 1]) + (9135038154622184544LL))) - (54LL))))));
                arr_5 [(_Bool)1] [i_0] [i_1 - 2] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_1 + 1] [i_0 + 1]);
                var_16 = ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1 - 1])) - (((((/* implicit */int) arr_3 [i_0])) - (((/* implicit */int) arr_3 [i_0 + 1]))))));
            }
        } 
    } 
    var_17 = (!(var_11));
}
