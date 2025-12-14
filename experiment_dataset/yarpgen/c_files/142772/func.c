/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142772
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) (signed char)59);
                    var_12 = ((/* implicit */_Bool) arr_9 [i_1]);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) ((unsigned short) ((15751695557204988066ULL) >> (((min((15751695557204988076ULL), (15751695557204988066ULL))) - (15751695557204988048ULL))))));
    var_14 = ((/* implicit */_Bool) var_2);
}
