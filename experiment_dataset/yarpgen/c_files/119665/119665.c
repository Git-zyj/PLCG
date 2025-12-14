/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((max((min(var_7, var_6)), -1)) == var_11));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 ^= var_9;
        var_14 = (max(var_14, (((981255043241673148 ? 0 : ((-12 ? (min(2113592028, 1)) : ((min(var_2, 0))))))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_15 = (max(var_15, 18446744073709551613));
        var_16 = 2147483647;
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                var_17 = (min(1, 657641229));
                var_18 |= var_4;
                var_19 *= 1371539057;
                var_20 = (min(2, (arr_11 [i_2])));
                var_21 = 2147483637;
            }
        }
    }
    var_22 &= var_0;
    var_23 = (2 ? var_10 : (min((((var_1 ? 47328 : var_11))), (min(var_10, var_9)))));
    #pragma endscop
}
