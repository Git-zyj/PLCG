/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136622
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
    var_19 = ((/* implicit */_Bool) (+(max((((/* implicit */int) ((var_12) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))), ((-(((/* implicit */int) var_2))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) ((unsigned short) var_0));
                var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((((((/* implicit */int) var_16)) * (((/* implicit */int) var_16)))), ((-(((/* implicit */int) arr_2 [i_0] [i_0]))))))) == ((-(arr_5 [i_1 + 1] [i_0 - 2])))));
            }
        } 
    } 
}
