/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138799
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */int) (~(var_14)));
                var_16 = ((/* implicit */signed char) var_9);
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)65521)), (4294967291U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-8026)) : (((/* implicit */int) arr_4 [i_1 + 1]))))))))));
                var_18 = ((/* implicit */short) ((((/* implicit */int) var_2)) % (((((/* implicit */_Bool) (unsigned short)65518)) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) (short)8023))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-8002)) ? (((/* implicit */int) (short)-8026)) : (((/* implicit */int) (unsigned char)224))));
    var_20 = ((/* implicit */unsigned char) var_3);
}
