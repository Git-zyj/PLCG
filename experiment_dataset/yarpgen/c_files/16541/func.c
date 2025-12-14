/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16541
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) ((arr_1 [i_0]) + (((/* implicit */unsigned long long int) ((1035047387U) & (((unsigned int) 3259919936U)))))));
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((4523559617163509043LL) | (4502235971310926453LL))) ^ ((~(var_6)))))) - (12807708302295643587ULL)));
            }
        } 
    } 
    var_17 = var_14;
}
