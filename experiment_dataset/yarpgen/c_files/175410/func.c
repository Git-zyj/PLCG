/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175410
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
    var_13 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) var_3)))), (((((/* implicit */int) var_3)) - ((+(((/* implicit */int) (unsigned char)108))))))));
                var_14 = ((/* implicit */short) min((((/* implicit */long long int) var_0)), (((long long int) arr_5 [i_0] [i_1 + 1]))));
                var_15 += ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned short)40850)) * (((/* implicit */int) var_3))))));
            }
        } 
    } 
}
