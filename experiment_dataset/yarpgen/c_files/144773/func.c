/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144773
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
    for (signed char i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */int) ((signed char) (+(((/* implicit */int) (unsigned short)14336)))));
                arr_6 [i_1] = ((/* implicit */unsigned int) ((short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [0U]))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_2))))))));
}
