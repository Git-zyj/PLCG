/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184817
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
    for (signed char i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((int) var_6))) - (min((((/* implicit */unsigned int) var_6)), (var_13)))))) ? (min((arr_0 [i_0 - 1]), (arr_0 [i_1 - 1]))) : ((((-(3U))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)10)) || (((/* implicit */_Bool) var_9))))))))));
                arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (var_8) : (var_1)))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1])), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_2)) : (-2099983351)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3709868340U)) ? (2099983350) : (var_8)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))) : (((unsigned int) arr_3 [10U] [i_1 + 2] [i_0 + 1]))))));
                var_18 = ((/* implicit */signed char) arr_2 [(signed char)3]);
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) (+(min((var_1), (((var_12) + (((/* implicit */int) var_6))))))));
}
