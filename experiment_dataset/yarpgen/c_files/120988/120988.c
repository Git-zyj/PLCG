/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 ^= (((var_11 % 23821) ? (((~((1616538882 & (arr_0 [i_0])))))) : ((60 ? ((60 ? 1700418712 : 15189999225651017303)) : -984461717302467919))));
                    var_19 = -10;
                }
            }
        }
    }
    var_20 = (((((var_17 ? (min(232, var_9)) : var_11))) || var_14));
    #pragma endscop
}
