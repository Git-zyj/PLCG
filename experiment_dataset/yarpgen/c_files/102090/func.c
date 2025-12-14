/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102090
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
    var_17 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */long long int) arr_4 [i_1]);
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_0 [i_0] [i_0 + 1]))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 3])) : (((/* implicit */int) arr_0 [i_0] [i_0 + 1])))) : ((-(((/* implicit */int) arr_0 [i_0] [i_0 - 2]))))));
                var_19 = ((/* implicit */signed char) arr_0 [i_0] [i_0 + 1]);
                var_20 = ((/* implicit */unsigned char) ((_Bool) (signed char)-1));
            }
        } 
    } 
    var_21 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (min((var_15), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_8)))))));
}
