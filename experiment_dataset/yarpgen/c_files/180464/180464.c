/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        arr_3 [16] [16] = (-9223372036854775807 - 1);
        var_16 *= (5202674469276316035 && -18613);
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_17 = var_3;
        var_18 = (min(var_18, 32767));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_19 -= (((((!(arr_0 [11])))) << (((arr_0 [i_2]) - 101))));
        var_20 = var_15;
        var_21 = (arr_5 [i_2]);
        arr_8 [i_2] = var_6;
    }
    var_22 = ((-(!var_4)));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 11;i_4 += 1)
        {
            {
                var_23 = (arr_5 [i_4 + 4]);
                arr_15 [i_3] [i_4] [i_4] = ((((arr_5 [i_4 + 4]) || (arr_1 [i_4 + 3]))));
            }
        }
    }
    #pragma endscop
}
