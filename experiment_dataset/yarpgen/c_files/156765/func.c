/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156765
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
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-1024)) ? (((((/* implicit */_Bool) (short)-1024)) ? (((/* implicit */int) (short)-2351)) : (((/* implicit */int) (short)-2599)))) : (((/* implicit */int) (short)0))));
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)255))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)29171)) : (((/* implicit */int) (short)272)))) : (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (short)12923)) : (((/* implicit */int) var_4)))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)18143)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) var_15))));
}
