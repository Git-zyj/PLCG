/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150065
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
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_4 [(unsigned short)6] |= ((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) arr_3 [14] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_3 [(short)0] [i_0 + 1])))));
                var_18 += ((/* implicit */long long int) var_3);
            }
        } 
    } 
    var_19 = var_10;
}
