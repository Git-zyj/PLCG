/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_9);
    var_16 = 4294967265;
    var_17 = (((var_2 | var_2) ? (min((~var_13), var_8)) : (32744 & var_0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_18 = ((~(arr_2 [i_2])));
                    var_19 *= (((arr_5 [i_0] [i_1] [i_2]) >> (var_13 - 1913926490484230664)));
                    arr_8 [3] [i_1] [3] = (arr_5 [i_0] [i_1] [i_2]);

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_20 = (((arr_1 [i_0]) | 1077674889119122850));
                        var_21 = (((arr_11 [i_0] [i_2]) || (arr_11 [i_0] [i_0])));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_22 = (var_8 ? (!var_10) : (!var_12));
                        var_23 = (((arr_6 [7] [i_1] [i_1] [i_1]) >> (-1 + 4)));
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_24 = (arr_1 [i_0]);
                        var_25 = (~3309130277);
                        var_26 = (min(var_26, var_0));
                        arr_20 [i_0] = (!var_4);
                        var_27 = (~var_2);
                    }
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    arr_23 [8] [i_1] [i_0] |= (--4018536271);
                    var_28 = (((((arr_13 [i_0] [i_0] [i_6] [i_0]) + (arr_0 [i_0])))) ? (((((-(arr_17 [i_0] [9] [i_6] [i_6] [i_6])))))) : (arr_16 [i_0] [i_1] [2] [i_6]));
                    var_29 = (max((arr_13 [i_0] [i_1] [i_6] [9]), ((var_1 ? (arr_13 [i_0] [i_0] [i_1] [i_6]) : (arr_13 [i_6] [i_1] [i_1] [i_0])))));
                }
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    var_30 = 127;
                    var_31 = var_12;
                }
                var_32 -= (max((((var_10 >= (arr_26 [i_0] [i_0])))), var_3));
            }
        }
    }
    #pragma endscop
}
