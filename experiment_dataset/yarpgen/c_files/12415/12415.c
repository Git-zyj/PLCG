/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (max(var_12, var_7));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 = (max((min(((max((arr_0 [i_0]), (arr_0 [i_0])))), (((arr_4 [i_1] [i_1]) ? (arr_1 [i_0] [i_0]) : var_11)))), ((min((arr_4 [i_0 - 2] [i_1 - 2]), 528140532)))));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 7;i_3 += 1)
                    {
                        var_19 = (arr_10 [i_2] [i_2] [i_2] [i_2]);
                        var_20 ^= (((((arr_5 [i_0] [i_0]) >= 255)) ? (-1 < 4294967285) : 121));

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_21 = (((arr_12 [i_0] [i_0 + 1] [i_0] [i_0] [i_0]) || (arr_10 [i_2] [i_2] [i_2] [i_2])));
                            var_22 = (arr_3 [i_2] [i_2]);
                            var_23 = (arr_6 [i_2] [i_2]);
                            var_24 += var_9;
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_25 = (((arr_3 [i_0 + 1] [i_1 - 3]) ? (arr_3 [i_0 + 1] [i_1 - 1]) : var_10));
                            var_26 = ((arr_7 [i_3 + 1] [i_3 + 1]) % (arr_7 [i_3 + 3] [i_3 + 3]));
                            var_27 = -7527343115672054353;
                        }
                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            var_28 = (((arr_2 [i_0 - 1] [i_6 - 2]) ? (arr_2 [i_0 - 2] [i_6 - 2]) : (arr_2 [i_0 - 1] [i_6 - 2])));
                            arr_18 [8] [8] [8] |= (0 & -1);
                        }

                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] = ((-1 ? 0 : -1779540100));
                            var_29 ^= var_5;
                            var_30 |= ((133169152 ? 1379537411 : (arr_7 [i_0] [i_0])));
                        }
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 0;i_9 += 1)
                        {
                            var_31 = (+(((arr_21 [i_1 - 1] [i_2] [i_1 - 1] [i_1 - 1]) ? (arr_21 [i_1 + 1] [i_2] [i_2] [i_2]) : 25)));
                            var_32 = (~1);
                        }
                        var_33 = (arr_7 [i_0 - 1] [i_0]);
                    }
                    arr_29 [i_2] = 234;
                }
            }
        }
    }
    var_34 = (~var_5);
    #pragma endscop
}
