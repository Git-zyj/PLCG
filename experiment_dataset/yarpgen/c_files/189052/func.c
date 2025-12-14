/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189052
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
    var_13 = ((/* implicit */_Bool) 4889472784416498444ULL);
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_14 = (+(((((/* implicit */int) (unsigned char)16)) >> (((((/* implicit */int) (short)-32759)) + (32788))))));
                var_15 |= ((/* implicit */short) ((((((/* implicit */int) (short)21912)) / (((/* implicit */int) (short)-32766)))) * ((-(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_16 *= ((/* implicit */_Bool) (signed char)102);
}
