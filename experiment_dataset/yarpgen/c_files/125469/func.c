/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125469
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_19 = ((/* implicit */_Bool) min((((unsigned char) ((arr_0 [i_0]) >> (((((/* implicit */int) arr_1 [i_0])) - (5267)))))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 268435392U)))))));
        var_20 -= ((/* implicit */unsigned short) ((4026531911U) << (((((/* implicit */int) (unsigned short)47495)) - (47490)))));
    }
    var_21 = ((/* implicit */unsigned int) var_17);
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            {
                arr_8 [1U] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_3 [i_1])), (max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)25242)) && (((/* implicit */_Bool) (unsigned short)24212)))))))));
                arr_9 [i_1] [i_1] = ((/* implicit */unsigned int) arr_7 [i_1] [i_2]);
            }
        } 
    } 
}
