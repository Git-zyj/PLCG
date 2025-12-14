/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14341
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_10 += ((/* implicit */unsigned long long int) arr_5 [i_1 - 1]);
                var_11 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (_Bool)1)) / (arr_5 [i_0]))) : (((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) arr_1 [i_0]))))))))));
                arr_6 [i_1] [(_Bool)1] = ((/* implicit */signed char) (_Bool)1);
            }
        } 
    } 
    var_12 = max((min((((((/* implicit */_Bool) var_2)) ? (var_3) : (var_1))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (var_1))))), (min((((/* implicit */long long int) min((var_6), (((/* implicit */short) var_7))))), (max((((/* implicit */long long int) var_9)), (var_1))))));
}
