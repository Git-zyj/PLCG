/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (-var_9 ? var_2 : (min(var_11, (min(var_0, var_1)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_7;
        var_18 = (min(var_18, ((((((((arr_2 [i_0] [i_0]) ? var_4 : (arr_1 [i_0]))) == (arr_2 [i_0] [i_0]))) && ((min(var_4, var_12))))))));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1] = var_12;
        var_19 = (min(var_19, (arr_5 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                {
                    var_20 ^= max(4267119702, 27847593);
                    var_21 = var_6;
                    arr_14 [i_1 + 1] [14] [i_2] [i_3 + 2] = (arr_8 [i_1] [i_1] [i_3]);
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_19 [i_4] = ((((max(var_8, (arr_1 [i_4])))) ? (((((var_0 ? var_3 : var_5))) ? var_1 : var_6)) : (((((((~(arr_2 [1] [10]))) + 2147483647)) >> (((min((arr_5 [i_4]), (arr_13 [i_4] [16] [i_4]))) - 12293)))))));
        arr_20 [2] = (max((min((var_11 > var_2), ((35774 ? (arr_6 [i_4]) : -88)))), var_7));
        var_22 |= ((var_8 * (max(((35774 / (arr_5 [i_4]))), var_11))));
    }
    var_23 = (max(var_23, (max(var_16, var_4))));
    #pragma endscop
}
