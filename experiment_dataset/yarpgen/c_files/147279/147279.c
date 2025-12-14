/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((max((238 & var_11), var_2)) ^ (((~(-12051 ^ var_6))))));
    var_16 = (((((var_0 ? var_8 : (var_10 && var_7)))) || (((~(max(var_9, var_0)))))));
    var_17 = (max(var_9, (((var_2 >= var_7) ? (var_10 != 24322) : (min(var_9, 1861097143))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = (((min(var_0, var_9)) * (var_14 == var_11)));
                var_18 += max((var_6 % -24322), (((((-750020013 + 2147483647) << (var_10 - 2624007890))) & (0 > var_7))));
            }
        }
    }
    var_19 = (((((-975070060 % 216483032) ^ (!0))) - (max(var_0, var_9))));
    #pragma endscop
}
