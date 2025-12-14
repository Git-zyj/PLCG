/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152508
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
    var_18 = var_14;
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            var_19 += ((/* implicit */_Bool) min((((/* implicit */unsigned int) 1712034590)), (var_2)));
            arr_4 [14] &= ((/* implicit */unsigned char) var_11);
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_12))));
        }
        var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)37478))))) ? (var_0) : (((/* implicit */unsigned long long int) (-(var_5))))));
        var_22 = ((/* implicit */long long int) var_17);
    }
}
