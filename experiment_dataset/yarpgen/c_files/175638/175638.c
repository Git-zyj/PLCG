/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_12;

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_15 ^= (((((arr_1 [i_0 - 1]) + (var_9 >= var_8))) >> (((min((arr_0 [i_0] [i_0 - 1]), (arr_1 [i_0]))) + 7514924051260049543))));
        var_16 = (+(min(((max((arr_1 [i_0]), (arr_1 [i_0 + 1])))), (min((arr_0 [i_0 + 1] [i_0]), var_5)))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_17 = (arr_2 [i_0] [i_0 + 2]);
                        var_18 *= (((~25611) < (arr_6 [i_3])));
                        arr_11 [i_3] [i_0] [i_2] [i_1 + 1] [i_0] [i_0] = (((((var_10 < (arr_0 [i_0] [i_1 + 2]))))));

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_19 |= (((((((((arr_10 [i_4] [i_3] [i_2] [i_1 - 1] [i_0] [6]) > (arr_3 [i_2] [i_1])))) > (arr_2 [i_0] [i_1 + 1])))) < (arr_3 [i_4] [i_3])));
                            var_20 = (((((var_3 / ((min((arr_3 [i_1] [i_1]), var_1)))))) % (min((((arr_13 [i_4] [i_2] [i_2] [i_1] [i_0]) << (((arr_8 [i_0] [10] [i_2] [i_3] [i_0] [1]) + 292063200)))), ((((arr_1 [i_0]) | var_10)))))));
                            var_21 ^= (arr_3 [i_2] [i_1]);
                            var_22 = (min((min(((~(arr_2 [i_3] [i_2]))), ((((arr_7 [i_0] [i_0] [9]) <= (arr_8 [i_0 + 2] [4] [i_2] [4] [i_4] [i_4])))))), ((max((arr_3 [i_1 + 2] [18]), (arr_3 [i_1 + 1] [i_1]))))));
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_23 = (min((min(((min((arr_2 [i_1 + 2] [i_1 + 2]), var_9))), (min(var_1, var_12)))), ((((((min(var_0, var_10)))) > (max((arr_16 [i_5] [i_5] [i_5] [i_5] [1] [18] [i_5]), (arr_12 [i_0 + 1] [i_1] [i_2] [1] [i_5]))))))));
                            var_24 = (((((var_11 % var_10) % (min((arr_4 [i_0] [i_1] [i_2] [8]), (arr_8 [i_5] [i_5] [1] [i_5] [i_5] [i_5]))))) >= var_4));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_25 += (((((((min(var_0, var_11)) + (~var_10))) + 9223372036854775807)) >> (((~var_2) - 13833803747591235129))));
                                arr_30 [i_7] [1] [9] [i_8] [9] [i_9] = ((((((arr_13 [i_0 - 1] [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 - 1]) >= (arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 2])))) >> (((((arr_20 [i_9] [i_0 + 1] [i_0 + 1]) & (arr_13 [i_0 + 2] [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_0 - 1]))) - 2379064367658566655))));
                                arr_31 [i_7] = ((~(min(((min(var_13, (arr_5 [i_0 - 1] [i_6] [i_7])))), (min((arr_23 [i_8] [i_7] [i_6] [i_0]), var_5))))));
                                var_26 += var_5;
                            }
                        }
                    }
                    arr_32 [17] [i_7] [17] [17] = (min((((arr_17 [i_0] [i_0 + 2] [i_0] [i_0 + 1] [i_6] [i_7]) + (arr_8 [17] [i_0] [i_0 + 2] [i_0 - 1] [i_7] [i_7]))), ((((arr_8 [i_0] [i_0] [i_0 + 1] [i_0 + 2] [i_7] [i_7]) < (arr_17 [9] [i_0] [i_0] [i_0 - 1] [i_6] [i_7]))))));
                    var_27 = (min(((min(var_1, (arr_27 [i_0 - 1] [i_0 - 1] [i_7] [16] [i_0 + 2])))), (arr_9 [i_0 + 2] [i_0 + 2])));
                    arr_33 [10] |= (max(((-(arr_23 [i_0] [i_6] [i_6] [5]))), (((var_3 >> (((arr_21 [i_0 - 1] [i_0] [i_0]) + 2758346099356316739)))))));
                }
            }
        }
    }
    var_28 = (max((((24235 / -6111614970462346078) ^ 65533)), ((min(var_3, (var_9 == var_2))))));
    #pragma endscop
}
