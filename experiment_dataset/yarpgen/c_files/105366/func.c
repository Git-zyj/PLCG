/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105366
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
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_12 = ((/* implicit */signed char) ((long long int) ((signed char) arr_1 [i_0] [i_0])));
        var_13 |= ((/* implicit */unsigned char) (-(((arr_0 [i_0 + 1]) / (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        for (short i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            {
                var_14 ^= ((/* implicit */unsigned short) (+((+(14509832262828169078ULL)))));
                var_15 ^= ((/* implicit */unsigned char) (+(min((arr_8 [i_1] [i_1]), (arr_8 [i_1] [i_2])))));
            }
        } 
    } 
}
