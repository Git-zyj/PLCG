/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_2] = (~var_6);
                    var_10 -= (min((((min(-1, var_3)))), var_5));
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
    {
        var_11 = var_1;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    arr_17 [i_3] [i_5] [i_5] [i_3] = (min(-var_8, (-1 || 3)));
                    var_12 = (min(0, 519864852859914512));
                    var_13 = (min(var_13, ((var_8 ? ((min(1390968948, -32765))) : ((17926879220849637111 >> (519864852859914492 - 519864852859914446)))))));
                    var_14 += ((-2 >= ((min((min(13, var_7)), -13)))));
                }
            }
        }
        var_15 = (max(var_15, 46));
        var_16 |= ((17926879220849637129 - -1) ? (var_7 - 108) : var_3);
        var_17 -= (7838876011426684435 && 254);
    }
    for (int i_6 = 1; i_6 < 18;i_6 += 1) /* same iter space */
    {
        var_18 = (min((((var_6 ^ 4503599627366400) & var_5)), (var_9 - 3)));
        var_19 |= ((min((234 - var_8), var_8)));
        arr_20 [i_6] = (~96);
        var_20 = (var_8 << (((129 & 249) - 106)));
    }
    for (int i_7 = 1; i_7 < 18;i_7 += 1) /* same iter space */
    {
        var_21 = min(var_9, (((min(var_5, var_6)) * (var_6 < 126))));
        var_22 = (max(var_22, (((-(min(13112427060083453578, var_7)))))));
    }
    var_23 = (((((min(1, var_7)) & var_0)) & var_2));
    #pragma endscop
}
