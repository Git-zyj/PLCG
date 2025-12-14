/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104604
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
    var_17 = ((/* implicit */unsigned int) ((int) var_11));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 5369288892590460536LL)) : (16982195001088320309ULL))))) & (((/* implicit */unsigned long long int) 3973997920106540953LL))));
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 1])) << (((/* implicit */int) (_Bool)1))));
                arr_8 [i_1] = ((int) 3973997920106540953LL);
                arr_9 [i_0] [i_1] = ((/* implicit */long long int) ((unsigned long long int) ((int) 4294967295U)));
            }
        } 
    } 
}
