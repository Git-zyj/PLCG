/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_10 |= (((min((arr_7 [i_2] [2] [2] [i_2]), (arr_1 [i_1] [i_2 + 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_11 = -511;
                                var_12 &= min((min((~505), -511)), (((max(var_3, var_0)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_21 [i_2] = 65535;
                                arr_22 [i_0] [i_1] [i_2 - 1] [i_2] [i_5] [i_6] = 1;
                                arr_23 [i_0] [i_6] [i_2] [i_5] [i_0] = (min(((max(((-(arr_11 [4] [i_1] [i_0] [2] [i_0]))), var_8))), (max(-511, ((~(arr_4 [4] [i_1] [i_2])))))));
                            }
                        }
                    }
                    var_13 = (arr_19 [i_0] [i_1 - 3] [i_1] [i_1 - 3] [i_0] [i_2 + 2]);
                }
            }
        }
    }
    var_14 = (~var_1);
    var_15 = ((max((!var_5), var_0)));

    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        var_16 = 101;

        /* vectorizable */
        for (int i_8 = 3; i_8 < 10;i_8 += 1)
        {
            arr_31 [i_8] [i_8] = var_7;
            var_17 = -1754593468;
            var_18 = ((!(((~(arr_25 [i_8]))))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    {
                        var_19 = 4095;
                        var_20 = (min(var_20, var_4));
                        arr_38 [0] [i_8] [i_8] [i_8] [i_10] [i_10] = 115;
                    }
                }
            }
        }
        arr_39 [i_7] = (((-(arr_0 [i_7] [i_7]))));
    }
    var_21 = ((max(var_3, (!29775))));
    #pragma endscop
}
