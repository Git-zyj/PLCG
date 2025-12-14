/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((max(5155641424978155898, 1576187531)), (((var_11 >> (var_1 - 3978938933527039872))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 = (max(var_20, (arr_2 [i_0] [i_0])));
        var_21 = 10335890868622290833;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_22 += (min(((max(28, -28))), var_2));
        arr_5 [8] = (arr_4 [i_1]);

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_10 [i_1] [i_1] [i_2] = ((((arr_7 [i_1] [i_2]) >= (((arr_8 [i_1] [i_2] [i_2]) ? var_15 : 8110853205087260781)))));
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_18 [1] [i_2] [i_3] [i_5] [1] [0] [1] = var_12;
                            arr_19 [i_5] [i_3 - 2] [i_5] = -10962;
                            var_23 = (min(var_23, -10978));
                            var_24 = (!var_3);
                        }
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            var_25 = ((((max((var_5 * var_11), (arr_14 [i_1] [i_1] [5] [i_3 + 1] [i_4] [i_6 - 1])))) ? (((max((arr_17 [i_1] [i_1] [i_1] [i_1] [6] [i_3 - 2] [i_6 - 1]), (arr_17 [i_1] [i_4] [i_3 - 1] [i_4] [i_6] [i_3 - 2] [i_6 - 2]))))) : ((915431898 ? 1 : 2091992237))));
                            var_26 = (arr_21 [i_1] [i_2] [i_3] [7] [7]);
                            var_27 = (min(var_27, (((((((arr_7 [i_1] [i_4]) ? (arr_7 [i_1] [i_4]) : (arr_7 [i_2] [i_1])))) ? (arr_7 [i_4] [i_6 - 2]) : ((~(arr_7 [i_2] [i_4]))))))));
                            arr_22 [3] [i_2] [i_3] [i_4] [i_4] = ((~(-374594855 ^ 8110853205087260782)));
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            arr_26 [14] [i_2] [i_7] = (arr_16 [i_1] [15] [i_7] [i_4] [i_7]);
                            var_28 = (min(-1, 19213));
                            var_29 = (max(var_29, (arr_16 [i_1] [i_2] [i_1] [i_4] [i_4])));
                        }
                        var_30 = max(var_7, ((8703630781944505423 / (arr_14 [i_1] [15] [i_3 + 2] [15] [i_4] [i_3 - 1]))));
                        arr_27 [i_4] [i_3] [i_2] [11] = (((arr_4 [i_3 + 1]) ? (arr_23 [i_3 - 1] [11] [i_3 - 2] [16] [i_3 + 2]) : ((var_2 ? ((((!(arr_17 [i_1] [i_2] [2] [6] [i_2] [i_4] [i_4]))))) : 2391975759))));
                        var_31 = (max(var_8, var_15));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        var_32 = 10335890868622290833;
        arr_30 [i_8] = ((((max((arr_29 [i_8]), (arr_29 [i_8])))) && ((((((arr_28 [i_8]) >= (arr_29 [i_8]))) ? (!var_1) : (arr_29 [i_8]))))));
    }
    #pragma endscop
}
