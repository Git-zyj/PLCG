/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185228
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
    var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (var_7)))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-24)))) : (((/* implicit */int) var_8)))) % ((+((-(((/* implicit */int) var_12))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) arr_1 [i_0 + 1]))));
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((unsigned long long int) arr_3 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 2] [i_0 + 2])))))) : (var_0)));
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) arr_3 [i_0 + 1]))));
            }
        } 
    } 
}
