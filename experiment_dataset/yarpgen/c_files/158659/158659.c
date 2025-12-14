/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_13 >= var_7) >= (((-4385 && (~var_6))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (arr_5 [6] [i_1] [6])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_17 -= (((((((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1]) != (((arr_1 [4]) ? (arr_0 [i_0 - 1]) : (arr_11 [2] [i_3] [i_1] [i_1] [2]))))))) * (((arr_11 [i_0] [i_4 + 3] [i_2] [0] [6]) ? ((2147483647 ? -3423587457098207348 : 8890480502929631304)) : (arr_13 [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 1])))));
                                var_18 *= ((((((arr_10 [i_0] [i_1] [i_2] [1] [i_4 + 1] [i_4 + 3]) >= (arr_9 [i_1] [i_1] [4] [i_1])))) >> (((min((((arr_11 [i_0] [i_1] [8] [i_1] [4]) ? (arr_5 [8] [8] [i_2]) : (arr_1 [8]))), (arr_5 [8] [i_4 + 3] [i_2]))) - 2767945797))));
                            }
                        }
                    }
                    var_19 = (((((((789498230 ? 133 : 0))) && ((((arr_2 [i_0 - 1] [i_0 - 1]) ? (arr_14 [i_0 + 1] [i_1] [i_2] [i_1] [0] [i_0]) : (arr_5 [i_0] [7] [i_2])))))) && (arr_9 [i_2] [i_1] [i_0] [i_0])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            {
                arr_19 [i_5] [i_5] [i_6] = ((((((arr_17 [i_6] [i_6 - 1] [i_6]) >= (arr_17 [i_5] [i_6 + 2] [i_5])))) & (((arr_17 [12] [i_6 + 1] [12]) ? (arr_17 [i_5] [i_6 - 1] [i_6]) : (arr_17 [i_6] [i_6 + 1] [i_5])))));
                var_20 = ((((((((arr_17 [i_5] [i_6 + 3] [i_6]) != (arr_17 [5] [i_6] [i_5]))) ? ((((arr_16 [i_5]) && (arr_17 [i_5] [i_5] [i_6])))) : (arr_15 [i_5])))) ? (arr_16 [i_5]) : (((((((arr_16 [i_6]) ? (arr_18 [i_5] [i_5] [i_5]) : (arr_18 [i_5] [i_6 + 2] [i_5])))) && (((arr_17 [i_5] [i_5] [i_5]) == -2147483647)))))));
                arr_20 [i_6] [i_6] [i_6] = (((((arr_18 [i_6 + 3] [i_6 + 2] [i_6 + 3]) ? (((max((arr_16 [1]), (arr_17 [i_6] [i_5] [i_5]))))) : (((arr_17 [i_5] [i_5] [i_6]) ? (arr_15 [i_6]) : (arr_18 [i_5] [3] [i_6 + 4]))))) * (((((arr_15 [i_6 + 3]) != (arr_15 [i_6 - 1])))))));
            }
        }
    }
    var_21 = var_14;
    #pragma endscop
}
