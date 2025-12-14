/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_18));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [14] = ((((((arr_9 [i_1 + 2] [i_3 + 1] [i_3] [i_4]) ^ (arr_9 [i_1 + 2] [i_3 + 1] [i_3] [i_4])))) ? ((((arr_9 [i_1 - 1] [i_3 + 1] [15] [i_3 + 1]) == (arr_9 [i_1 + 1] [i_3 - 1] [i_3] [i_3])))) : (var_11 && 1461780828967372288)));
                                var_20 += ((-(!9223372036854773760)));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_24 [i_1] = (((!(arr_5 [i_5] [i_1 + 2] [i_1] [5]))) ? (arr_4 [i_1] [i_1]) : (arr_7 [i_7 - 2] [i_7 - 2] [i_5 + 1] [i_1 - 1]));
                                arr_25 [i_1] [i_1] = 3605063803365241280;
                                arr_26 [i_1] [i_1 + 1] [i_5] [i_6] [i_6] [i_6] [i_7] = ((!(-1 == var_13)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 4; i_8 < 9;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 8;i_10 += 1)
            {
                {
                    arr_38 [i_8] [7] [1] [i_10 + 1] = max((((-(!9223372036854773760)))), (max((((arr_5 [i_8] [i_9] [i_9] [i_10 + 1]) | -36028797018963968)), 0)));
                    arr_39 [3] = max(var_4, 3605063803365241280);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 2; i_11 < 7;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            {
                arr_44 [i_11] = ((~(-3605063803365241288 && 1461780828967372288)));
                var_21 = max(7976189900793949604, (((!((max(-7967722959880754768, (arr_28 [i_11]))))))));
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 9;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        {
                            var_22 ^= ((!(arr_31 [i_11])));
                            var_23 = ((!((((arr_32 [i_11 - 1] [i_11 + 2] [i_13 + 1]) % (arr_32 [i_11 + 3] [i_11 + 3] [i_13 + 1]))))));
                            arr_49 [9] [i_13 + 1] [i_13] = var_12;
                            arr_50 [i_11] [i_13] [i_14] = arr_1 [i_11 - 2] [i_12];
                        }
                    }
                }
                arr_51 [i_11] [i_12] = (((arr_10 [i_12] [i_11 - 1] [i_11 + 1] [i_11 + 3] [i_11 - 2] [i_12]) ? (arr_10 [i_12] [i_11 - 2] [i_11 - 1] [i_11 + 3] [i_11 + 3] [i_12]) : 750405967161530353));
            }
        }
    }
    var_24 = min(((7137096540046853346 >> (-4325027402467704538 + 4325027402467704569))), var_5);
    #pragma endscop
}
