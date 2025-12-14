/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186967
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
    for (signed char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)36585)) + (((/* implicit */int) (unsigned short)36585))));
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(2248016420U)))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_1))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_12);
    var_17 = ((/* implicit */signed char) max(((!(((/* implicit */_Bool) var_6)))), (((_Bool) (unsigned short)120))));
}
