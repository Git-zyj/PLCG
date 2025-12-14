/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141365
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
    for (short i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */signed char) ((unsigned char) -710320861));
                var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)30)) ^ (((/* implicit */int) (short)23006))))) : ((~(3446464054124485890LL)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        for (unsigned short i_3 = 3; i_3 < 10; i_3 += 3) 
        {
            {
                arr_11 [i_2] [(unsigned short)5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)50)) << (((2139240039883740937ULL) - (2139240039883740915ULL)))))) ? (((2466001550U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7323))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((((/* implicit */int) (_Bool)0)) << (((1031980845U) - (1031980830U))))) | (((/* implicit */int) (short)8599)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1031980824U)))))));
                arr_12 [i_2] [i_2] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (var_8))))));
            }
        } 
    } 
}
