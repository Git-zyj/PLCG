/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125515
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
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_0]))));
                var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) (unsigned char)128))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) ((short) (signed char)27));
    var_13 = ((/* implicit */unsigned short) (unsigned char)106);
}
