/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172298
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
    var_17 = ((/* implicit */unsigned char) min((var_0), (((var_9) < (((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (var_10)))))))));
    var_18 = ((/* implicit */short) (((_Bool)1) ? (1310022619U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_15))) ? (((((/* implicit */int) var_2)) | (((/* implicit */int) var_1)))) : (((((/* implicit */int) var_3)) & (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))))));
                var_19 = ((/* implicit */unsigned int) max((var_19), (((((/* implicit */_Bool) var_5)) ? (min((0U), (((/* implicit */unsigned int) ((arr_0 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) -2113467613)) < (4294967295U)))))))));
                var_20 = ((/* implicit */_Bool) ((((unsigned int) var_6)) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_5 [i_0 + 3] [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) var_4)))))));
            }
        } 
    } 
}
