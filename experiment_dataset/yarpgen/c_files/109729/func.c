/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109729
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
    var_13 = ((/* implicit */short) var_3);
    var_14 = ((/* implicit */short) ((long long int) (short)-17053));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2047)) ? (((/* implicit */int) (unsigned short)2047)) : (((/* implicit */int) (unsigned short)2047)))))));
                arr_8 [i_1] = ((/* implicit */long long int) min(((-(3538464864U))), (((/* implicit */unsigned int) ((_Bool) var_9)))));
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) min((min((3782401582139294573ULL), (((/* implicit */unsigned long long int) 1095618025U)))), (((/* implicit */unsigned long long int) arr_6 [i_1])))))));
                arr_9 [i_0] [i_1] = ((/* implicit */short) ((unsigned int) (signed char)-14));
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) min((((/* implicit */int) var_2)), (min((((/* implicit */int) ((unsigned short) (short)-7977))), (((((/* implicit */_Bool) (unsigned short)63518)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))))))));
            }
        } 
    } 
}
