/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~0);

    for (int i_0 = 2; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_2 [2] [2] = ((-(((max(-4946108449058515307, (arr_0 [i_0]))) / (!var_2)))));
        var_13 = ((!(((~(arr_0 [i_0 + 1]))))));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_14 = ((min(-4611686018427385856, ((max(var_9, 16481))))) == var_3);
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_15 = 8711054429243207889;
                    arr_11 [4] [i_1] [4] |= ((!(((var_11 ? ((17495490519139842816 ? var_4 : var_10)) : ((30 ? var_7 : -1108609429)))))));
                }
            }
        }
        var_16 = (var_2 ^ (max(208, var_10)));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 13;i_6 += 1)
                {
                    {
                        var_17 = (max((min(-20081, (arr_3 [i_6] [2]))), var_8));
                        var_18 = (max(var_18, (((((min(0, var_0))) - (min((arr_18 [i_1] [i_1 - 1] [i_1] [i_1] [i_6 + 2]), 17059715722225948637)))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 3; i_7 < 12;i_7 += 1)
    {
        arr_25 [3] = 1;
        var_19 = ((var_3 << (-100 + 118)));
    }
    var_20 = (-var_8 > (max(1, 1479881934)));
    var_21 = var_7;
    #pragma endscop
}
