/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124733
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
    var_20 = ((/* implicit */short) var_16);
    var_21 *= (-(1048575U));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            {
                var_22 = arr_3 [i_1 - 4] [i_0];
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 - 4] [i_0 + 1])) != (((/* implicit */int) (short)-1)))))) : ((+(min((1048575U), (((/* implicit */unsigned int) (unsigned char)108))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) (+(var_15)));
}
