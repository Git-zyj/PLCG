/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163379
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
    var_19 = ((/* implicit */long long int) var_15);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_4);
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1752268772698658988LL)) ? (-7220997926130229567LL) : (-1LL)));
                }
            } 
        } 
    } 
}
