/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 7;i_3 += 1)
                {
                    {
                        var_12 &= ((((-(arr_6 [i_3]))) >= 101));
                        var_13 = (arr_2 [i_0] [i_0 + 2]);
                        var_14 = (max(var_14, (((958605296 == (((arr_5 [i_0] [i_1] [i_0] [i_3]) % 155)))))));
                    }
                }
            }
        }
        var_15 = ((~(!111)));
        var_16 |= (((((var_0 ? (arr_9 [4] [i_0] [i_0] [4]) : var_7))) ? (1 | -1052331472) : (arr_6 [8])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    var_17 *= (((arr_14 [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1]) ? (arr_2 [i_0 - 1] [i_0]) : (arr_2 [i_0 - 1] [i_0 - 1])));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_18 ^= (arr_9 [i_0] [i_4] [i_4] [i_6]);
                                var_19 = 5007271632209307816;
                                var_20 &= ((0 & 155) & (arr_5 [i_4] [i_4] [i_6] [i_7]));
                                var_21 = 154;
                                var_22 = (127 >= -127);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_23 = 2109276468591942604;
                                var_24 = (min(var_24, 14999447726574735992));
                                var_25 &= (-2109276468591942621 - var_11);
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_10 = 3; i_10 < 16;i_10 += 1)
    {
        var_26 = (((((((((arr_29 [i_10 - 1]) - var_5))) ? var_1 : var_11))) ? ((var_10 ? (((arr_30 [i_10]) << (65535 - 65535))) : (arr_30 [i_10]))) : (((arr_29 [i_10 - 2]) - (arr_29 [i_10 - 2])))));
        var_27 = ((-1409271800 ? (((15665 ? 461069340 : 254))) : (((arr_30 [i_10 - 1]) ? (max(var_3, -1900467753843869198)) : (arr_29 [i_10])))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        var_28 = (max(var_28, ((((arr_31 [i_11] [i_11]) != ((var_10 ? 7956 : (arr_31 [i_11] [i_11]))))))));
        var_29 = (min(var_29, (arr_31 [i_11] [i_11])));
        var_30 += (36 / 3513601457621885087);
    }
    var_31 &= var_2;
    #pragma endscop
}
