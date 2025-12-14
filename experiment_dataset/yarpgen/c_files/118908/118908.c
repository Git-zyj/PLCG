/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((((((18446744073709551603 ? 12 : 1072304388))) ? ((min((arr_0 [i_0]), (arr_2 [i_0] [i_1] [i_1])))) : 1395509037)) & ((223 | (((arr_4 [i_0 - 2] [i_0]) ? (arr_0 [i_0]) : (arr_4 [i_0] [i_0])))))));
                arr_6 [i_0] [i_0] [2] &= ((((!((max(1739221330, 1)))))) <= (1 + 15));

                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_2] = (min(6, (((!(((12 ? (-2147483647 - 1) : var_3))))))));
                                var_10 = (max(((var_6 ? ((max(var_2, 1395509030))) : (max((arr_13 [i_2] [i_3]), (arr_12 [i_0] [i_3] [i_0]))))), ((((arr_3 [i_0 + 2]) - (arr_3 [i_0 + 2]))))));
                                var_11 = (arr_2 [i_0] [i_3] [i_4]);
                            }
                        }
                    }
                    var_12 = ((((3 ? 10 : 246)) << ((((28 ? 1395509030 : 0)) - 1395509006))));
                    var_13 = (~1);
                }
                for (int i_5 = 3; i_5 < 14;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_24 [i_6] [i_0] = (arr_3 [i_6 - 2]);
                                arr_25 [i_1] [i_0] = (arr_18 [i_1] [i_5 - 2] [i_6] [i_7]);
                            }
                        }
                    }
                    var_14 &= (arr_7 [i_0 - 3]);
                }
                for (int i_8 = 3; i_8 < 14;i_8 += 1) /* same iter space */
                {
                    arr_29 [i_0] [i_8 + 2] = ((-4670060435624674594 ? 3628693720 : 18446744073709551577));
                    arr_30 [6] [i_1] [i_1] [i_8] &= (arr_26 [i_0] [i_1] [i_0] [i_8 - 2]);
                    arr_31 [i_0 + 1] [i_0] [i_8 + 2] = -1395509027;
                }
            }
        }
    }
    var_15 = var_0;
    #pragma endscop
}
