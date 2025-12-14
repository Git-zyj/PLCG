/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        arr_9 [i_0] [i_1] [i_0] [i_0] [i_0] = var_10;
                        var_12 += ((-1206763838 < (arr_5 [i_0] [i_1 - 2] [i_3 + 3] [14])));
                        var_13 = (((arr_0 [i_1 - 1] [i_0]) ? var_4 : (arr_2 [i_1 + 1])));
                    }
                    for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        var_14 = ((-((((9848 ? var_9 : 55687))))));
                        arr_12 [i_2] [i_1] = (min(((64783 ? 63215 : 9849)), ((((max(var_4, 3))) ? (~var_7) : (arr_1 [i_0])))));
                        var_15 = var_5;
                        arr_13 [i_1] [14] = ((((min(var_1, ((((arr_8 [i_0] [7] [i_2] [1]) == var_4)))))) ? ((((!(((58336 ? 1 : 35947))))))) : ((~((37468 ? 1156696611 : 55687))))));
                    }
                    for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        var_16 = (min(var_16, (arr_3 [1])));
                        var_17 -= (max((max(0, (max(50572, 62)))), 65024));
                        arr_17 [i_0] [i_0] [i_0] [i_1] = ((!((min(var_0, var_3)))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_18 = (min(var_18, ((max(((var_4 ? 0 : 0)), (min(((1 ? var_3 : var_0)), ((min(1, 127))))))))));
                                arr_24 [i_7] [i_1] [i_6] [i_2] [i_2] [i_1] [i_0] = (max(var_3, (max(1, (arr_22 [i_1] [i_1] [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_1 + 2])))));
                                var_19 = (max(var_19, (min(((((arr_6 [i_1 + 2] [i_6 + 4] [1] [i_6 + 2]) != (arr_6 [i_1 - 1] [i_6 + 1] [1] [i_6 + 2])))), (arr_22 [i_0] [i_1] [i_0] [0] [i_7] [i_0])))));
                                arr_25 [16] &= ((((max(var_2, 4294967295)))) ? (arr_11 [10] [10] [i_2] [i_1] [10]) : ((((((26175 ? var_4 : 1)) == ((min(0, 1))))))));
                            }
                        }
                    }
                    var_20 = (min(var_20, ((((arr_19 [8] [0] [i_1 + 2] [1]) * var_6)))));
                    arr_26 [i_1] = (arr_11 [i_1] [15] [i_1] [i_1] [i_1]);
                }
            }
        }
    }
    var_21 = (~var_6);
    #pragma endscop
}
