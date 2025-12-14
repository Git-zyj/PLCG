/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = 8489653584172344137;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] = (max(((-8489653584172344137 ? -8489653584172344137 : var_5)), (~-8489653584172344137)));
                            var_18 = (max(var_18, (((((max((arr_8 [i_3] [i_3] [i_3 + 1] [i_3]), (arr_8 [i_3 - 1] [i_3] [i_3 + 2] [i_3 - 1])))) >> ((((~(arr_0 [i_2]))) - 817141813)))))));
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_19 += ((var_12 + (arr_3 [i_4] [i_4])));
        var_20 += ((var_8 ? (arr_10 [i_4] [i_4] [i_4] [i_4] [i_4]) : var_0));
        arr_14 [i_4] [i_4] = 585454573;
    }
    var_21 = (~var_9);
    #pragma endscop
}
