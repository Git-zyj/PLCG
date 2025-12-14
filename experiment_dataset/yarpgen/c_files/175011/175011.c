/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] [i_2] |= (!1);
                    arr_8 [i_1] [i_1] [i_1] [i_2] = var_2;
                }
            }
        }
    }
    var_16 = ((((min((~var_2), (max(var_14, var_7))))) || ((min(1596977544, 8719852620106000792)))));
    var_17 = var_6;
    var_18 = 1729274646;
    #pragma endscop
}
