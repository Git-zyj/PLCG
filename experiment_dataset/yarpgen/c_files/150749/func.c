/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150749
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
    var_10 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((var_4) - (1215771598801921730ULL)))))) && (((/* implicit */_Bool) (-(var_9)))))))));
    var_11 = ((/* implicit */short) (signed char)13);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_0] [0U] |= ((/* implicit */short) (+((+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) != (17112534945204521756ULL))))))));
                    var_12 ^= ((/* implicit */long long int) var_6);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) max((((/* implicit */int) ((short) (signed char)-17))), (0)));
}
