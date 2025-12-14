/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153670
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
    var_13 = ((/* implicit */signed char) max((4), (((/* implicit */int) (unsigned char)253))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 -= ((unsigned char) ((((/* implicit */int) (signed char)13)) + (((/* implicit */int) (signed char)29))));
                    var_15 = ((/* implicit */short) min((((((/* implicit */int) arr_4 [i_1 - 4] [i_2])) >> (((var_6) - (2241077231072427531ULL))))), ((~(((/* implicit */int) arr_5 [i_1] [i_1]))))));
                }
            } 
        } 
    } 
}
