/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185469
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
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            {
                var_14 -= ((/* implicit */unsigned int) 13363329598107291657ULL);
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (_Bool)0);
            }
        } 
    } 
    var_15 = var_3;
    var_16 = ((/* implicit */unsigned int) var_8);
    var_17 |= ((/* implicit */unsigned char) var_0);
}
