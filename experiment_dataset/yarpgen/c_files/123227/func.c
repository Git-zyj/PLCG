/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123227
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */signed char) max(((~(((((/* implicit */_Bool) (short)-17274)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)-122)))))), (((/* implicit */int) (signed char)29))));
                    var_15 = ((/* implicit */_Bool) arr_7 [i_1]);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (short)17294))));
}
