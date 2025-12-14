/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= ((+(max((var_2 & var_2), (min(-1552678377, 1552678376))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = (max(var_18, ((max(((((var_16 <= var_9) && (var_16 && var_16)))), ((~(max(11425195899282554360, -21278)))))))));
        var_19 = (max(var_19, (((!(((-(-2002607431 > -1552678377)))))))));
        var_20 = (max((max(var_9, (max(10201587985342901770, -15477)))), ((min(((max(var_2, var_1))), (max(-6082376369537745265, var_15)))))));
    }
    var_21 -= (((!10) || ((max(((max(var_5, var_16))), (max(0, 1003105503)))))));
    var_22 = (max((max(((max(var_10, var_5))), (max(var_5, var_8)))), ((-(max(var_2, var_8))))));
    #pragma endscop
}
