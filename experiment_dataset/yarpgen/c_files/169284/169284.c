/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = (min(var_5, (((((min((arr_8 [i_2] [i_2] [i_1] [8]), (arr_3 [14]))) + 2147483647)) >> ((var_4 ? (arr_2 [i_0]) : -10))))));
                    arr_10 [i_0] [i_1 - 2] [i_2] = (arr_3 [i_0]);
                    var_14 *= (min(((((arr_3 [i_2 - 1]) > (min((arr_3 [i_0]), 5256410265395402751))))), (((arr_3 [i_2 - 1]) ? (arr_3 [i_2 - 1]) : (arr_3 [i_2 - 2])))));
                    var_15 = (max(var_15, ((((min((arr_7 [8] [8] [i_2 + 1]), (((arr_8 [i_2] [i_2] [6] [9]) ? (arr_1 [i_1 + 1]) : (arr_2 [i_0])))))) ? var_7 : ((0 ? var_8 : 2873218054))))));
                }
            }
        }
    }
    #pragma endscop
}
