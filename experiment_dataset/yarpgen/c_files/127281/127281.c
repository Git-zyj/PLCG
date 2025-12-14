/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_12 ^= ((((((((var_0 / (arr_3 [i_3])))) ? (arr_4 [i_1 - 1] [i_2 + 4]) : (((arr_11 [i_1]) * (arr_0 [i_1])))))) ? (max(((((arr_2 [i_0]) % (arr_2 [i_0])))), var_3)) : (arr_5 [i_0] [i_1])));
                        var_13 = ((-((((max((arr_11 [i_0]), (arr_10 [i_0] [i_1 - 1] [i_0] [i_3] [i_3])))) ? (((arr_2 [i_2]) ? (arr_10 [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1]) : (arr_9 [17] [i_1] [i_2] [i_0]))) : (arr_9 [i_0] [i_1 + 2] [i_1 - 2] [i_0])))));
                        arr_12 [i_0] [i_0] [22] [i_2] [i_0] [i_0] = (((arr_4 [i_0] [i_0]) >= ((((max((arr_7 [i_0] [i_2 + 1] [i_3]), var_2))) ? (((1 ? 3066878332 : (arr_2 [1])))) : (((arr_8 [i_3]) ? (arr_0 [i_0]) : var_10))))));
                    }
                    for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
                    {
                        var_14 = (max(var_14, ((max((arr_7 [i_2] [i_1] [i_1]), ((max(var_6, 56))))))));
                        var_15 = ((((((max((arr_7 [i_0] [1] [1]), (arr_11 [i_0])))) ? -1942769912 : (arr_10 [i_2 - 1] [i_1] [i_1 - 2] [i_2 - 1] [i_2 - 1])))) ? ((~((~(arr_14 [i_0] [i_0]))))) : (arr_5 [i_2 - 1] [i_1 + 2]));
                        arr_16 [14] [i_1] [i_1] [i_4 + 2] [i_0] = var_1;
                    }
                    for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_16 -= ((((((arr_6 [i_0]) >= var_3))) ? ((+(((arr_18 [11]) ? (arr_13 [i_0] [i_1] [i_2] [i_1] [i_0]) : (arr_2 [i_0]))))) : (arr_9 [i_0] [i_5] [i_2 + 4] [i_1])));
                        var_17 += (max((((!(arr_6 [i_5 + 3])))), 2272));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_18 = (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_19 = (min(var_19, (((-((((arr_2 [i_0]) < (arr_11 [i_1])))))))));
                            var_20 = (min(var_20, 16128));
                        }
                    }
                    var_21 = (max(var_21, -19377));

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            arr_28 [1] [i_1] [i_0] [i_7] [i_7] [19] [i_8] = 0;
                            var_22 = (0 | (((arr_5 [i_0] [i_2]) ? (arr_11 [i_0]) : ((~(arr_4 [i_0] [5]))))));
                        }
                        arr_29 [i_0] [18] [18] [i_0] = (max(78, 195));
                    }
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        var_23 = (min(var_23, -2373614909662428018));
                        var_24 = var_7;
                        var_25 = (max(var_25, (((!(((((var_8 == (arr_17 [i_1]))) ? (((((arr_11 [i_1]) != (arr_27 [i_1] [i_1 - 2] [i_1 + 1] [i_2] [i_2]))))) : (max(var_3, -19377))))))))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        arr_37 [i_0] [i_1] [i_0] = ((var_9 | (arr_20 [i_1 + 2] [i_1 + 2] [i_2 + 2] [i_1 + 2])));
                        arr_38 [i_2 + 1] [i_1] [i_2] [2] |= 2147483647;
                        var_26 = (~var_1);
                    }
                    arr_39 [i_0] [i_1] [i_0] = ((arr_20 [i_1 - 1] [i_2 + 3] [i_2 + 3] [i_2]) < -6184092181633957329);
                }
            }
        }
    }
    var_27 = ((!((max(((0 ? -16782 : 19377)), var_8)))));
    #pragma endscop
}
