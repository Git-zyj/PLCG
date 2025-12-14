/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_11 = -1682175394921001780;

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_12 = ((!(arr_3 [0])));
                    var_13 = (arr_6 [i_0] [i_0] [9]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_14 = ((!((((arr_8 [i_0] [i_1] [9] [i_0] [i_4 - 1]) - ((24540 - (arr_7 [1] [i_1]))))))));
                                arr_15 [i_1] [i_0] [i_1] [i_2] [10] [0] [0] = ((+(max((arr_4 [5] [i_4 - 1]), (arr_6 [i_4 - 1] [i_4 - 1] [i_4])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_15 = ((!(((((((arr_9 [i_0] [i_1]) ? (arr_0 [i_6]) : 50958))) ? ((~(arr_16 [i_6] [i_1] [i_1] [i_0]))) : (arr_16 [i_0] [i_1] [i_1] [i_2]))))));
                                arr_21 [12] [i_1] [i_1] [i_1] [i_1] = (((((~(max((arr_11 [0]), -1682175394921001780))))) ? (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]) : ((-((-(arr_6 [i_0] [6] [i_0])))))));
                                arr_22 [11] [6] [i_1] [1] [9] [i_1] = min(((((arr_5 [i_5 - 1] [i_6]) ? 2592617657 : -16942))), ((17242418082643953356 | ((((arr_5 [i_6] [i_0]) ? (arr_7 [i_0] [i_1]) : 64))))));
                            }
                        }
                    }
                }
                arr_23 [i_1] = ((((1 ? (((!(arr_8 [i_0] [8] [8] [i_0] [i_1])))) : (((2592617657 || (arr_1 [i_0] [i_1])))))) >> (((((arr_3 [i_0]) ? (max(1204325991065598250, 1)) : (arr_4 [9] [i_0]))) - 1204325991065598228))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            {
                var_16 = 49283;
                var_17 = ((~((~(~15872)))));
                arr_30 [i_8] [i_8] [i_8] = (arr_28 [i_8] [i_8]);
            }
        }
    }
    var_18 = ((((min((~var_6), (17867817225678125582 | 10166409259719253318)))) ? (max(23, var_3)) : (((var_1 ? 1 : var_4)))));
    var_19 = (~52);
    var_20 = (((((6651 & 366424330) ? ((-8202928366340770083 ? var_1 : 3)) : (var_4 & var_7))) | (((~((min(48205, 1))))))));
    #pragma endscop
}
