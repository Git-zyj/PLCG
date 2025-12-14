/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_13 += var_5;

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_7 [12] [i_1] [i_1] [i_0] = (((max((arr_4 [i_0] [i_1] [i_2]), 2394322275069974667)) % (min(var_6, (-2394322275069974667 / var_8)))));
                    arr_8 [i_1] [i_1] [i_1] = ((((((var_9 % (arr_5 [i_0] [i_0] [i_1] [i_2]))))) ? (arr_1 [5] [i_1]) : var_9));
                    var_14 = (max(var_14, ((((arr_0 [i_2] [i_0]) % ((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_2])))))))));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] = (((max((min(var_9, (arr_11 [i_0] [10] [i_2] [i_2] [i_0] [i_0]))), (arr_2 [i_0] [i_1] [i_2]))) * (max((arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2]), (!24625)))));
                        var_15 = (max(var_15, (((!(((-(arr_0 [i_3] [i_2])))))))));
                        arr_13 [i_1] [i_2] [i_1] [i_1] = ((var_12 / (min(2394322275069974666, (arr_9 [1] [1] [i_2] [i_2])))));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        arr_17 [i_0] [i_1] [i_0] [i_1] [i_1] [i_4] = (min((((!(arr_3 [i_0])))), ((-(max(0, var_6))))));
                        arr_18 [i_1] [i_2] [i_1] [i_0] [i_1] = (max(((~(arr_1 [i_1] [i_4]))), (arr_2 [i_0] [i_0] [i_0])));
                        var_16 = max(((((!(arr_6 [i_4] [i_2] [i_1] [i_0]))))), ((-(arr_0 [i_1] [5]))));
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_17 -= ((((((!(arr_22 [i_0] [i_5]))))) / (~2394322275069974667)));
                            var_18 = ((((((arr_5 [i_6] [i_0] [i_2] [i_0]) ? (arr_10 [i_0] [1] [i_1] [i_1] [i_5] [i_6]) : (arr_10 [i_0] [i_1] [i_2] [i_1] [i_5] [i_1])))) ? ((((arr_5 [i_1] [i_2] [i_5] [0]) + var_3))) : -var_1));
                        }
                        var_19 = 251659850;
                    }
                    var_20 -= arr_19 [i_0] [i_0] [i_2];
                }
            }
        }
    }
    var_21 = -29124;
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                {
                    var_22 = (max(var_22, 1));
                    arr_29 [i_9] [i_9] [i_8] [i_7] = (max(2394322275069974667, (max((arr_26 [i_7]), (max(var_5, (arr_2 [i_9] [i_8] [i_7])))))));
                }
            }
        }
    }
    var_23 = 8809774430029965375;
    #pragma endscop
}
