/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160107
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
    var_17 = ((/* implicit */unsigned int) 1589026651);
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) var_8)) < (((((/* implicit */_Bool) var_15)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) (+(-525278301)));
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 1792U)) || (((/* implicit */_Bool) -1391609335))))) + (((/* implicit */int) max(((unsigned short)46234), ((unsigned short)34709))))))) ? ((((~(1790U))) - (((/* implicit */unsigned int) arr_4 [i_1 - 3] [6] [i_1 - 4])))) : (var_1))))));
                var_21 = ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (0) : (var_2)))) ? (((int) (unsigned short)41910)) : (arr_4 [i_0] [i_0] [i_0])));
                var_22 = ((/* implicit */int) min((var_22), (((int) (~(((/* implicit */int) ((unsigned short) arr_0 [i_0] [i_1 - 1]))))))));
            }
        } 
    } 
    var_23 -= ((((unsigned int) max((((/* implicit */unsigned int) (-2147483647 - 1))), (var_13)))) << (((((/* implicit */int) var_5)) - (14473))));
    var_24 = 0U;
}
