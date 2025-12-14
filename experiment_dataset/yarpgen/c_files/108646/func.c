/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108646
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */int) ((((((/* implicit */int) ((811328150U) < (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) <= (max((((/* implicit */int) var_11)), (1672636731))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) arr_3 [i_0] [(unsigned char)7] [i_0])))))) : (max((4294967291U), (((/* implicit */unsigned int) (_Bool)1))))));
                var_15 = ((/* implicit */_Bool) max((min(((-(((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))), (((((/* implicit */_Bool) (unsigned short)29927)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_1])))))), (((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)-1))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) var_12);
}
