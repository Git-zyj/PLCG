/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107835
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
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_15 [i_1] [i_2] [i_4] [i_3] [3ULL] = ((/* implicit */unsigned char) 19ULL);
                                arr_16 [i_1] [i_1 + 2] [i_1] [i_3] [i_3] [i_4] = 4294967295U;
                            }
                        } 
                    } 
                    arr_17 [i_1] = ((long long int) arr_7 [i_1 + 2]);
                }
            } 
        } 
    } 
    var_19 ^= (+(max((((/* implicit */unsigned long long int) var_12)), (var_13))));
}
