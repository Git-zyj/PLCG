/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10918
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
    for (int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                arr_7 [10U] [i_1] = ((/* implicit */unsigned char) (unsigned short)65510);
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (unsigned short)65506))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) var_4);
}
