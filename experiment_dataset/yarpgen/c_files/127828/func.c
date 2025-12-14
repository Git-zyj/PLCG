/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127828
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
    var_19 = ((/* implicit */unsigned char) var_16);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned long long int) min((arr_5 [i_0 - 2] [i_0] [i_0] [i_0]), ((unsigned char)199)))))))));
                    arr_8 [i_0] = ((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */unsigned long long int) 1203984735U)) : (13675974463938385241ULL));
                }
            } 
        } 
    } 
}
