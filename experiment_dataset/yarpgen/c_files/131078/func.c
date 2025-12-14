/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131078
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_16 ^= ((/* implicit */unsigned long long int) (+(-934868967)));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_17 = (+(((unsigned int) ((unsigned char) arr_2 [i_0]))));
            arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) arr_2 [(signed char)8]);
        }
    }
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_1))));
}
