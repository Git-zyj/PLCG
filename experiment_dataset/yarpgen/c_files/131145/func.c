/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131145
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
    var_17 = ((/* implicit */long long int) var_1);
    var_18 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_13)), (var_1)))) ? (((/* implicit */long long int) ((unsigned int) var_6))) : ((+(var_2))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned char) var_13);
                arr_4 [i_0] [(short)2] [i_1] = arr_0 [i_0 - 1] [i_1];
            }
        } 
    } 
}
