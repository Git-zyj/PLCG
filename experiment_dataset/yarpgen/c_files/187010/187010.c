/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!(((-(min(3050973023, -182454117)))))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_15 = (min(var_15, (arr_0 [6])));
        arr_3 [i_0] [i_0] = ((var_3 - ((min((arr_2 [i_0 + 1]), (-1 == 1443807287))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] = var_8;

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_16 += (min((((~((2044528428 << (2851160030 - 2851160005)))))), (min((arr_9 [i_1] [i_1] [i_1]), (arr_9 [i_1] [i_1] [i_2])))));
            var_17 = -0;
            arr_10 [12] [i_2] = (((arr_5 [i_2]) == 7853185509299600314));

            for (int i_3 = 4; i_3 < 15;i_3 += 1)
            {
                var_18 = (max(var_18, (((-(((((-36 ? -74 : 2470520336))) ? (((arr_11 [i_1] [0] [i_2] [0]) ? (arr_9 [i_3] [i_2] [1]) : 1)) : (arr_7 [11]))))))));
                var_19 = -7853185509299600314;
            }
            for (int i_4 = 2; i_4 < 14;i_4 += 1)
            {
                var_20 = (max(var_20, (var_1 - 2851160014)));
                var_21 += (min((min(-1, -38)), 26));
                arr_15 [i_1] [i_4] = (((((~(arr_13 [i_4 - 2] [i_4 + 1] [i_4 - 2] [i_4 - 1])))) ? (((arr_13 [i_4 - 2] [i_4 + 2] [i_4 - 2] [i_4 - 1]) * var_11)) : (((arr_13 [i_4 + 2] [i_4 + 1] [i_4 + 2] [i_4 - 1]) ^ (arr_13 [i_4 + 1] [i_4 - 2] [i_4 + 2] [i_4 - 2])))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            arr_21 [i_1] [i_1] [6] [6] [11] = (arr_20 [i_1] [i_2] [i_4 - 2] [i_5] [i_6]);
                            arr_22 [i_1] [i_2] [i_4 - 1] [i_5] [i_6] = (arr_13 [i_1] [i_1] [i_1] [i_1]);
                            var_22 = (min(((((arr_13 [i_4 - 2] [i_4] [i_4 - 1] [i_4]) ? (1 * var_13) : (((arr_17 [i_1] [i_1]) ? (arr_12 [i_6]) : (arr_5 [i_6])))))), ((var_2 ? ((min(var_13, 694682806))) : ((var_1 ? -14 : 8516))))));
                            var_23 ^= (~694682803);
                        }
                    }
                }
            }
            for (int i_7 = 3; i_7 < 13;i_7 += 1)
            {
                var_24 = (((((arr_5 [i_7 - 3]) ? (arr_5 [i_7 - 1]) : (arr_5 [i_7 + 2])))) || (((var_1 & (arr_13 [2] [2] [i_2] [i_1])))));
                arr_25 [i_1] [14] [i_1] [i_1] = ((1 | ((((1 ? (arr_20 [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_13 [i_1] [2] [i_2] [i_7]))) * (((var_9 ? 0 : 3158008704)))))));
            }
        }
    }
    #pragma endscop
}
