/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107121
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
    var_17 = ((/* implicit */short) var_7);
    var_18 = ((/* implicit */_Bool) var_6);
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) var_8)) == (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) || (((/* implicit */_Bool) var_4)))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                var_20 -= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (var_11)))));
                arr_6 [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) var_11)) / (var_0))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_11)) > (var_4)))))));
            }
        } 
    } 
}
