/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104167
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
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) var_4))));
    var_13 |= ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 15711256366080810681ULL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)254))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_0 + 1] [i_1] [i_0])))))));
                arr_5 [i_0] [i_1] = (+(min((((/* implicit */unsigned long long int) 2147483647U)), (12105613444644157915ULL))));
            }
        } 
    } 
}
