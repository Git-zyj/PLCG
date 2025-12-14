/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] = ((var_1 ? var_10 : var_10));
                                var_20 = (max(var_20, (((((arr_0 [i_0]) & var_12))))));
                            }
                        }
                    }
                    arr_15 [i_2] [i_1] = var_15;
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_21 = (arr_3 [i_0]);
                                arr_24 [i_6] = ((((min((arr_18 [i_5] [i_1] [i_5] [i_6] [i_6 - 3]), (arr_18 [i_0] [i_1] [i_5] [i_6] [i_6 - 2])))) || ((min((arr_19 [i_0 - 2] [i_6 - 3]), (arr_19 [i_0 + 1] [i_6 - 3]))))));
                            }
                        }
                    }
                    arr_25 [i_5] [i_1] = (max((min((3268549297334088950 / 42738), 85)), ((181 ? -1941109716 : var_18))));
                    arr_26 [i_5] [i_1] [i_1] [i_0] |= ((((~((0 ? 0 : -1754440945)))) ^ (~-6058767603298517474)));
                    arr_27 [i_0 + 1] [i_0 + 1] [i_0] [i_0] = (min((((((-(-32767 - 1)))) / ((14280 ? var_12 : var_1)))), (((~(!31))))));
                }
                arr_28 [16] = (arr_0 [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 4; i_8 < 13;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 13;i_9 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            {
                                var_22 = var_14;
                                arr_40 [i_10] [i_11] [i_10] [i_10] [i_9] [i_8] = 120;
                            }
                        }
                    }
                }
                arr_41 [i_9] [i_9 - 2] [i_8] = arr_16 [i_8] [i_8 - 1] [i_8] [i_8];
                arr_42 [i_8] [i_9] [i_9 + 1] = (((((~(arr_4 [i_8] [i_8]))) == ((13847 ? var_6 : 127)))));
                arr_43 [i_8 + 1] [i_8] [i_8 + 1] = (((((((var_19 == (arr_39 [i_9 - 1] [i_9 - 1] [i_9] [i_9] [1] [i_8] [i_8])))) + var_2))) ? (min((arr_18 [i_8] [i_9] [i_8 - 4] [i_9 - 1] [i_9 - 1]), 199)) : (arr_23 [i_8 - 4] [i_8 - 3] [i_8] [i_9] [i_8]));
            }
        }
    }
    var_23 = (min((((18309053562882934472 ? var_6 : var_2))), ((52 ? 1 : -330834403193149920))));
    var_24 = var_0;
    var_25 += var_5;
    #pragma endscop
}
