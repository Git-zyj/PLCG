/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157180
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
    var_16 = (short)5719;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_6 [i_0] [(signed char)16] [i_0] |= 1526046934U;
                arr_7 [(unsigned char)8] [(signed char)0] [(unsigned char)8] |= ((/* implicit */short) (signed char)118);
            }
        } 
    } 
}
