/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170247
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
    var_13 = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) var_3)) > (((int) var_0)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned short) 9223372036854775801LL);
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)253)) ? (min((max((((/* implicit */unsigned int) -466545604)), (4294967295U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_6))))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) -466545610))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
}
