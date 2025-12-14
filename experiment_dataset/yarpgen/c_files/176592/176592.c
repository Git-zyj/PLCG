/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= 2982748014268735305;
    var_20 ^= (~var_0);

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_21 = (arr_4 [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_22 = (max((((arr_8 [i_3 + 1] [i_3 - 1] [i_3 + 1]) != (arr_8 [i_3 - 1] [i_3 - 1] [i_3 + 1]))), (!74)));
                                arr_15 [i_1] [i_1] [i_2] [11] [i_2] [11] [i_1] = (((((arr_0 [i_0]) ^ var_5)) >= ((((((arr_4 [i_0]) ? var_15 : (arr_12 [i_4] [17] [i_2] [i_3] [i_4] [i_4])))) ? 189 : var_14))));
                                arr_16 [i_1] = (84 ^ var_13);
                                var_23 &= 181;
                            }
                        }
                    }
                    var_24 |= (((((arr_14 [i_2]) ? (arr_14 [i_2]) : var_18)) - (((arr_14 [i_2]) - (arr_14 [i_2])))));
                    var_25 *= (181 * 77);
                }
            }
        }
        arr_17 [i_0] = (arr_5 [i_0] [i_0]);
        var_26 = var_1;

        /* vectorizable */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_27 ^= var_14;
            arr_21 [5] = ((181 ? 179 : (!4655547413260484302)));
            arr_22 [i_0] [i_0] = (176 | 13791196660449067337);
        }
        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {
            var_28 = (((arr_11 [i_6]) ? (((~85) - (((1692887154 || (arr_23 [i_0 - 1])))))) : (arr_7 [i_6])));
            var_29 = ((!(arr_0 [i_0 + 1])));
        }
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            arr_27 [14] [14] = (((arr_10 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1]) ? ((((max((arr_12 [i_0] [13] [i_0] [18] [i_0] [15]), var_11))) ^ (((arr_0 [i_0]) ? 72 : (arr_0 [18]))))) : (min((arr_2 [i_0 + 1]), -21788))));
            var_30 ^= (13791196660449067334 >= 1008);
        }
    }
    var_31 = var_14;
    var_32 = ((((!(~31))) ? (min(((var_1 ? var_2 : var_18)), (var_0 < var_18))) : ((var_9 ? var_0 : (var_13 >= 162)))));
    #pragma endscop
}
