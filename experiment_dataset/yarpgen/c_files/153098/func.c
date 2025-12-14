/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153098
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
    var_12 |= ((/* implicit */int) var_8);
    var_13 |= (~((~(var_7))));
    var_14 = ((/* implicit */unsigned short) (signed char)-26);
    var_15 &= ((/* implicit */long long int) (-(((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) arr_2 [i_1] [i_0]))));
                var_17 &= var_8;
            }
        } 
    } 
}
