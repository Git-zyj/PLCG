/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112157
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] [(unsigned short)3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_0])) || ((!(((/* implicit */_Bool) 4294967295U)))))) || (((/* implicit */_Bool) arr_4 [i_0] [i_1]))));
                var_13 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) (unsigned char)7)))));
                var_14 = ((/* implicit */unsigned char) 17U);
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) var_9))));
}
