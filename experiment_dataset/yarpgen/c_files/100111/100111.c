/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            arr_4 [i_1] [i_1] [i_1] = (arr_2 [i_1 + 1]);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_1] [i_0] [i_1] = ((~((((arr_10 [i_0] [8] [i_2] [i_1]) || (arr_6 [i_0] [i_0] [7] [i_0]))))));
                            var_20 = (max(var_20, (((~((((arr_2 [1]) > (arr_1 [11])))))))));
                            var_21 &= (!-41);
                            arr_13 [i_1] = ((51256 ? (arr_7 [i_0] [i_1] [i_1] [0] [i_1]) : -1));
                            var_22 = 102;
                        }
                    }
                }
            }
            var_23 += ((~(arr_0 [12])));
        }

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            arr_17 [7] [i_5] [i_0] = ((251 ? -1 : 65535));
            var_24 = (~65535);
        }
        var_25 ^= (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) % (arr_11 [i_0] [i_0] [i_0] [0] [i_0])));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_21 [i_6] = ((((((0 ? 15724 : 0)) & (408512668 < 0))) % 1));
        var_26 = (max(((((max(-1533185458, (arr_19 [i_6])))) / ((-15091 ? -1 : 18)))), (((1443593102 * (61 / 219))))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        var_27 = (((arr_22 [i_7] [i_7]) ? (((arr_19 [14]) ? 195 : (arr_20 [8] [i_7]))) : ((((arr_23 [1]) || -3669)))));
        var_28 *= (((arr_22 [i_7] [i_7]) - 29331));
        var_29 += (1533185458 > 2130924685);
        arr_24 [i_7] = (((arr_22 [i_7] [i_7]) + ((((arr_23 [14]) ? 6122 : (arr_23 [3]))))));
    }

    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        var_30 = (max(var_30, ((((((arr_26 [i_8]) < (((32629 ? 7 : 37))))) ? (((((1208776937 ? 219 : (arr_15 [i_8])))) ? (max(1, (arr_16 [i_8] [i_8]))) : ((((arr_10 [0] [i_8] [i_8] [0]) / (arr_26 [i_8])))))) : ((min((0 & 9), (arr_5 [12] [i_8])))))))));
        arr_28 [i_8] = ((~((((0 | -22) != 8191)))));
        var_31 *= 209;
        var_32 -= 19067;
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 0;i_11 += 1)
            {
                {
                    var_33 = (min(var_33, (4753667301195798214 | 0)));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 21;i_13 += 1)
                        {
                            {
                                arr_45 [16] [i_10] [i_13] [i_11 + 1] [i_12] [i_12] &= (arr_31 [3]);
                                var_34 = (min(var_34, (arr_30 [i_9] [i_10])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_35 = ((~((max(-11978, 66)))));
    #pragma endscop
}
