/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171960
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
    var_12 = ((/* implicit */unsigned int) 1056964608);
    var_13 = -1125109175;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) 2097120)) ? (((((/* implicit */_Bool) arr_0 [i_1 + 4] [i_1])) ? (((/* implicit */int) arr_0 [i_1 + 4] [i_1])) : (((/* implicit */int) arr_0 [i_1 + 3] [i_1])))) : (((((/* implicit */_Bool) (signed char)110)) ? (66584576) : (((/* implicit */int) (short)(-32767 - 1)))))));
                arr_5 [i_0] [i_0] |= ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)126))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) var_7);
}
