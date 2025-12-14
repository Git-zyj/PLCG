/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150282
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
    var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32757))) : (11953721932083535955ULL))) : (min((11953721932083535955ULL), (((/* implicit */unsigned long long int) -2000936058)))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) < (max((18446744073709551615ULL), (6493022141626015661ULL)))))))));
    var_15 ^= ((/* implicit */long long int) (+(((unsigned int) var_9))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_8 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) 33554424U))) ? (((/* implicit */int) ((11953721932083535955ULL) < (6493022141626015670ULL)))) : (((/* implicit */int) (!((_Bool)1))))))) == ((((_Bool)1) ? (2350154579U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)15057)))))));
                var_16 = ((/* implicit */signed char) (~(((((/* implicit */int) ((unsigned short) var_0))) >> ((((~(arr_1 [i_0]))) - (11496314958365747171ULL)))))));
            }
        } 
    } 
}
