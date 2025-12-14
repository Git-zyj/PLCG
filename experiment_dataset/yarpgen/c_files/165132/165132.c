/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    var_17 = ((var_12 ? var_11 : var_11));
    var_18 = (max(var_15, (!var_1)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 = ((((~(~var_14)))) ? (arr_0 [i_0]) : (((arr_0 [i_0]) >> (var_3 - 2386940212))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_20 = (((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) / ((-1320924749 / (arr_0 [i_0])))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_11 [i_2] [i_2] [i_2] [i_3] = ((55 <= ((-104 ? (((arr_6 [i_2] [i_1] [i_2]) * var_2)) : (arr_1 [i_2])))));
                        var_21 = (arr_1 [i_1]);
                        var_22 = var_11;
                    }
                }
            }
            var_23 = (((!var_3) ? (((arr_3 [i_1]) >> (((arr_3 [i_0]) - 1976348107)))) : -104));
            arr_12 [i_0] [i_0] = -var_3;
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            var_24 = var_9;
                            var_25 = (max(((((arr_7 [i_0] [i_4] [i_4] [i_6]) > ((var_15 ? -115 : 3737449475618952831))))), var_3));
                        }
                    }
                }
            }
            var_26 = (((((max(1925, (arr_13 [i_0] [i_4] [i_0]))))) ? (!-105) : (min((arr_23 [i_0] [i_4] [i_4] [i_0] [i_4] [i_0] [i_0]), (arr_23 [i_4] [i_4] [i_4] [i_0] [5] [i_0] [i_0])))));
            var_27 = 1646353793;
        }
    }
    for (int i_8 = 2; i_8 < 16;i_8 += 1)
    {
        var_28 = (((arr_26 [i_8 + 1]) ? var_5 : (arr_27 [i_8])));
        var_29 += (min((arr_26 [i_8 - 2]), -74));
        var_30 = ((65 ? (arr_26 [i_8 + 4]) : ((min((arr_27 [i_8 + 1]), ((var_4 ? var_0 : var_12)))))));
        var_31 = -47;
    }
    for (int i_9 = 2; i_9 < 8;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 7;i_11 += 1)
            {
                {
                    var_32 = ((!((max(((var_9 ? (arr_2 [i_9 + 1] [i_10] [i_11]) : (arr_22 [i_9] [i_10] [i_10] [i_11] [i_9 + 2] [i_11]))), (arr_25 [i_10]))))));
                    var_33 = (min((arr_1 [i_11]), (((arr_6 [i_9] [1] [i_11]) == ((var_15 ? var_7 : var_9))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 8;i_13 += 1)
                        {
                            {
                                var_34 = ((var_11 ? (((arr_24 [i_9 - 2] [i_12] [8] [i_9 - 1] [i_13] [i_9 - 1]) * -104)) : ((((!(var_2 || var_12)))))));
                                arr_40 [i_12] [i_12] [i_12] = (arr_9 [i_12] [i_13 + 1] [i_11 + 2] [i_12]);
                                var_35 |= (arr_36 [i_9 - 1] [i_10] [i_9] [i_12]);
                                var_36 = ((((var_1 - (arr_15 [i_9 + 1] [i_12]))) + var_14));
                            }
                        }
                    }
                    var_37 = (max(var_37, (((((((arr_33 [i_9 + 2] [i_9 - 1] [i_11 + 3]) ? (arr_33 [i_9 + 1] [i_10] [i_11 + 3]) : var_4))) ? ((var_14 ? (arr_33 [i_9 - 2] [i_10] [i_11 + 3]) : var_0)) : (arr_33 [i_9 - 1] [i_9 - 1] [i_11 + 2]))))));
                }
            }
        }
        var_38 = var_3;
    }
    var_39 += var_2;
    #pragma endscop
}
