/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_15 = -1;
        var_16 = (min(var_16, 1));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = (min((arr_4 [i_1]), 34));
        arr_7 [i_1] [i_1] = (!(~-12143));
        var_17 &= (1 - 65535);
        arr_8 [i_1] |= (((((arr_5 [i_1]) + 2147483647)) << (((arr_2 [i_1] [i_1]) - 5153370880704632049))));
    }
    var_18 -= var_6;
    var_19 = (~var_1);
    var_20 = ((!(!var_11)));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                arr_15 [i_2] [i_2] = (((arr_1 [i_2 + 1]) ? ((((!(arr_13 [i_2] [i_3] [i_3]))) ? -65536 : 17834032960583048770)) : ((((!((!(arr_10 [i_2])))))))));

                for (int i_4 = 2; i_4 < 17;i_4 += 1) /* same iter space */
                {
                    arr_18 [i_2] = ((!(-102 && 823906779)));
                    arr_19 [i_2] [1] [i_2] [i_4 + 1] = (arr_10 [i_3]);
                    arr_20 [i_2] = (((((min(var_12, (arr_10 [i_4]))))) ? (((-823906764 + 1) * ((((arr_1 [i_2]) <= -695355466))))) : (((arr_10 [i_4]) * (arr_9 [i_2])))));
                }
                for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
                {
                    arr_23 [i_2] [i_2] [6] = (((((((1 ? 1 : 823906797))) ? ((-695355466 ? 136 : 20395)) : (arr_14 [i_2])))) ? (~1) : (((18823 <= (arr_5 [i_2 - 1])))));
                    var_21 = var_6;
                }
                /* vectorizable */
                for (int i_6 = 2; i_6 < 17;i_6 += 1) /* same iter space */
                {
                    var_22 = (~-83);
                    arr_28 [i_2] [i_2] [i_3] [i_2] = (arr_2 [i_6] [i_2 - 1]);
                }
            }
        }
    }
    #pragma endscop
}
