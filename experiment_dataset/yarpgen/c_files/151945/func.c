/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151945
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
    var_14 = ((/* implicit */_Bool) (short)11028);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_15 += ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) (unsigned short)7125)) : (((/* implicit */int) (signed char)4)))), (min((((/* implicit */int) (signed char)-64)), (1730395887)))));
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) 999603227)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)63))));
                var_17 ^= min((((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */int) (signed char)-74)) : (((/* implicit */int) (unsigned char)15)))), (min((((/* implicit */int) (signed char)-117)), (1299694172))));
            }
        } 
    } 
}
