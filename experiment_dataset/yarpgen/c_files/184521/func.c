/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184521
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) arr_6 [i_0] [i_0]);
                var_15 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_6 [i_0] [i_0])), (arr_1 [i_0])));
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_0 [i_0]))))))) == (((((/* implicit */_Bool) ((var_4) ? (4294967272U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0])))))) ? (4294967295U) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_10)))))))));
                arr_7 [i_0] [i_0] [i_0] |= ((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0])) != (((/* implicit */int) arr_6 [i_0] [i_0]))));
            }
        } 
    } 
    var_17 = (((!(((/* implicit */_Bool) var_7)))) ? (var_1) : (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))))));
}
