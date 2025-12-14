/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (max((!var_7), var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_11 = 7809;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_1] [i_1] [i_1] = 16232351562229292268;
                                var_12 += ((!((((!2214392511480259345) >> ((((max((arr_11 [i_0]), -32753))) + 10891)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_20 [i_2] [1] [i_2] = (((((!((!(arr_6 [2] [i_2] [2])))))) ^ (arr_16 [i_6] [i_5] [i_2] [i_2] [i_0] [i_0])));
                                var_13 = (max(((max(3479056559, ((((arr_15 [i_0] [i_1] [i_0]) ? (arr_16 [11] [i_1 - 1] [i_2] [i_2] [i_5] [i_6]) : (arr_1 [i_5] [i_0]))))))), (min(((min((arr_7 [i_2 - 1] [10] [i_2] [i_2 - 1] [i_2]), (arr_10 [i_2] [i_5] [i_2] [i_2])))), (((arr_0 [i_2 + 1] [i_2 + 1]) + (arr_15 [i_1] [i_2] [i_5])))))));
                                var_14 = (max(var_14, (max((((32753 ? (((arr_2 [i_2] [i_1]) ? (arr_12 [i_0] [i_0] [i_0] [i_5] [i_0] [i_0]) : (arr_11 [i_6]))) : (arr_2 [4] [i_1])))), (arr_18 [i_0] [i_0])))));
                                var_15 = ((-(!16777215)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = ((~((max(32753, -32764)))));
    #pragma endscop
}
