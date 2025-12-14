/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((var_14 <= (((var_12 && ((min(var_2, var_15))))))));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                var_20 = (min(var_20, (((-(var_15 | var_13))))));
                arr_8 [12] [12] [i_1] [i_2] &= -1;
            }
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                var_21 *= ((1 ? (arr_9 [i_0 + 1] [i_1] [i_3]) : var_2));

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    arr_13 [i_0] [i_3] [i_3] [i_3] = (!var_12);
                    var_22 = (((var_9 | var_2) ? var_4 : var_8));
                    arr_14 [i_0] [i_0] [i_0] [i_0] = -var_17;
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    var_23 = (max(var_23, (!-185990977949044326)));
                    var_24 = (max(var_24, ((((((arr_7 [i_3] [i_3] [i_3] [i_3]) != var_0))) * var_17))));
                }
            }
            var_25 = (min(var_25, (var_0 > var_8)));
            arr_18 [i_0] = var_1;
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            var_26 = (((min(var_8, (-9223372036854775806 != -185990977949044325))) ^ (arr_6 [i_0 - 1] [i_0] [i_0 - 1])));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    {
                        arr_27 [i_0] [i_0] [i_7] [i_8] = (max(25, 1));
                        var_27 ^= (arr_1 [i_0]);
                    }
                }
            }
        }
        arr_28 [i_0] [i_0] = (min(((var_11 ? (((1288016288668932582 ? var_6 : (arr_1 [i_0])))) : (max((arr_21 [i_0 - 1] [i_0 - 1]), var_0)))), ((min(var_17, var_14)))));
        /* LoopNest 3 */
        for (int i_9 = 2; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    {
                        var_28 = (((((var_10 ? var_2 : (arr_24 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1])))) ? ((((max(var_2, var_4)) - var_17))) : (87 / 18228844381068451509)));

                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            var_29 = (max(var_29, -58));
                            var_30 *= (arr_32 [i_0 + 1] [i_0 + 1] [i_10 - 1]);
                            var_31 = (max((!18228844381068451512), (((arr_4 [i_0 + 1]) ? (arr_4 [i_0 + 1]) : var_0))));
                        }
                        for (int i_13 = 1; i_13 < 13;i_13 += 1)
                        {
                            var_32 = (min(var_32, ((min(-var_8, ((max(var_5, (arr_12 [i_9] [i_9] [i_9] [i_10 + 2] [i_10 - 1])))))))));
                            arr_41 [i_0 - 1] [i_13 - 1] [i_11] [i_11] [i_0] [i_11] = -56043;
                        }
                    }
                }
            }
        }
        arr_42 [i_0] [i_0] = var_18;
    }
    #pragma endscop
}
