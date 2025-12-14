/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17003
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_0))));
                    var_21 ^= ((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned short) arr_5 [i_2 + 1] [i_2 + 1] [i_2]))), (var_4)));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((signed char) ((unsigned long long int) var_15)));
}
