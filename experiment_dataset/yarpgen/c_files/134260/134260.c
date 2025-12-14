/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_11 = (min(var_11, (min(((var_1 ? (arr_1 [i_0 - 1]) : 664539545)), var_6))));
        var_12 = (((max((arr_0 [i_0 + 2] [i_0 - 2]), var_2))) && (arr_0 [i_0 - 1] [i_0 + 1]));
        var_13 += ((-1 ? ((((!(arr_1 [7]))))) : (max(var_0, (arr_0 [i_0] [i_0 + 2])))));
        arr_2 [i_0] = ((((var_2 ? var_9 : (arr_0 [i_0] [i_0])))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 14;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            arr_15 [i_1] [i_2] &= (arr_14 [4] [i_4] [3] [3] [i_4] [i_4]);
                            arr_16 [10] [10] [i_1] = (((arr_14 [i_4] [1] [i_4 - 2] [i_4 - 2] [i_4 + 1] [i_4]) ? (arr_14 [i_4] [10] [6] [i_4 - 2] [i_4 + 1] [i_4]) : 664539545));
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_14 = (min(var_14, var_0));
                            arr_19 [i_1] [i_2] [9] [i_1] [i_4] [9] [i_6] = -80;
                            var_15 = (((arr_9 [i_2] [i_1] [2]) + (arr_14 [11] [1] [i_3] [i_3] [i_4] [i_6])));
                        }
                        arr_20 [3] [8] [i_1] [i_4] [i_4] = (((!var_8) && (arr_4 [i_1])));
                    }
                    var_16 = (arr_7 [i_2] [i_2] [i_3]);
                    arr_21 [i_1] [i_1] [i_2] [i_1] = -20890;
                    var_17 = (min(var_17, 0));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 8;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                {
                    var_18 *= var_4;
                    arr_30 [i_7] [i_8] = ((((((var_10 ? var_6 : 48))) || (arr_10 [i_7] [i_7] [i_9] [i_9]))));
                }
            }
        }
    }
    #pragma endscop
}
