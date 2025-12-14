/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_0, var_15));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_20 = (max((arr_0 [i_0 - 1]), (((arr_0 [i_0 - 1]) ^ (arr_1 [i_0 - 1] [i_0 - 1])))));
        arr_3 [i_0] = var_7;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        var_21 += (arr_2 [8]);
                        arr_14 [i_0] [i_0] = (arr_11 [i_0] [i_1] [i_2] [i_3 - 1] [i_3 + 1] [i_0]);
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_4 = 4; i_4 < 13;i_4 += 1)
        {
            var_22 = (-(arr_13 [i_4 - 1] [i_4 - 1] [i_4 - 4] [i_0]));
            var_23 ^= ((!(((~(arr_6 [i_0] [i_4]))))));
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            arr_19 [i_0] [i_0] = (!65535);

            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_24 = (max(var_24, (arr_13 [i_5] [i_6] [i_7] [6])));
                            var_25 = (min(var_25, ((min((arr_21 [i_0] [6] [i_0]), (arr_26 [i_5] [i_5]))))));
                            arr_27 [i_8] [i_0] [11] = var_1;
                            var_26 = (0 || 65535);
                        }
                    }
                }
                var_27 = (arr_5 [i_0] [i_0 - 1] [i_6]);
                var_28 = ((((-(arr_21 [i_0 - 1] [i_6] [i_6]))) == -1046957610));
            }
        }
    }
    var_29 = 4;
    #pragma endscop
}
