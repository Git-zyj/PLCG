/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [7] = (max(((((arr_2 [i_1 - 1] [i_0]) & (arr_0 [i_1 - 1] [i_0])))), ((~(-9223372036854775807 - 1)))));
                var_17 = (arr_1 [i_1 + 2]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            {
                var_18 = (min(var_18, ((((min(138, 35)))))));
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_19 = (arr_16 [i_3] [i_3 - 1]);
                                var_20 = ((2066083411 ? (((1 != (arr_17 [1]))) : (((65520 != (arr_8 [i_4 - 1])))))));
                                var_21 = -11;
                                var_22 = (max(310687178445135162, 127));
                            }
                        }
                    }
                }
                arr_21 [i_3] = ((!((((arr_19 [i_2] [i_3] [i_2 - 2] [i_2] [i_3 - 2] [i_3] [i_2]) - (arr_12 [i_3] [i_3] [8]))))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_23 &= (min(469762048, var_9));

                            for (int i_9 = 2; i_9 < 12;i_9 += 1)
                            {
                                arr_31 [i_2] [i_3] [i_7] [i_8] [i_3] = (31316 >= 530595784);
                                var_24 = (max(var_24, (-4136811665 * 128)));
                                var_25 = (min((arr_4 [i_9 + 2]), (min((arr_4 [i_9 - 1]), (arr_4 [i_9 + 1])))));
                                var_26 ^= (arr_0 [i_2 - 1] [i_3]);
                            }
                            for (int i_10 = 0; i_10 < 14;i_10 += 1)
                            {
                                var_27 = (min(var_27, ((min(var_0, 4503599560261632)))));
                                var_28 += (99 - (arr_1 [i_2 - 2]));
                            }
                            var_29 = (((~97) >= 114));
                        }
                    }
                }
            }
        }
    }
    var_30 ^= var_9;
    #pragma endscop
}
