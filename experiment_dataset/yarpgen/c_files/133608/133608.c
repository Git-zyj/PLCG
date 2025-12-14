/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    var_18 = (((((!(58276 <= 8)))) - var_9));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_19 = (min(var_19, (((-(17819442455767934586 != var_16))))));
        var_20 ^= ((247 ? (((max(3, 31)))) : (min(var_7, (0 / 254)))));
        var_21 -= ((!(46436 && var_9)));
    }
    var_22 = ((-(((((65535 ? var_6 : 2084412069))) ? var_11 : 2588))));
    var_23 = (max(((var_6 ? ((2380466633 ? 46438 : 17819442455767934572)) : (var_1 | var_4))), (max((10087011798910875169 / -1), 10454))));
    #pragma endscop
}
