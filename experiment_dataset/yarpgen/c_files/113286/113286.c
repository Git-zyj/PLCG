/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((((((6280886641137045333 & 21522) & -21523)) & (~var_8))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = (((((21522 & (arr_0 [i_0] [i_0])))) ? -21505 : (((arr_1 [i_0] [9]) - var_6))));
        var_17 = ((var_5 ? (-21523 - 21543) : ((var_9 + (arr_1 [i_0] [6])))));
        arr_2 [i_0] = (-5780853078519245418 || 0);
    }

    /* vectorizable */
    for (int i_1 = 4; i_1 < 18;i_1 += 1)
    {
        var_18 = (((17122559531637305352 ^ 0) && (arr_4 [i_1])));
        var_19 = ((((-(arr_3 [i_1]))) ^ var_4));
    }
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    {
                        var_20 = (min(var_20, ((min((((arr_8 [i_2 + 1]) & 21543)), 18)))));
                        var_21 = ((-(min(65515, (arr_0 [i_2 - 1] [i_3 - 2])))));
                        var_22 ^= ((((max(var_13, (max(-9223372036854775805, (arr_11 [1] [1] [1])))))) ? (arr_1 [i_4] [i_2]) : (~-1545687790)));
                    }
                }
            }
        }
        var_23 = (max(((((min(1324184542072246264, 17122559531637305351))) ? (((~(arr_8 [i_2])))) : (min((arr_11 [i_2 + 2] [i_2 - 1] [i_2 + 2]), var_4)))), (((((var_14 ? 6679847907476103329 : -18)) > (((18 ? (arr_0 [6] [i_2]) : -21523))))))));
    }
    var_24 = ((((((~var_11) ? (673117864285421524 > 9) : var_11))) ? (min(var_1, -var_14)) : ((-var_7 ? -var_3 : (min(32760, 1545687789))))));
    var_25 = 224;
    #pragma endscop
}
