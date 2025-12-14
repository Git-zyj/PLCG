/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_14 = (max((max(var_12, (((-2003650952054810359 & (arr_1 [i_0])))))), var_1));
        arr_4 [i_0] [i_0] |= 7;
        arr_5 [i_0] = (min((min((~0), (arr_2 [i_0] [i_0]))), ((min((0 | var_11), ((var_10 ? (arr_1 [i_0]) : (-9223372036854775807 - 1))))))));
        arr_6 [12] = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    {

                        for (int i_5 = 3; i_5 < 16;i_5 += 1) /* same iter space */
                        {
                            arr_21 [i_1] [i_5] [14] [i_4] [i_5] = (((((-66 ? (arr_18 [i_1] [i_1] [i_5] [i_4] [i_4] [i_5]) : (((min(30502, 26640))))))) ? (((arr_14 [i_3 - 4] [i_5 - 2] [i_4 + 1]) ? (((arr_15 [i_1] [i_2] [i_3] [i_4] [i_5]) / var_8)) : 38879)) : ((max(((18 ? 38896 : -19)), (((arr_19 [i_1] [i_1] [i_1] [i_1] [5] [i_1]) ? -2685 : var_6)))))));
                            var_15 = var_3;
                            var_16 = ((((((arr_8 [i_1]) ? var_11 : (arr_14 [i_1] [i_3 - 2] [i_5 + 3])))) ? (((32 ? (arr_15 [i_2] [i_3 + 1] [i_3 - 1] [i_4] [i_4]) : (arr_15 [i_2] [i_3] [i_3 - 3] [i_5] [i_5])))) : (min((arr_18 [i_3] [i_3 - 3] [i_5] [i_3] [i_3 - 2] [i_3 - 4]), (arr_18 [i_3] [i_3 - 4] [i_5] [i_3] [i_3 - 1] [i_3 - 3])))));
                        }
                        for (int i_6 = 3; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            var_17 = (arr_22 [i_4] [i_2] [i_2] [i_4]);
                            var_18 = (min((((-(arr_20 [i_1] [i_2] [i_3 + 1] [i_4 - 1] [4])))), var_12));
                        }
                        var_19 = (arr_20 [i_1] [i_1] [i_3 + 1] [i_4 - 1] [i_4 - 1]);
                        var_20 = (max(var_20, (arr_12 [i_4 + 3])));
                        var_21 |= (arr_14 [i_1] [i_2] [8]);
                        var_22 = var_6;
                    }
                }
            }
        }
        arr_26 [i_1] [i_1] = ((-(((arr_17 [i_1] [i_1] [i_1] [i_1]) ? -19 : (arr_9 [i_1] [i_1] [i_1])))));
    }

    for (int i_7 = 1; i_7 < 9;i_7 += 1)
    {
        var_23 += 17135136472935534292;
        arr_30 [i_7 - 1] = (arr_16 [i_7] [i_7] [i_7] [i_7 - 1] [i_7] [2]);
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {

        for (int i_9 = 2; i_9 < 21;i_9 += 1)
        {
            arr_36 [i_8] = ((+(((arr_34 [i_8] [i_8] [i_9 + 2]) ? 38891 : -2689))));
            var_24 = (((((~(arr_32 [i_8] [9])))) * (arr_35 [i_8] [i_9])));
            var_25 += (arr_33 [i_8] [i_9]);
        }
        var_26 ^= 4;
        var_27 += (arr_31 [9]);
    }
    var_28 = ((((((~40) ? (max(36028797018963936, var_9)) : (var_4 & 0)))) ^ var_12));
    #pragma endscop
}
