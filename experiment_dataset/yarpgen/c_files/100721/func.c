/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100721
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
    var_14 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned short) var_13))))) ? (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)249)))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_7)), (var_6)))))), (((((((/* implicit */int) (unsigned char)251)) <= (((/* implicit */int) var_1)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            {
                var_15 = (unsigned char)7;
                arr_4 [i_1] [i_0] [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_1 [i_1 - 3]), (arr_1 [i_1 - 2])))) ? (((/* implicit */int) ((signed char) var_13))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)18))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) var_1))))));
            }
        } 
    } 
}
