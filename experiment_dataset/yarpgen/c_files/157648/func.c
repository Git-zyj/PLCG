/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157648
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
    var_15 = ((/* implicit */int) ((unsigned long long int) (-(((/* implicit */int) (signed char)-1)))));
    var_16 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) (_Bool)0)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1 - 2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_2 [11ULL])) - (262143)))))) + (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)2692)) - (((/* implicit */int) (unsigned short)62843))))) + (0ULL)))));
                arr_5 [i_0] [(_Bool)1] = ((/* implicit */unsigned char) (unsigned short)2692);
            }
        } 
    } 
}
