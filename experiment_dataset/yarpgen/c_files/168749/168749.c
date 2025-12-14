/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_15 = (min(((((((arr_0 [i_0 + 1]) ? var_0 : var_9))) ? (arr_0 [i_0]) : var_13)), (((-(((!(arr_0 [i_0])))))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_16 = (((((!(arr_11 [i_3] [i_1] [i_3] [i_3] [i_3] [i_2 - 3] [i_3])))) % ((-(arr_0 [i_4])))));
                                arr_12 [i_0] [i_0] [i_1 + 1] [i_3] [i_0] = ((((8672801061635355801 ? -45 : 1))));
                            }
                        }
                    }
                    var_17 = (min((((min(var_9, var_9)) & var_10)), ((((arr_8 [i_2 + 2] [i_2] [i_2] [i_2 - 3] [i_2 - 2]) ? (arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_0]) : (arr_6 [i_2 + 1] [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_0]))))));
                    var_18 = 1;
                    var_19 -= var_13;
                    arr_13 [i_0] [i_1] [i_1] [i_1] = (((((!(arr_10 [i_0] [i_1] [i_1] [i_0] [i_1])))) > (~111)));
                }
            }
        }
        arr_14 [i_0] = (arr_6 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0]);
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            {

                for (int i_7 = 2; i_7 < 20;i_7 += 1)
                {
                    var_20 *= (max((min((min((arr_17 [14] [7]), var_4)), (max(var_2, var_4)))), var_12));
                    arr_21 [i_5] &= ((!((max(((min(var_10, var_8))), (((arr_20 [i_7 + 1]) ? (arr_16 [i_6]) : var_11)))))));
                }
                arr_22 [i_6] = var_12;
                var_21 -= max(0, 39);
            }
        }
    }
    var_22 = ((~(((!var_12) ^ (!var_6)))));
    var_23 = (~var_13);
    #pragma endscop
}
