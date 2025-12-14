/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11659
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
    var_17 -= ((/* implicit */long long int) max((((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */int) max(((short)-2727), (((/* implicit */short) var_16))))) : (((/* implicit */int) (short)2752)))), (max((((/* implicit */int) (short)-2727)), (((((/* implicit */_Bool) (short)-2753)) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) var_3))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((unsigned int) (unsigned char)4));
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])), ((-(15196207048818059110ULL))))));
            }
        } 
    } 
}
