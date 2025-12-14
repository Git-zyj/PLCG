/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135796
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
    var_20 |= ((/* implicit */unsigned char) var_2);
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)67)) || (((/* implicit */_Bool) 1769379799U))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            {
                arr_6 [i_0 - 1] [i_1] [i_0 - 1] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_1] [i_1])) : (((/* implicit */int) (short)-8936)))))), (arr_5 [(unsigned char)7])));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (short)-29273);
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_0);
                arr_9 [(short)12] [(_Bool)1] [15U] |= ((((/* implicit */_Bool) ((short) var_2))) ? (((((/* implicit */_Bool) 3197393468U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-68)))) : (((((/* implicit */_Bool) 1769379799U)) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 2]))));
            }
        } 
    } 
}
