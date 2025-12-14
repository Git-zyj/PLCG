/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189508
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_20 = (_Bool)1;
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)21874)) ? (min((((arr_2 [i_1]) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_15)))), (((/* implicit */int) arr_1 [i_1])))) : (((/* implicit */int) (unsigned short)43639))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (((/* implicit */int) arr_3 [i_1 + 1])) : (((/* implicit */int) arr_3 [i_1 + 1])))));
            }
        } 
    } 
    var_21 &= ((/* implicit */_Bool) var_16);
    var_22 = ((/* implicit */signed char) max((min(((+(((/* implicit */int) var_11)))), (((/* implicit */int) (unsigned short)12181)))), (((/* implicit */int) var_0))));
    var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) max((((signed char) var_10)), (((/* implicit */signed char) var_3)))))));
}
