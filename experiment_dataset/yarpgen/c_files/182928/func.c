/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182928
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
    var_12 = ((/* implicit */signed char) ((((int) ((int) var_4))) / (((/* implicit */int) var_5))));
    var_13 = min((((/* implicit */int) var_5)), (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))), (((((/* implicit */int) var_9)) / (var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_9)) / (((/* implicit */int) var_10))))))) ? (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63))) * (15076454941278827484ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
                var_14 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1726))) : ((+(arr_0 [i_0]))))));
                var_15 *= ((/* implicit */unsigned int) var_3);
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) var_7);
}
