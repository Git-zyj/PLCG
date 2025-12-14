/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110654
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
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 8; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */signed char) max((max((0U), (((/* implicit */unsigned int) (short)-2945)))), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_5 [i_0 - 2])) ? (((/* implicit */int) arr_2 [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0])))))))));
                arr_6 [(_Bool)1] = ((/* implicit */short) var_1);
            }
        } 
    } 
    var_17 |= ((/* implicit */unsigned char) (-((-(((((/* implicit */int) var_7)) * (((/* implicit */int) var_14))))))));
}
