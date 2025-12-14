/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = -16384;
        var_17 = (arr_1 [i_0] [i_0]);
        var_18 = ((arr_1 [i_0] [i_0]) % (arr_1 [i_0] [i_0]));
        var_19 *= (arr_1 [i_0] [2]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, ((((arr_2 [i_0] [14] [i_0]) || (arr_4 [i_0] [4] [i_2]))))));
                    var_21 = (((arr_4 [i_0] [i_0] [i_0]) / (((arr_6 [i_0] [i_0] [i_0] [i_0]) / (arr_6 [i_0] [i_0] [i_0] [i_2])))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                var_22 = (((arr_9 [i_3]) || (arr_8 [i_3])));
                /* LoopNest 2 */
                for (int i_6 = 4; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_23 = (arr_15 [i_5] [i_6 - 4] [i_6 + 2] [i_7 + 1] [i_6 - 4]);
                            var_24 = arr_9 [i_3];
                            var_25 = (((arr_18 [i_6 + 1] [i_6 + 1] [i_4] [i_6] [i_7] [i_7 + 1] [i_7]) + (arr_3 [i_6 + 1] [i_4])));
                            var_26 |= 3174437697;
                            var_27 *= (((!(arr_8 [i_3]))));
                        }
                    }
                }
                var_28 = (arr_17 [i_3] [i_4] [i_3]);
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_29 = ((~(((arr_14 [i_3] [i_5] [i_5] [i_8]) ^ (arr_7 [i_3] [i_4])))));
                            var_30 = (((arr_9 [i_3]) || (arr_16 [i_3] [i_5] [i_8] [i_8] [i_3])));
                        }
                    }
                }
            }
            for (int i_10 = 4; i_10 < 19;i_10 += 1)
            {
                var_31 = (min(var_31, (((arr_21 [i_3] [i_4] [i_10] [i_3] [i_3] [i_4]) * 3174437697))));
                var_32 = (max(var_32, 1301343331));
                var_33 -= 1120529599;
                var_34 = (arr_29 [i_3] [i_3] [i_3]);
            }
            var_35 = (arr_8 [i_3]);
        }
        var_36 = (((arr_5 [4] [i_3] [i_3]) > (arr_18 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])));

        for (int i_11 = 4; i_11 < 20;i_11 += 1)
        {
            var_37 = 3174437697;
            var_38 = (((~1120529599) >= ((((arr_17 [i_11] [i_11] [i_11]) << (((arr_28 [i_3] [i_3] [i_3]) - 866392756)))))));
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                {
                    var_39 = ((((arr_22 [i_3] [i_12] [i_13] [i_3]) && -2547975375581140589)));
                    var_40 ^= (arr_8 [i_3]);
                }
            }
        }
    }
    var_41 |= var_3;
    #pragma endscop
}
