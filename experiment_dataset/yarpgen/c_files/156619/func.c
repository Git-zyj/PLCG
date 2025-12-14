/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156619
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
    var_18 = ((/* implicit */signed char) max((min(((+(((/* implicit */int) var_17)))), (((/* implicit */int) (short)-18483)))), (((/* implicit */int) max((((((/* implicit */_Bool) (short)18474)) && (((/* implicit */_Bool) var_2)))), ((!(((/* implicit */_Bool) (short)-18483)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) arr_2 [i_2 + 1])))));
                    arr_10 [i_0] [i_1] [i_0] = var_3;
                    arr_11 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) min((((/* implicit */int) var_14)), (((var_17) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [(short)10])) : (((/* implicit */int) max((var_2), (((/* implicit */signed char) var_6)))))))));
                }
            } 
        } 
    } 
    var_20 = var_7;
}
