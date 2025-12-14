/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186833
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_1 [i_0]))));
        var_18 = ((/* implicit */_Bool) ((unsigned char) arr_0 [i_0]));
    }
    var_19 ^= ((/* implicit */unsigned short) var_0);
    var_20 &= ((/* implicit */unsigned long long int) ((_Bool) ((_Bool) ((unsigned long long int) var_3))));
    var_21 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                {
                    var_22 |= ((((/* implicit */int) arr_2 [i_1] [i_2])) * (((/* implicit */int) arr_9 [i_1])));
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) arr_2 [i_1] [i_1]))));
                    var_24 = ((/* implicit */short) ((signed char) (signed char)103));
                }
            } 
        } 
    } 
}
