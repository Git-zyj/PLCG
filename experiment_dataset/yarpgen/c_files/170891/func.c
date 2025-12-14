/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170891
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
    var_12 ^= ((/* implicit */short) 836108869U);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [4ULL] &= ((/* implicit */unsigned long long int) arr_5 [(unsigned char)4] [(unsigned char)4]);
                    arr_10 [i_0] [(signed char)17] = ((/* implicit */unsigned short) (+((~(min((var_11), (((/* implicit */unsigned long long int) var_7))))))));
                }
            } 
        } 
    } 
}
