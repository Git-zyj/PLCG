/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149915
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
    for (short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) (+(min((arr_1 [i_0 - 1] [i_0]), (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-114)), (0))))))));
                    var_13 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122))) * (arr_1 [i_0 + 1] [i_1 + 1]))), (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_1 + 2])) ? (arr_1 [i_0 + 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32747)))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_6);
}
