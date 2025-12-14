/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_10 = (((arr_0 [9]) | ((min(-123, (min(-105, 0)))))));
                    var_11 = (((arr_9 [i_0] [i_1] [i_0]) || (((arr_1 [i_0] [i_1]) && 123))));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_16 [12] [i_4] [i_0] [i_0] [i_1] [15] = (((arr_1 [i_3 + 3] [i_5]) <= (arr_1 [i_3 + 1] [i_4])));
                                var_12 = (min(var_12, 0));
                                var_13 = ((((((arr_12 [i_3 + 2] [i_3] [i_3]) * 19))) ? (((arr_14 [i_0] [i_1] [i_3 + 3] [i_4] [i_3 + 3]) % 14)) : (9006 && 7343)));
                            }
                        }
                    }
                    var_14 = 7;
                    var_15 = -7336;
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_16 = (min(var_16, ((((arr_15 [i_3 + 1] [i_6] [i_6 - 1]) ? (arr_11 [i_1] [i_1] [i_3 + 2] [i_1]) : 11)))));
                                var_17 = (((!-126) << (((var_6 < (arr_18 [i_1]))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                var_18 = 0;
                                var_19 &= (arr_6 [i_10] [i_9] [i_10]);
                            }
                        }
                    }
                }
                var_20 += ((((((1 ? -123 : (arr_7 [i_0] [i_1] [i_1]))) % (-36 <= 10))) + (((((!(arr_22 [1] [i_1] [19] [i_0] [i_0] [11])))) * (!var_3)))));
            }
        }
    }
    var_21 = (!17);
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            {
                var_22 ^= (arr_23 [i_11] [i_12] [i_11]);
                arr_38 [i_11] = (((((1905287324216494839 ? 23 : 7364))) ? ((((((arr_27 [i_11] [i_12] [i_12]) ^ (arr_24 [i_12])))) ? ((min(16863, 2))) : ((27 | (arr_25 [i_11]))))) : ((+((var_7 ? (arr_29 [i_11] [i_12] [21] [14]) : -9))))));
            }
        }
    }
    #pragma endscop
}
