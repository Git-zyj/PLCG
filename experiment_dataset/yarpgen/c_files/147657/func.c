/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147657
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
    var_15 = ((/* implicit */unsigned short) ((_Bool) (unsigned char)153));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                arr_7 [i_0 - 3] [i_0] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])))) || (((/* implicit */_Bool) ((short) (signed char)53)))));
                arr_8 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) arr_3 [i_0] [i_0] [i_1 + 2])))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) var_6))))));
    var_17 |= ((/* implicit */unsigned char) (+(((/* implicit */int) var_4))));
    var_18 = ((/* implicit */unsigned int) var_9);
}
