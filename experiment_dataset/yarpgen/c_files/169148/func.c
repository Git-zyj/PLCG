/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169148
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
    var_11 = ((/* implicit */short) var_10);
    var_12 &= ((/* implicit */int) var_0);
    var_13 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned long long int) (unsigned char)81)), (arr_3 [i_0 - 3] [i_1 - 1]))));
                var_14 = ((/* implicit */unsigned long long int) (short)-30733);
            }
        } 
    } 
}
