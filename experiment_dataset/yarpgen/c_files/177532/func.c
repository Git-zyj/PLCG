/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177532
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
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) var_3))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_12 *= ((/* implicit */int) min((((/* implicit */unsigned short) min((((((/* implicit */_Bool) 776524404U)) || (((/* implicit */_Bool) (unsigned char)8)))), ((_Bool)1)))), (((unsigned short) (((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))))));
                    var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
}
