/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13191
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */_Bool) ((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
                var_13 = ((/* implicit */unsigned short) (~(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)53677))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) ((unsigned char) var_7)))))));
    var_15 -= (!(((/* implicit */_Bool) var_7)));
}
