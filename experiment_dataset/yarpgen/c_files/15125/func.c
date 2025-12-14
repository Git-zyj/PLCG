/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15125
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
    var_20 = ((/* implicit */_Bool) var_16);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_21 = (-(((675516141) << (((2727007268U) - (2727007268U))))));
                    arr_7 [i_0] [(unsigned short)16] [(short)7] [(short)7] = ((long long int) (_Bool)0);
                }
            } 
        } 
    } 
    var_22 |= ((/* implicit */unsigned char) var_19);
}
