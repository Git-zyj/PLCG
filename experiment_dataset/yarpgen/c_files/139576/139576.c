/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (min((arr_0 [i_1]), var_2));
                arr_6 [i_0 + 1] [i_0 + 1] = ((((((arr_5 [i_0 + 1]) | (arr_5 [i_0 + 1])))) ? var_8 : (((arr_5 [i_0 - 1]) | (arr_5 [i_0 - 2])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            {
                arr_13 [2] [i_2] [2] = (-40 ? 2728019234660629588 : -1991654766);
                var_19 = var_9;
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        {

                            for (int i_6 = 3; i_6 < 17;i_6 += 1)
                            {
                                arr_21 [i_2] [i_3] [i_2] [5] [i_6] = (((((((-78 ? var_3 : var_16))) || (arr_9 [i_5]))) ? (var_4 * var_16) : ((((((arr_10 [i_4]) / -87)) / (arr_15 [i_4] [i_2]))))));
                                var_20 = (min(var_20, ((((arr_19 [i_5] [i_3] [i_3 + 1] [i_3 - 1] [i_6 + 1]) >= (arr_19 [i_3] [i_3] [i_4 + 1] [i_3 - 1] [i_3 - 1]))))));
                                var_21 = ((var_14 ? ((((((var_11 + (arr_7 [i_2] [i_2])))) ? (arr_20 [i_5 + 1] [i_4 - 1]) : (((arr_7 [16] [i_2]) >> (((arr_10 [i_3 + 1]) + 2065949243727788424))))))) : var_3));
                            }
                            for (int i_7 = 0; i_7 < 1;i_7 += 1)
                            {
                                var_22 -= ((-(!2837230997146168545)));
                                var_23 = (max(var_13, (var_9 / var_12)));
                                arr_26 [i_2] [i_3] [i_2] [i_5] [i_5] [0] [13] = (((((((arr_11 [i_2] [i_5 + 1] [i_2]) >= var_11)))) > (max((arr_11 [i_2] [i_5 + 1] [i_2]), 4120900954))));
                                arr_27 [i_2] [i_3] [i_3 - 1] [13] [i_3 + 1] [i_3 - 1] = (((((arr_7 [i_2] [i_2]) < var_16)) && var_1));
                            }
                            var_24 = ((((max(96, (((arr_15 [0] [i_2]) * 15718724839048922039))))) ? ((((arr_22 [i_3 - 1]) < (arr_22 [i_3 + 1])))) : ((((9329848754304115695 && 15248517953473700531) >= var_15)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
