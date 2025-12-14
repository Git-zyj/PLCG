/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (0 <= 0);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 = ((((min((arr_7 [i_2] [i_1] [i_0]), (arr_7 [i_2] [i_0] [i_0])))) % var_5));
                    var_15 = (min(var_15, (((var_4 + ((max((arr_7 [i_0] [i_1] [i_0]), var_11))))))));
                    var_16 = (((((min(1, (!18014398509481983))))) - (arr_1 [i_0])));
                    arr_9 [i_0] [i_1] [i_0] [i_2] = (var_7 % 63);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 22;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_17 -= (arr_8 [i_5]);
                                var_18 = (min(var_18, ((((((min(1, (arr_8 [i_6]))) / (arr_16 [i_3] [i_4] [i_6 + 1]))) % (((max((arr_7 [i_4 - 4] [i_4 - 1] [i_4 + 1]), (arr_5 [i_4 - 4] [i_4 - 1] [i_4 + 1]))))))))));
                                arr_20 [1] = -1;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_25 [i_7] [i_7] [i_4 - 2] [i_7] [i_7] [i_7] = (arr_6 [i_4 - 1] [i_4 - 3] [i_4 - 2]);
                        arr_26 [i_7] = ((709141464 ? (arr_19 [i_0] [i_0] [i_0] [i_4] [i_4] [i_7]) : (arr_19 [10] [13] [1] [i_3] [i_0] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 22;i_8 += 1)
                    {

                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            arr_33 [i_0] [i_0] [i_8] [1] [i_0] = 1;
                            arr_34 [3] [i_8] [i_4] [i_8] [3] = ((-(arr_7 [i_9 - 1] [i_4 - 3] [i_8 + 1])));
                            arr_35 [i_3] [i_3] [i_4 - 1] [i_3] [i_8] [i_4] [i_8 - 1] = (arr_0 [i_4 - 4]);
                            arr_36 [i_8] [15] = -var_6;
                        }
                        var_19 = (arr_10 [17]);
                        var_20 = (!((((arr_0 [i_0]) % 1286318288))));
                    }
                    arr_37 [i_0] [i_3] [i_0] = (!((min(1286318288, (min(var_9, (arr_4 [i_0] [i_0] [i_0])))))));
                    arr_38 [i_0] [i_0] [i_4] = (((arr_18 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] [i_4 - 4]) * ((((!(arr_23 [i_4 - 2] [i_4 - 3] [i_4 - 2] [i_4] [i_4 + 1])))))));
                }
            }
        }
        var_21 = 1;
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_22 = (max(var_22, (~2835682429)));
        var_23 ^= var_8;
        var_24 = (((arr_18 [i_10] [0] [0] [i_10] [4] [i_10] [i_10]) ? var_4 : (((1 ^ (arr_13 [i_10] [i_10] [i_10] [11]))))));
    }
    var_25 = 241801946;
    #pragma endscop
}
