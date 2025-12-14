/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151333
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
    var_20 = ((/* implicit */long long int) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_21 = ((((/* implicit */_Bool) (-(var_13)))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_12))))));
                var_22 -= ((short) arr_1 [i_0]);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) var_7)))), (((((/* implicit */int) ((unsigned char) var_13))) & (((/* implicit */int) var_7))))));
    var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 1052595908U))));
    var_25 = ((/* implicit */short) min((((/* implicit */long long int) var_7)), (var_14)));
}
