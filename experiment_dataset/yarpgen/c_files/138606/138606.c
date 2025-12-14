/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_10 [i_3] [i_2] [i_2] [i_3] [i_1 - 1] [i_2] &= ((~(~-13022)));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            arr_13 [i_4] [i_4] = ((-(!var_0)));
                            arr_14 [10] [i_1] [i_1 + 1] [i_1 + 1] [14] [i_1 + 3] |= ((~(!1)));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_2 + 1] [i_3 - 3] [9] [i_3] = ((~(arr_3 [i_0] [i_0] [i_0])));
                            arr_18 [i_0] [i_1 - 1] [i_5] [i_1] = (!49);
                        }
                        arr_19 [i_0] = ((~(--4353015194501279072)));
                    }
                }
            }
        }

        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            arr_24 [i_0] [i_0] [i_6] = ((((!(!var_8)))));
            arr_25 [i_0] = ((~(((!(~var_10))))));

            /* vectorizable */
            for (int i_7 = 4; i_7 < 16;i_7 += 1)
            {
                var_15 += ((-(~7458)));
                var_16 ^= -36028797018963968;
            }
            for (int i_8 = 2; i_8 < 16;i_8 += 1)
            {
                var_17 = ((!(~-4194474911224016016)));
                arr_31 [i_0] = ((-(+-0)));
                var_18 = (max(var_18, (!58076)));
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        {
                            arr_39 [i_0] [i_9] [i_0] = ((~((~((-(arr_1 [i_0])))))));
                            arr_40 [i_0] [i_9] [i_0] [i_0] [i_0] [i_0] = 13004;
                            var_19 = ((((!(arr_30 [i_0] [i_6] [i_8])))));
                            arr_41 [i_8 + 3] [i_9] [i_9] = ((((!(~var_6)))));
                        }
                    }
                }
                arr_42 [i_0] [i_6] [i_6] [i_8] = ((~((~((~(arr_35 [i_8] [6])))))));
            }
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                var_20 |= var_13;
                arr_45 [i_0] [i_0] [i_11] [i_11] = (~((-(arr_0 [i_6]))));
                var_21 = ((-(~0)));
                var_22 = ((~(+-239)));
                /* LoopNest 2 */
                for (int i_12 = 4; i_12 < 16;i_12 += 1)
                {
                    for (int i_13 = 3; i_13 < 18;i_13 += 1)
                    {
                        {
                            var_23 = ((~((~(!-7965833014813223907)))));
                            arr_51 [i_0] [i_6] [i_11] [i_12] [1] |= ((-(~32)));
                            var_24 = (min(var_24, ((~(~-32766)))));
                            arr_52 [i_13] [i_11] [i_12] [i_0] [i_11] [i_0] = 13034;
                            var_25 ^= (!-31);
                        }
                    }
                }
            }
            for (int i_14 = 2; i_14 < 18;i_14 += 1)
            {
                var_26 = (max(var_26, (((((!(~534612298))))))));
                var_27 = (min(var_27, (!-7599700888632161733)));
            }
        }
        arr_57 [i_0] = ((~(!7)));
    }
    var_28 = -25962;
    var_29 = ((!(!-79)));
    var_30 |= (+-4294967283);
    #pragma endscop
}
