/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_11 [5] [9] [i_2] [9] [i_0] = (-1609250388 % 1);
                                var_11 = (arr_5 [i_1]);
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 9;i_7 += 1)
                        {
                            {
                                arr_20 [i_0] [i_1] [i_0] = ((max((((!(arr_10 [i_6] [i_1] [i_0] [i_6] [i_7] [i_7] [6])))), (arr_16 [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 4]))));
                                var_12 = (min((max((-95 ^ var_0), (((arr_4 [1]) | (arr_0 [i_7]))))), (arr_7 [i_7 + 1] [i_6 + 1] [i_5] [i_1] [i_1 - 2] [i_0])));
                            }
                        }
                    }
                }
                arr_21 [i_0] [i_0] [i_0] = (min(((-(min((arr_14 [i_0] [i_0] [i_1] [1] [i_1]), var_2)))), (((!(-1456067890 - var_4))))));
            }
        }
    }
    var_13 = (max(((-(max(var_4, 4150572601049666598)))), -3998));
    var_14 = (max(var_8, (min(var_3, var_4))));
    #pragma endscop
}
