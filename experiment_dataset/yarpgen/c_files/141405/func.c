/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141405
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
    var_10 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((unsigned short) ((6866892173665380823ULL) >> (((14173935821488130392ULL) - (14173935821488130373ULL)))));
                    arr_8 [14U] [i_1] [14U] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) 14173935821488130413ULL))) <= (((/* implicit */int) arr_0 [i_0]))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */signed char) (-(14173935821488130392ULL)));
}
