/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111637
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
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) max((min((((/* implicit */int) (signed char)25)), (-848028886))), (((/* implicit */int) var_6))));
                var_11 = arr_4 [i_0] [i_1];
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) var_8);
    var_13 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) / (var_4)));
}
