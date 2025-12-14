/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111699
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2 - 1] = var_4;
                                arr_14 [i_4] = ((/* implicit */_Bool) 2523913857U);
                            }
                        } 
                    } 
                    arr_15 [i_1] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-122393524), (454082586)))) ? (max((454082586), (454082586))) : (((/* implicit */int) (signed char)-49))));
                }
            } 
        } 
    } 
    var_13 = var_3;
}
