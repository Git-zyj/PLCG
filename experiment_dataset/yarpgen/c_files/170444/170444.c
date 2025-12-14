/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = var_11;
        var_14 = ((((((arr_1 [i_0] [i_0]) / var_11))) ? ((((var_4 && (arr_1 [i_0] [i_0]))) ? var_8 : 5039)) : (max(4027489055975706894, (arr_1 [i_0] [i_0])))));
        arr_3 [i_0] = (min((arr_0 [i_0]), (arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, ((max((min((arr_5 [i_0] [i_1]), 75)), ((((min(-25780, -75))) ? 11847231358828126987 : (-1 * var_6))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_16 &= (min(0, 2491862989));
                                arr_14 [i_0] [i_2] [i_2] [i_3] [i_2] = (min(var_11, (((((min(65535, 25533)))) - (max(-32356, var_8))))));
                                arr_15 [i_0] [i_1] [i_3] [i_2] [i_2] [i_2] = 0;
                            }
                        }
                    }
                    var_17 = (max(var_17, 10));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    var_18 = (max((((var_6 == ((min(74, 17)))))), (max((((arr_22 [i_7]) & var_3)), ((max((arr_21 [i_7]), 2491862995)))))));
                    arr_27 [i_7] [i_6 + 1] [i_5] = (((((((((arr_21 [i_5]) != -27178))) + (~-88)))) ? ((((var_9 != -39) && (((-(arr_19 [i_5]))))))) : (arr_22 [i_5])));
                    var_19 = (((((201698088 == (arr_17 [i_5] [i_6])))) == (((min((((-1418394394 == (arr_20 [i_7])))), 65514))))));
                }
            }
        }
    }
    #pragma endscop
}
