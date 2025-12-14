/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110007
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
    var_20 -= ((/* implicit */signed char) var_17);
    var_21 ^= ((/* implicit */long long int) (signed char)-121);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */signed char) (-((+(((/* implicit */int) (_Bool)1))))));
                    var_23 = (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_1 - 3] [i_2])) ? (((/* implicit */int) (signed char)-110)) : (var_2)))))));
                }
            } 
        } 
    } 
}
