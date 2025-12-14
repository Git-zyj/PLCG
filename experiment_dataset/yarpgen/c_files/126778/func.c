/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126778
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
    var_20 = ((/* implicit */unsigned int) var_5);
    var_21 -= (+(2503604072U));
    var_22 |= ((/* implicit */unsigned short) max((3942395647U), (((/* implicit */unsigned int) (unsigned short)65528))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) (-(2503604072U)))) ? ((-(1791363219U))) : (((arr_2 [i_0 + 4]) + (arr_2 [i_0 + 4]))));
                arr_6 [i_1] = (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (((2503604058U) / (3065399222U))))));
            }
        } 
    } 
}
