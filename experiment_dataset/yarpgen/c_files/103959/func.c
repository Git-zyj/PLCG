/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103959
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
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 17; i_2 += 1) 
            {
                {
                    var_20 = var_6;
                    var_21 = ((/* implicit */short) (signed char)18);
                }
            } 
        } 
    } 
    var_22 = ((unsigned short) ((signed char) max((((/* implicit */short) var_9)), ((short)-4118))));
}
