/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180082
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
    var_16 = ((/* implicit */long long int) var_15);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_2)))) ? (min((1069428626), (1069428626))) : ((-(((/* implicit */int) var_10))))));
                var_18 &= ((/* implicit */signed char) var_10);
                arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) min((var_13), (var_11)))) : (min((((/* implicit */long long int) var_11)), (var_8)))));
                arr_7 [i_0] [i_1 - 1] &= min((((/* implicit */long long int) (~(((/* implicit */int) var_6))))), (min((((/* implicit */long long int) var_10)), (var_4))));
            }
        } 
    } 
    var_19 = var_8;
    var_20 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_10))))));
}
