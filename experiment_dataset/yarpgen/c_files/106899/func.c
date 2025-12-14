/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106899
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
    var_15 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */_Bool) min(((~(((/* implicit */int) (short)-19427)))), (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) (short)-19427))))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) var_9)) * (((/* implicit */int) var_2))))))));
                    var_17 = ((((-528073083) + (2147483647))) << (((/* implicit */int) (_Bool)0)));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) max(((short)63), (((/* implicit */short) (_Bool)0))))) >> ((+(((/* implicit */int) var_14))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) min((var_19), (max(((_Bool)1), (((((/* implicit */int) var_8)) < ((~(-1)))))))));
}
