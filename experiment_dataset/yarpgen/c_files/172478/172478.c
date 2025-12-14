/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((((arr_1 [i_0]) >= ((var_0 ^ (arr_1 [i_0]))))))) <= (max(((max((arr_3 [i_0] [i_1] [i_1]), (arr_4 [i_0] [i_1])))), 6703372685456882252))));
                arr_7 [i_0] = -9;
                var_12 = (((min(3474464469, -26396)) + (((-((((arr_0 [0]) || -9))))))));
            }
        }
    }
    var_13 = (min(var_8, (((-((3474464452 ? var_10 : var_0)))))));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        arr_11 [i_2 + 1] = (arr_3 [i_2] [i_2] [i_2 + 1]);
        var_14 -= (((arr_10 [i_2]) | (~674323435)));
    }
    for (int i_3 = 4; i_3 < 14;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_15 = (min(var_15, (((var_9 && (arr_0 [i_3 + 1]))))));
            var_16 = (((var_10 / var_3) || 1));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_17 += ((-(arr_24 [i_6 - 1] [5])));
                            arr_27 [i_3] [i_3] [10] [1] [i_3] = (((172 ? 8555555670958993128 : 13)));
                            var_18 = (max(var_18, (((-(var_9 < var_4))))));
                            var_19 = ((var_10 ? (((((arr_15 [i_3] [i_4]) != 3474464469)))) : ((8555555670958993128 / (arr_16 [1] [1])))));
                        }
                    }
                }
            }

            for (int i_8 = 1; i_8 < 13;i_8 += 1)
            {
                arr_31 [i_8] [i_8 + 1] [3] [12] = 11;
                var_20 = var_2;
                var_21 ^= (arr_24 [i_3 - 1] [i_8 + 2]);
            }
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                var_22 = (arr_19 [14]);
                var_23 = var_0;
                var_24 = -8555555670958993128;
            }
            for (int i_10 = 3; i_10 < 14;i_10 += 1)
            {
                var_25 += ((var_8 ? 8555555670958993149 : 1));
                arr_36 [i_4] [i_10] = (arr_28 [i_3 + 1] [i_3] [i_10 - 3]);
            }
        }
        arr_37 [i_3] = (((((~(arr_25 [i_3 + 1] [i_3] [i_3] [i_3 + 1] [i_3] [i_3] [i_3])))) && ((((arr_34 [i_3 - 4] [i_3] [i_3]) - var_8)))));
        var_26 = (var_8 != var_6);
    }
    #pragma endscop
}
