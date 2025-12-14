/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [3] = (min((min(16777214, 190908800)), 4398046380032));
        var_12 = ((65535 ? var_5 : (16777228 > 255)));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_13 = (arr_6 [i_1 + 1]);
        var_14 ^= (max((max((arr_4 [i_1 + 2]), (arr_4 [i_1 + 1]))), (min((arr_4 [i_1 + 2]), (arr_4 [i_1 - 1])))));
        arr_7 [i_1] = (arr_4 [i_1 + 1]);
        arr_8 [i_1] = ((190908806 ^ (min(190908803, 190908803))));
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 15;i_2 += 1)
    {
        var_15 = ((((arr_9 [i_2] [i_2]) ? var_4 : 2147483647)));
        var_16 = (((((var_11 ? 24 : var_9))) ? ((90 ? var_6 : 4104058511)) : (arr_9 [i_2] [i_2 - 3])));
    }
    var_17 = var_11;
    var_18 = ((-(min((min(var_6, -2147483647)), (-2147483625 & 168)))));
    var_19 = (max((((max(4104058501, var_7)))), var_4));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            {
                var_20 = (max(var_11, var_5));
                var_21 ^= ((((min(var_4, (arr_12 [i_3] [i_4])))) ? (arr_12 [i_4 + 1] [i_4 - 1]) : (((((var_2 ? 63 : 0))) ? var_7 : (arr_9 [i_4] [i_3])))));
            }
        }
    }
    #pragma endscop
}
