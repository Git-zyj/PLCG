/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_3, (((var_13 | (38123 < 38123))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] = (min(15833549708276272987, 979504330473554136));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_8 [8] [i_1] [i_0] [i_1] = -1;
                    arr_9 [i_0] [i_0] [0] [6] |= var_7;
                    var_15 = ((-(27385 - 27391)));
                    var_16 = (2971317302 >> (-14953 + 14979));
                    arr_10 [i_1] = (min((((var_3 + 10687) + 969811816)), ((((arr_3 [i_0]) & 747569262)))));
                }
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1 + 1] [i_1] [i_4] [i_4] = var_4;
                                var_17 = (min(38141, ((185 >> (1252436965 - 1252436953)))));
                                arr_18 [i_1] [i_1 + 1] [4] [i_4] [8] = 27392;
                            }
                        }
                    }
                    var_18 += 9525015284710951857;
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 9;i_7 += 1)
                        {
                            {
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_1] = (((10687 >= 1925948903) < (max(46699, 641378072))));
                                var_19 = (((-(arr_22 [i_1]))));
                                arr_28 [i_1] = (min(((((arr_22 [i_1]) ^ (arr_22 [i_1])))), ((9275254609312685063 ? 7853048020936523548 : 1252436965))));
                            }
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    arr_32 [i_0] [5] [i_1] [i_1] = ((-1 ? (((114 ? -20970 : 14953))) : -4880069259977455765));
                    arr_33 [i_0] [i_1] [i_8] = (min((+-13), (((((max((arr_11 [i_1] [i_1] [i_1]), var_6))) != (max(-1906822342, 7853048020936523537)))))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            {
                                var_20 = (max(var_20, (var_5 & var_9)));
                                arr_39 [i_0] [i_0] [0] [i_8] [i_1] [0] [i_10] = 1416914241;
                            }
                        }
                    }
                    var_21 = (((arr_21 [i_1 + 1] [i_1] [2] [i_1]) && (((3661796503583958560 ? 35591 : 114)))));
                }
            }
        }
    }
    #pragma endscop
}
