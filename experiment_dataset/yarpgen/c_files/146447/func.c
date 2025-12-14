/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146447
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
    var_15 = ((/* implicit */unsigned long long int) var_1);
    var_16 &= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-57))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_1] [7ULL] = arr_4 [i_1];
                arr_6 [i_0] [i_1] [i_1] = (~(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) (unsigned char)231)))))));
            }
        } 
    } 
}
