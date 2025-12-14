/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_11 += (((var_9 >= var_1) % (((((9613 + -675534731) + 2147483647)) >> (((var_9 != (arr_3 [i_0]))))))));
        var_12 = ((!((((240 ? 17450738169064347256 : 17450738169064347245))))));
        arr_4 [i_0] = ((~((15 * (arr_2 [i_0])))));
        arr_5 [i_0] [i_0] = (~-180);
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            {
                arr_11 [i_2] = ((~(var_6 + var_10)));
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_13 *= min((~-32755), ((((((arr_16 [2] [i_3] [i_2] [i_1]) + var_3)) != ((min(var_8, var_3)))))));

                            for (int i_5 = 0; i_5 < 18;i_5 += 1)
                            {
                                arr_22 [i_1] [i_1] [i_5] [i_4] [i_4] = (((arr_16 [i_2 - 3] [i_3 - 2] [i_1] [i_1]) < ((max(var_6, 0)))));
                                arr_23 [i_1] [i_1] [i_3] = (min(((65522 ? ((255 ? var_3 : (arr_3 [i_1]))) : (var_1 < var_0))), var_3));
                            }
                            for (int i_6 = 2; i_6 < 16;i_6 += 1)
                            {
                                var_14 = (((arr_21 [i_1] [i_1] [i_3 + 1] [i_1] [i_6 + 1] [i_3] [i_1]) ? (min(var_0, (~var_0))) : (~-121)));
                                arr_28 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = arr_14 [i_1] [i_1];
                            }
                            var_15 = 0;
                            arr_29 [i_2] [i_2 - 3] [i_2 + 1] [i_2] = ((~(((-32755 + 2147483647) >> (93 - 86)))));
                            arr_30 [i_1] [i_1] [i_3] [i_4] = (65522 % 9);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 23;i_8 += 1)
        {
            {
                var_16 = min(-14563, 996005904645204359);
                var_17 = ((((62914560 ? 9022851541243581395 : -1370872560)) >= var_10));
            }
        }
    }
    var_18 |= (((var_2 ? ((min(var_6, var_4))) : var_7)));
    var_19 = (max((!-1), var_7));
    #pragma endscop
}
