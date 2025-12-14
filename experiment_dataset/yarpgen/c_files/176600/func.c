/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176600
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
    var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) var_0))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */short) (((~(1714460932U))) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-14)))));
                    var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_0 - 2]), (((/* implicit */unsigned char) (signed char)-14)))))) != (min((arr_0 [i_2 - 1]), (arr_0 [i_2 - 1])))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) var_8);
}
