/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177207
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
    var_20 -= ((/* implicit */unsigned int) var_16);
    var_21 = ((/* implicit */short) ((signed char) ((int) (~(((/* implicit */int) (unsigned char)64))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                var_22 = (unsigned char)243;
                arr_4 [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) max((min((arr_1 [i_0 - 1]), (((/* implicit */int) (unsigned char)191)))), (((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (signed char)-10)))))));
            }
        } 
    } 
}
