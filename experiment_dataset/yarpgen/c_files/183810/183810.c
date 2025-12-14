/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] [0] = (min(var_7, ((-1 * (arr_0 [i_0] [9])))));
        var_18 = (min(4420, -1));
        var_19 ^= max(((min((arr_2 [i_0]), var_11))), (((var_7 / var_10) % (max(var_4, 16383)))));
        var_20 = -1;
        arr_4 [i_0] = 1;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_21 = (max(var_21, -1));
        var_22 = (max(var_22, (arr_6 [i_1])));
        arr_7 [i_1] = (arr_2 [i_1]);
        var_23 -= 0;

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_10 [i_1] [i_2] = ((arr_9 [i_2]) ? (arr_8 [i_1] [i_1]) : (arr_5 [i_1]));
            arr_11 [i_2] [i_1] = var_4;
            arr_12 [i_1] [i_2] = (arr_0 [i_1] [i_1]);
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            arr_15 [i_3] [i_1] = 26;
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            arr_24 [i_5] [i_3] [10] [i_5] [i_3] [i_3] = -882458331;
                            var_24 = (max(var_24, ((((arr_13 [i_4 - 1] [1]) ? -4861661456357042577 : 4294950910)))));
                        }
                    }
                }
            }

            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        {
                            arr_33 [i_7] [i_9] [9] [i_7] [i_7] [i_3] [i_7] = (((arr_0 [i_1] [i_1]) ^ 4294950912));
                            arr_34 [i_9] [i_7] [i_1] [14] [i_7] [i_1] = ((1023829446 > ((-1580865837 ? 4294967295 : var_4))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        {
                            var_25 = (min(var_25, (!-1)));
                            arr_41 [i_1] [i_10 + 2] [i_1] [i_3] [i_3] [i_1] |= (var_14 ^ var_0);
                            var_26 ^= ((var_3 < (~65535)));
                        }
                    }
                }
                var_27 = 1023829455;
                var_28 = (((arr_31 [i_7] [i_3] [i_7] [11]) ^ (arr_31 [i_7] [i_3] [i_3] [i_7])));
            }
        }
    }
    for (int i_12 = 1; i_12 < 15;i_12 += 1)
    {
        var_29 = ((-1 ? ((-1763699533 ? 1 : (arr_42 [i_12 + 1]))) : (arr_42 [i_12])));
        arr_44 [i_12] [i_12] = ((1 ? var_9 : (min((~1763699533), ((((-1580865837 + 2147483647) << (58 - 58))))))));
        arr_45 [i_12 + 2] [i_12] |= (min(((var_10 ? (arr_2 [i_12 + 2]) : var_8)), (arr_2 [i_12 + 2])));
    }
    var_30 = -1580865837;
    var_31 &= 4294950913;
    #pragma endscop
}
