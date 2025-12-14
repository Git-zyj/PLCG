/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108771
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
    var_14 = ((/* implicit */int) ((_Bool) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_2)))));
    var_15 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [(_Bool)1] |= ((unsigned long long int) max((((arr_4 [i_0] [i_1]) ? (((/* implicit */unsigned long long int) 1720684076)) : (var_9))), (((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_0]) - (((/* implicit */int) arr_2 [i_0] [i_0])))))));
                var_16 = ((/* implicit */_Bool) (~(-2115450101)));
                arr_6 [(_Bool)1] |= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) * ((~(var_5))))))));
            }
        } 
    } 
}
