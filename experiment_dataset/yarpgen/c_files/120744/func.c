/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120744
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
    for (signed char i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20647)) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) (signed char)-78))))) ? (arr_0 [i_0 - 4]) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)-22452)) : (((/* implicit */int) var_14)))))), (max((min((((/* implicit */int) arr_5 [i_0] [i_1])), (var_12))), (((/* implicit */int) arr_5 [i_1 - 1] [i_1]))))));
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((2147483647), (var_12)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) ? (var_6) : (max((((/* implicit */int) var_2)), (arr_2 [i_1] [i_0])))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) var_6);
}
