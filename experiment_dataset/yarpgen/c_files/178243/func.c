/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178243
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
    var_14 = ((short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_12)), ((unsigned short)24999)))) ? (((((/* implicit */_Bool) (unsigned short)40546)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (unsigned short)24999))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
                var_15 = ((/* implicit */_Bool) (-((-(((/* implicit */int) ((((/* implicit */int) (unsigned short)24999)) < (((/* implicit */int) arr_0 [i_0])))))))));
                var_16 = ((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1]);
            }
        } 
    } 
}
