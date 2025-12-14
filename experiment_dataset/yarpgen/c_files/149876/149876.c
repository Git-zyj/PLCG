/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_10 = var_4;
                                var_11 = var_4;
                                var_12 = (min(var_12, 1));
                                arr_12 [i_0 - 2] [i_1 + 1] [i_2] [i_3] [i_3] [i_2] = ((-((var_1 ? (arr_10 [i_0 + 2] [i_0 - 2] [i_2] [4] [i_1] [i_1 + 2]) : 14466440676159507075))));
                            }
                        }
                    }
                    arr_13 [i_2] [i_2] [i_2] [i_0] = ((-(((3980303397550044551 <= (var_5 % -93))))));
                    var_13 ^= (arr_6 [i_2] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_14 -= (max((-14466440676159507075 <= 74), (max((arr_16 [i_0] [i_0] [i_0]), var_1))));
                                var_15 = (!((99 || (var_2 * 74))));
                                arr_18 [i_2] [19] [i_2] [i_2] [i_2] [5] = (!var_9);
                                var_16 ^= (((((var_6 ? (arr_11 [i_1] [i_1] [3] [i_1] [i_1 + 2] [i_1] [9]) : -114))) < -8566407187075350251));
                            }
                        }
                    }
                    var_17 = ((17914 ? 0 : 29));
                }
                /* vectorizable */
                for (int i_7 = 3; i_7 < 19;i_7 += 1)
                {
                    var_18 = (min(var_18, ((~((~(arr_17 [i_0] [i_0 + 1] [17] [i_0 - 4] [i_0] [i_0])))))));
                    var_19 = (~2334);
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    var_20 += var_3;
                    var_21 -= (((arr_2 [i_1 - 1] [i_0]) - (arr_23 [i_0 - 4] [i_1] [i_1] [i_8])));
                    var_22 = (max(var_22, var_7));
                }
                var_23 = (max(var_23, (14466440676159507075 >= 9693)));
                var_24 = ((-32557 ? var_4 : (~-6785710560011272132)));
                var_25 &= max(6133867674552414952, 15501);
            }
        }
    }
    var_26 = (((~1) || var_9));
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 17;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_11 = 2; i_11 < 17;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 18;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 19;i_13 += 1)
                        {
                            {
                                var_27 ^= (min(-7376676656187418824, (arr_39 [i_13] [0] [i_11 + 1] [i_10] [i_9])));
                                var_28 = ((-3069 ? (((12471 ^ 1) ? ((1 ? 93 : -6640)) : 2362)) : 1));
                            }
                        }
                    }
                }
                var_29 += ((((~(max(2, 11251714839500632927))))) ? var_1 : (((arr_4 [i_9 - 1] [i_10] [i_10]) ? (arr_4 [i_9 + 1] [13] [i_9]) : (arr_4 [i_9 + 2] [i_10] [i_10]))));
            }
        }
    }
    #pragma endscop
}
