/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144149
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
    var_20 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_21 += ((/* implicit */unsigned char) ((unsigned short) max((((((/* implicit */_Bool) (signed char)64)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))))), (((/* implicit */unsigned int) arr_4 [i_0] [i_0])))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */short) arr_2 [i_0] [i_1]);
            }
        } 
    } 
}
