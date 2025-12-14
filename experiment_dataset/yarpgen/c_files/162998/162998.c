/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 = (max(var_18, 1));
        var_19 *= (~65527);
        arr_2 [i_0] [7] = ((~((~(((arr_0 [i_0] [9]) ? var_12 : 100))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (arr_0 [i_1] [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_20 += ((var_1 ? 0 : (arr_0 [i_1] [i_2 - 1])));
                    var_21 += (((-7603 + var_5) ? (arr_11 [3] [i_2] [16]) : ((203 ? var_7 : 2147483645))));
                    var_22 &= var_17;
                    var_23 = (max(var_23, (((var_17 ? (!var_11) : (var_11 && 65527))))));
                    var_24 = -11637428471941306435;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_25 = var_7;
        var_26 = var_11;
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_27 = var_12;
        var_28 = 0;
        var_29 |= ((((max((arr_14 [i_5]), (arr_15 [i_5])))) % (arr_15 [i_5])));
    }
    var_30 = ((((((!2251799813685247) ? (!var_9) : 7602))) ? var_7 : -7063328594095166108));
    #pragma endscop
}
