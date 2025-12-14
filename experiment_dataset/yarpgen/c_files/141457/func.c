/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141457
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
    var_12 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) (signed char)-100);
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */long long int) ((((((/* implicit */long long int) arr_5 [i_0] [i_0 + 2] [3U])) + (((long long int) var_4)))) != (((/* implicit */long long int) ((/* implicit */int) ((short) arr_0 [i_1]))))));
                }
            } 
        } 
    } 
}
