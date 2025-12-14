/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139088
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
    var_11 = ((/* implicit */int) ((2390501356U) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-3251)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_12 = ((unsigned int) 2LL);
                var_13 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1])) ? (arr_3 [i_0] [i_0 - 2]) : (arr_3 [i_0] [i_0 - 3])))));
                arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) ((unsigned int) 2751870633U))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0 - 3])))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0 - 2]))) : (var_3))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) ((signed char) var_8));
    var_15 *= ((/* implicit */short) var_4);
    var_16 -= ((/* implicit */short) ((unsigned int) 1070615090));
}
