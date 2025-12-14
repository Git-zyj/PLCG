/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = (arr_0 [i_0]);
        var_14 = ((((-732340020 ? var_8 : (arr_0 [i_0])))) ? ((min(var_6, (arr_0 [i_0])))) : (max(1221798069, -11)));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        var_15 = (min(var_15, (((((176 & (arr_3 [i_1] [0]))) <= 80)))));
        var_16 = arr_4 [i_1];
        var_17 = (min(var_17, (10933 & 30505)));
        var_18 = ((((((max(1, -99))) ? var_1 : ((max(168, 1))))) * var_9));
    }
    var_19 = (min(var_19, -11));
    var_20 = var_6;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                var_21 = -1221798069;
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_22 *= 1;

                            for (int i_6 = 3; i_6 < 19;i_6 += 1)
                            {
                                var_23 &= var_12;
                                arr_24 [i_2] [i_2] [i_2] [i_5] [i_2] [i_2] &= (arr_15 [i_5] [i_5]);
                            }
                            var_24 = (max(var_24, ((min((((arr_7 [i_3 - 1]) ? 26419 : -4902717920735136353)), (((~(((arr_8 [i_2]) ? (arr_8 [9]) : var_1))))))))));
                        }
                    }
                }

                for (int i_7 = 3; i_7 < 19;i_7 += 1)
                {

                    for (int i_8 = 3; i_8 < 19;i_8 += 1)
                    {
                        arr_30 [i_2] [i_7] [i_7 - 3] [i_8 - 1] [i_8] = (min((arr_17 [i_3] [i_3] [18]), (30505 <= var_3)));

                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            arr_34 [i_2] [16] [i_7] [i_7] [i_9] = (max(167, (min((arr_29 [i_2] [i_7] [i_2] [i_2]), 65404))));
                            var_25 = ((((((((arr_18 [i_2] [1] [i_2]) ? 36675 : (arr_18 [i_2] [i_7] [i_7]))) * (((arr_29 [i_3] [i_7] [15] [i_9]) ? (arr_12 [i_9] [i_3] [i_7 - 1] [i_9]) : var_4))))) ? ((-((var_7 ? var_6 : 255)))) : (~var_2)));
                        }
                    }
                    var_26 = (min(var_0, (((((((arr_8 [i_2]) ? (arr_23 [i_2] [i_2] [i_2] [i_7 - 2] [i_3 - 1] [i_7]) : (arr_23 [i_2] [i_2] [i_7] [i_7] [i_7] [i_7])))) && ((((arr_20 [i_2] [i_3] [14] [i_7] [i_7]) ^ var_1))))))));
                    arr_35 [i_7] = ((((min(var_0, (arr_15 [i_2] [i_7 - 2])))) ? (~1) : (((((max(var_7, 123))) || var_3)))));
                    var_27 = (((((-((206069450305952387 ? (arr_9 [i_3 - 1]) : (arr_33 [i_2] [i_2] [i_3] [i_7] [i_7] [i_7 - 2])))))) ? (((arr_18 [i_7] [14] [i_2]) ? -25 : 9219902364136884256)) : var_9));
                }
            }
        }
    }
    #pragma endscop
}
