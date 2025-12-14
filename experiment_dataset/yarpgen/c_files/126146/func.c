/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126146
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
    var_18 = ((/* implicit */short) var_11);
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */_Bool) max(((short)-15), ((short)-14331)))) && (((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_10))))))) : (((/* implicit */int) var_10)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */short) ((((/* implicit */int) var_7)) - (((((/* implicit */_Bool) 2540644734179431971LL)) ? (((((/* implicit */int) var_10)) + (((/* implicit */int) arr_0 [i_1])))) : (((/* implicit */int) max(((short)31456), (var_7))))))));
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_2))));
            }
        } 
    } 
}
