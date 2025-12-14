/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103925
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((var_5) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 3])) : (((/* implicit */int) arr_4 [i_2 + 2])))))));
                    var_14 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_6 [i_2 + 3] [i_0 + 1])) : (arr_0 [i_0 - 1])));
                    var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_5))));
                }
                var_16 = ((/* implicit */unsigned char) (signed char)-98);
            }
        } 
    } 
    var_17 -= ((/* implicit */signed char) ((long long int) var_3));
}
