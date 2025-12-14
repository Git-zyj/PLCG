/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11705
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
    for (signed char i_0 = 4; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (signed char)-126)))) || (((/* implicit */_Bool) arr_1 [i_0 - 2]))))), (arr_1 [i_1])));
                var_13 += (+(((/* implicit */int) (signed char)-126)));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_7))));
}
