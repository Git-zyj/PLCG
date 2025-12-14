/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148636
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
    var_12 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) var_10))));
                var_14 = ((/* implicit */short) arr_3 [i_0] [i_1]);
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) var_2);
    var_16 = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (var_2))), (((/* implicit */int) min((var_10), (var_10))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (var_11)))));
}
