/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108096
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
    var_14 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) ((var_0) != (var_8))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) var_0);
        var_16 = ((/* implicit */unsigned short) arr_0 [i_0 - 1]);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_0]);
                    var_18 = ((/* implicit */long long int) ((var_11) ? (var_13) : (((/* implicit */unsigned int) arr_3 [i_0] [i_2]))));
                }
            } 
        } 
    }
}
