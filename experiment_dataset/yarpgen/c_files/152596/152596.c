/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_10 = ((-32767 ? ((((var_2 > (arr_8 [5]))))) : (arr_1 [i_0 - 2])));
                        var_11 = (arr_4 [i_0 + 1]);
                    }
                }
            }
            var_12 *= (!var_3);
        }
        for (int i_4 = 2; i_4 < 12;i_4 += 1)
        {
            var_13 &= var_1;
            var_14 = arr_11 [i_0];
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 3; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_15 = (((arr_17 [i_6] [i_6]) ? 223 : (arr_17 [i_6] [i_6])));
                            var_16 = arr_10 [i_8];
                            var_17 = (!-2475427280373238610);
                        }
                    }
                }
            }
            var_18 = (max(var_18, (((49396 & (!49396))))));
            var_19 = (arr_7 [i_0] [8] [i_0]);
        }

        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            var_20 *= (((((16139 | (arr_16 [i_0] [i_0] [i_0] [i_9])))) + (((arr_19 [i_0] [i_0 + 1] [i_0]) ? 5628426560858470327 : 49395))));
            var_21 = ((-2475427280373238633 ? ((-2475427280373238603 ? (arr_10 [i_0 - 2]) : -2980)) : (((arr_11 [i_0]) ? (arr_5 [1] [i_0] [i_9] [i_9]) : var_4))));
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_22 = (!18007277385778448701);
            arr_30 [i_0] [i_10] = ((18007277385778448688 ? 3334403068 : 1));
            arr_31 [i_10] = (((arr_8 [i_0 - 1]) >= ((((arr_5 [i_10] [i_10] [i_10] [i_0]) > 1)))));
        }
        var_23 = (((~127) != (-6692 >= 115)));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        arr_34 [13] = var_6;
        var_24 = var_1;
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 20;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 21;i_13 += 1)
            {
                {
                    var_25 = (max(var_25, ((((arr_38 [i_13 + 1] [i_13] [i_11] [i_13]) & (arr_38 [i_13 + 1] [i_13] [i_11] [i_13]))))));
                    var_26 = ((1 ? (arr_38 [i_12 + 3] [i_13 - 1] [i_12] [i_13]) : 62641));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_14 = 3; i_14 < 22;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 23;i_16 += 1)
                {
                    {
                        arr_47 [i_14] [i_15] [i_15] = (((arr_35 [i_14 - 3]) & 1));
                        var_27 = (arr_39 [i_15] [i_16]);

                        for (int i_17 = 3; i_17 < 20;i_17 += 1)
                        {
                            arr_50 [i_15] [i_15] [18] = (((arr_32 [i_14 - 3]) ? (arr_32 [i_14 - 2]) : (arr_32 [i_14 - 3])));
                            var_28 += ((-(arr_45 [i_11] [i_14 - 2] [9] [i_17 - 1] [i_16] [i_17 - 1])));
                            arr_51 [i_15] = (arr_38 [i_11] [i_14] [i_15] [i_17 + 1]);
                            var_29 = (arr_35 [i_17]);
                        }
                        var_30 ^= -2340487441431446356;
                    }
                }
            }
        }
        arr_52 [i_11] = (arr_32 [i_11]);
    }
    var_31 = (min(var_31, (((((((min(var_4, -1265371818)) / ((max(19856, var_6)))))) ? var_1 : ((var_9 ? var_0 : ((var_2 ? var_6 : var_0)))))))));
    #pragma endscop
}
