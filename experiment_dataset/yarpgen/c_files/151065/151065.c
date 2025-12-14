/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_11 = var_6;
                var_12 = var_2;
                var_13 -= (((((min((arr_0 [i_1]), (arr_1 [i_0])))) ? (arr_1 [i_0 - 1]) : (arr_0 [i_1]))));
                var_14 = min((((arr_1 [9]) ? var_5 : (((arr_2 [i_0] [i_0]) ? -2147483643 : var_5)))), ((0 ? var_2 : (arr_2 [i_0 + 2] [i_0]))));
                var_15 &= (arr_0 [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                arr_9 [i_2] [i_2] [i_2 - 1] = (((((((var_9 ? (arr_4 [19] [19]) : var_5))) ? (~var_8) : (arr_4 [i_2 - 1] [i_2 - 1]))) | (min((min(1, (arr_5 [i_3] [i_2]))), var_9))));
                var_16 = 65530;
                var_17 = (max(var_17, var_4));
                var_18 += 206;
            }
        }
    }
    #pragma endscop
}
