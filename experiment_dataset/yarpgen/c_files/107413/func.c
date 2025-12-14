/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107413
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_11 &= ((/* implicit */unsigned char) ((unsigned long long int) arr_2 [i_0]));
                    arr_7 [3U] [3U] [i_1] [i_1] = ((/* implicit */unsigned char) (-(((unsigned long long int) arr_1 [i_0]))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */signed char) var_8);
}
