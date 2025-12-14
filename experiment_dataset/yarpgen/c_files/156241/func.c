/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156241
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
    var_17 |= (short)-31623;
    var_18 = ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6)))) : (max((((/* implicit */int) var_3)), (min((var_16), (((/* implicit */int) (short)29585)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((max((((var_6) ? (((/* implicit */int) arr_5 [i_2] [i_1] [i_1] [i_0])) : (-1510127267))), (((/* implicit */int) max((((/* implicit */short) var_11)), (var_0)))))) - (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) max((var_12), (((/* implicit */short) var_3)))))))));
                    arr_10 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned char) arr_5 [i_0] [i_2] [i_2] [i_1])), (var_10)));
                    var_19 = ((/* implicit */signed char) (+(max(((+(((/* implicit */int) var_7)))), (((var_5) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_0]))))))));
                    arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) (!(arr_5 [i_0] [i_1] [i_2] [i_2])));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) min((var_20), (var_15)));
}
