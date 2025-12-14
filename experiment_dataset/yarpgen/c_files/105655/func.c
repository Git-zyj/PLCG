/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105655
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) min((var_8), ((signed char)-63))))) + (((/* implicit */int) var_16))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                arr_8 [i_1] [i_1] = var_15;
                var_18 = ((/* implicit */unsigned char) min((var_18), (var_6)));
                arr_9 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) var_0);
            }
        } 
    } 
}
