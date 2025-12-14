/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173692
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
    var_13 += ((/* implicit */unsigned char) var_0);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 - 1])) ? (((/* implicit */int) arr_2 [i_2 - 1])) : (((/* implicit */int) arr_1 [i_0 + 1] [i_2 - 1]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) % (3527029731U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_2 [i_2 - 1])) : (((/* implicit */int) arr_2 [i_2 - 1])))))));
                    var_15 ^= ((long long int) (+((-(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) var_0);
}
