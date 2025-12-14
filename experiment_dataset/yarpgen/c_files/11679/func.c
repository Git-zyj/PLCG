/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11679
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
    var_20 = ((/* implicit */unsigned int) ((var_10) != (((unsigned int) (~(var_13))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (arr_4 [i_0]) : (arr_4 [i_0])))) ? (((arr_4 [i_1]) & (var_3))) : ((~(var_4))));
                    arr_9 [i_0] &= ((unsigned int) min((arr_5 [i_0]), (var_5)));
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((max((1898328726U), (((unsigned int) 2425806563U)))) / (1059591989U));
                }
            } 
        } 
    } 
}
