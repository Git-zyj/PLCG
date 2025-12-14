/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16964
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
    var_19 = ((/* implicit */long long int) var_3);
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */long long int) var_2);
                    var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (unsigned char)127)), (17851576672925383832ULL)));
                }
            } 
        } 
    } 
}
