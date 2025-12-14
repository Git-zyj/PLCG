/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((-(min(var_3, 11209443326948167032)))), ((max(((max(123, var_1))), var_8)))));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_11 = (max((arr_1 [i_0 + 1] [i_0 - 3]), (arr_1 [17] [i_0 + 1])));
        arr_2 [16] = ((-((((max((arr_1 [i_0] [1]), 2458223298704576633))) & (arr_0 [2] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_12 = (max(((2458223298704576633 - (arr_4 [i_1]))), (arr_1 [i_1] [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_13 = (max(var_13, (arr_16 [i_2] [11] [i_3 - 1] [i_5] [i_3 - 1] [i_3] [i_3 - 2])));
                                var_14 = (max(var_14, var_1));
                                arr_18 [i_5 + 2] [i_4] [i_2] [i_2] [i_1] = (arr_14 [i_1] [i_1] [i_1] [i_1] [i_2] [i_1]);
                                var_15 = (max(var_15, (4461817881491925774 >= -2458223298704576633)));
                                arr_19 [i_1] [i_1] [i_5] [i_4] [i_2] = (arr_10 [i_4] [i_4]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_16 = 3260;
                                arr_25 [i_1] [i_2] [i_1] [i_1] [i_1] [i_1] = ((((max(11034151797191011910, (arr_14 [i_1] [i_2] [i_3 + 2] [i_3] [i_2] [i_7 + 2]))))));
                                arr_26 [i_2] [i_2] [i_3 + 2] = ((max(((~(arr_12 [4] [i_2] [i_6]))), 3260)));
                                var_17 = (arr_24 [i_1] [i_1]);
                                arr_27 [i_1] [i_2] [i_2] [i_7] [3] = 1;
                            }
                        }
                    }
                }
            }
        }
        var_18 = (13888027354233007185 ? (111 != 18215941143487898547) : (arr_17 [6] [8] [i_1] [i_1] [i_1] [i_1]));
    }
    #pragma endscop
}
