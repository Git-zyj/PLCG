/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -119;
    var_19 = (((!var_17) | (~var_8)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_20 *= (arr_2 [i_0]);
                arr_8 [i_0] [i_0] = (((((((min(118, var_1))) ? 17082311269613071200 : (arr_3 [i_1 + 3] [i_0])))) ? 1 : var_12));
                arr_9 [i_0] [i_1] = (arr_7 [i_0]);
                arr_10 [i_0] [i_0] = 4400706939068771352;
                arr_11 [i_0] [i_0] [i_1 + 2] = -7498004112647873120;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                arr_18 [i_2] [2] [i_2] = ((min(((-535186187 ? var_13 : 10311524795124463960)), -1365537325)));
                arr_19 [i_2] = (min(-2005928294, -119));
                arr_20 [i_2] [i_3] [9] = var_9;
            }
        }
    }
    #pragma endscop
}
