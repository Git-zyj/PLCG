/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143952
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_13 &= ((/* implicit */signed char) min(((_Bool)1), ((_Bool)1)));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (((~(((/* implicit */int) max((arr_4 [i_1] [i_0]), (((/* implicit */signed char) (_Bool)1))))))) & ((+(((/* implicit */int) arr_3 [i_0]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0))));
}
