/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166861
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
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) (signed char)-44))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 4; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_7 [i_2 - 1] [i_1] [i_0] = ((/* implicit */long long int) (((-(((/* implicit */int) (unsigned short)65535)))) != (((/* implicit */int) (unsigned short)64156))));
                    arr_8 [7LL] [i_1 + 3] [i_1] [i_2] = ((/* implicit */signed char) ((var_3) & (268435455)));
                }
            } 
        } 
    } 
    var_13 += ((/* implicit */signed char) ((long long int) ((268435455) + (max((8160), (-8161))))));
}
