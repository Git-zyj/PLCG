/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169701
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */int) (~(1761308643U)));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [i_1] [i_1]))))));
            }
        } 
    } 
    var_11 = ((/* implicit */signed char) var_6);
    var_12 &= ((/* implicit */unsigned char) (_Bool)1);
}
