/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_9 [i_0 - 1] = (((((~(arr_1 [i_0 - 1])))) ? (arr_4 [i_2 - 2] [i_0 + 2]) : (max((arr_5 [i_0 - 1] [i_1]), (arr_1 [i_0 + 1])))));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_13 [1] [10] [10] [1] = (arr_1 [i_2 - 2]);
                        var_17 = ((!((!((max((arr_11 [i_0] [i_0] [i_0 + 2] [i_0]), (arr_5 [i_0] [i_3]))))))));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_18 = (i_4 % 2 == 0) ? (((((!(~1496))) ? (max((((arr_14 [i_0 + 2] [i_1] [i_2] [i_4] [i_4]) & (arr_15 [i_2]))), ((max((arr_16 [i_0] [i_0 + 3] [9]), (arr_8 [i_0] [i_1] [i_0] [i_2])))))) : ((((max(1, (arr_10 [6] [i_1] [i_1] [i_1])))) >> ((((max((arr_3 [i_0 + 1] [1]), (arr_14 [i_0 - 1] [i_0] [i_1] [i_2] [i_4])))) - 65516))))))) : (((((!(~1496))) ? (max((((arr_14 [i_0 + 2] [i_1] [i_2] [i_4] [i_4]) & (arr_15 [i_2]))), ((max((arr_16 [i_0] [i_0 + 3] [9]), (arr_8 [i_0] [i_1] [i_0] [i_2])))))) : ((((max(1, (arr_10 [6] [i_1] [i_1] [i_1])))) >> ((((((max((arr_3 [i_0 + 1] [1]), (arr_14 [i_0 - 1] [i_0] [i_1] [i_2] [i_4])))) - 65516)) + 116)))))));
                        var_19 = (max((arr_6 [i_0 - 1]), ((((((1525 ? 4895749457654492727 : 1))) ? (arr_15 [i_0 + 2]) : (arr_10 [i_0 + 2] [i_2 + 1] [i_0 + 1] [i_4]))))));
                    }
                }
            }
        }
    }
    var_20 = ((!((((!var_12) >> ((((max(var_7, 6893))) - 6884)))))));
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 16;i_9 += 1)
                        {
                            {
                                arr_32 [i_5] [i_6] [i_5] [i_8] [i_5] = (((-1021163183 + 2147483647) >> (4879945234984685278 - 4879945234984685261)));
                                var_21 = (((arr_19 [i_6] [i_7 + 1]) & (((arr_29 [i_5 + 3] [i_5 + 3] [i_9 + 2] [i_8] [i_9] [8]) ? (arr_29 [i_9] [i_9] [i_9 - 1] [i_9] [i_9] [i_9 - 1]) : (arr_19 [i_6] [i_6])))));
                            }
                        }
                    }
                }
                arr_33 [i_6] [i_5] [15] = (max((((arr_18 [i_5]) & (arr_18 [i_5]))), (((arr_18 [i_5]) ? (arr_18 [i_5]) : (arr_18 [i_5])))));
            }
        }
    }
    #pragma endscop
}
