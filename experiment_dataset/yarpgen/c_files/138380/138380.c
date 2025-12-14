/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [i_0] = (max((((!(arr_3 [i_0 + 4] [i_0])))), (arr_4 [i_0] [i_0])));

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        var_12 = (arr_2 [i_0]);
                        var_13 = var_7;
                        var_14 = (max(var_14, 6195754727660159476));
                        var_15 = (max(((!(((12250989346049392157 ? var_3 : (arr_3 [i_1] [i_0])))))), ((!(arr_8 [i_0] [i_0] [i_0] [i_0 + 2])))));
                        var_16 = (min(var_16, (((((((arr_1 [i_2] [i_2]) ? (arr_1 [i_2] [i_2]) : (arr_1 [i_2] [i_2])))) ? ((-(arr_1 [i_2] [i_2]))) : ((((arr_1 [i_2] [i_2]) && (arr_1 [i_2] [i_2])))))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_17 = (((arr_10 [i_0 + 4] [i_0 + 4] [i_1 - 1]) * (arr_10 [i_0 + 1] [i_1] [i_1 + 4])));
                        var_18 = (arr_3 [i_0] [i_0]);

                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_19 = (min(var_19, (((~(arr_12 [i_0] [i_0] [i_5] [i_0 + 3] [i_0]))))));
                            arr_16 [i_0] [i_0] [i_2] = (((arr_3 [i_0 + 3] [i_0]) ? (arr_15 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 2]) : (arr_13 [i_0] [i_0])));
                            arr_17 [i_0] [i_0] = var_6;
                        }
                        var_20 = ((!(var_3 * -21063)));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_21 [i_0] = ((var_7 ^ (3286162148544832701 * 6195754727660159458)));
                        var_21 = arr_14 [i_2] [i_1 + 3] [9] [i_0] [i_6];
                        var_22 = ((var_9 ? (arr_18 [i_1 + 3] [3] [3]) : ((var_9 | (arr_4 [i_1] [i_0])))));

                        for (int i_7 = 3; i_7 < 16;i_7 += 1)
                        {
                            var_23 = ((arr_11 [i_7] [i_0] [i_0]) ? 1453171161 : -1);
                            var_24 = 8637658285948931766;
                            var_25 = ((((var_8 / (arr_0 [i_0] [i_0 - 1])))) ? 21068 : (arr_19 [i_0] [i_0 - 1] [i_1 - 2] [i_0 - 1] [i_7 + 2] [3]));
                        }
                    }
                    arr_24 [i_0] = ((((((((max((arr_10 [i_0] [3] [i_2]), -14396)))) % (9041289805484175602 + 1)))) || ((((-(arr_22 [i_0] [i_0 + 1] [10] [i_0]))) != ((264241152 ? (arr_15 [i_0] [i_0] [i_1 - 2] [i_2] [i_2]) : 32))))));
                }
            }
        }
    }
    var_26 = min(((((63355780 ? 63355780 : var_2)))), (max((~8663083469919239009), var_8)));

    /* vectorizable */
    for (int i_8 = 2; i_8 < 22;i_8 += 1)
    {
        arr_28 [i_8] = (((((arr_27 [i_8]) ^ (arr_26 [i_8] [13])))) ? -var_1 : (arr_27 [i_8 - 1]));
        var_27 = (((arr_25 [i_8] [i_8 - 1]) >= (arr_25 [i_8 + 1] [i_8 - 1])));
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        var_28 |= (-(((arr_27 [i_9]) | ((~(arr_25 [i_9] [0]))))));
        var_29 = (i_9 % 2 == zero) ? ((max(((((((var_8 << (((arr_30 [i_9] [i_9]) + 7643263232323683762))))) && (arr_29 [i_9])))), ((((max((arr_27 [i_9]), (arr_27 [i_9])))) ? (arr_27 [i_9]) : (min((arr_27 [i_9]), (arr_30 [i_9] [i_9])))))))) : ((max(((((((var_8 << (((((arr_30 [i_9] [i_9]) + 7643263232323683762)) - 7167474665247038123))))) && (arr_29 [i_9])))), ((((max((arr_27 [i_9]), (arr_27 [i_9])))) ? (arr_27 [i_9]) : (min((arr_27 [i_9]), (arr_30 [i_9] [i_9]))))))));
    }
    var_30 = var_8;
    #pragma endscop
}
