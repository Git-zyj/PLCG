/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176704
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
    for (int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 4) 
                {
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (~(((/* implicit */int) var_12)))))));
                    var_20 |= ((((/* implicit */_Bool) (unsigned short)16384)) ? (13768612858567069911ULL) : (((/* implicit */unsigned long long int) 9223372036854775779LL)));
                    var_21 = ((/* implicit */unsigned long long int) -9223372036854775780LL);
                }
                var_22 = ((/* implicit */unsigned long long int) ((signed char) (-(4678131215142481704ULL))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) max((var_23), (var_2)));
}
