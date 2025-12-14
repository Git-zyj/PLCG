/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169028
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
    var_14 *= ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (((_Bool)1) && (var_7)))), ((~(var_9)))))) && (((/* implicit */_Bool) max((((var_6) ? ((-2147483647 - 1)) : (((/* implicit */int) var_3)))), ((~(var_10)))))));
    var_15 -= ((_Bool) var_3);
    var_16 = 1852246998;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1 - 1] = ((/* implicit */unsigned char) (((-(((((/* implicit */int) (short)-1)) % (((/* implicit */int) arr_2 [i_0])))))) >= ((~(((/* implicit */int) (short)-8192))))));
                arr_5 [i_0] [6U] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((((/* implicit */int) arr_3 [i_1 - 1])), (-2082526091))) * (((/* implicit */int) ((short) var_8)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) -927100633)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [10])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2536760175U)))) ? (((/* implicit */unsigned int) max((997272017), (arr_1 [i_1])))) : (max((1516911564U), (((/* implicit */unsigned int) (-2147483647 - 1)))))))));
                arr_6 [i_0] [i_1 - 1] = ((/* implicit */short) min((((/* implicit */int) arr_2 [i_0])), (((((/* implicit */_Bool) max((arr_0 [(unsigned char)0]), (arr_2 [i_1 - 1])))) ? (var_1) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))))));
            }
        } 
    } 
}
