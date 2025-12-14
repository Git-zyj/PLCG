/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157653
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned short) arr_1 [i_0] [i_1]);
                arr_4 [i_0 - 1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0 - 1]))))) ? ((-(((/* implicit */int) var_14)))) : ((+(((/* implicit */int) (unsigned char)213))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_15))));
}
