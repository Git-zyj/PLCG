/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138301
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
    var_20 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned int) ((unsigned char) (unsigned short)65510));
                arr_7 [i_0] = ((/* implicit */long long int) var_3);
            }
        } 
    } 
}
