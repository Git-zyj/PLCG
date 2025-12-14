/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((~(~var_10))));
    var_20 &= (-2147483647 - 1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = var_9;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_21 -= (~0);

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_22 = (+-10971380734697754049);
                        var_23 = (!-var_0);
                        var_24 = (!-var_0);
                    }
                    for (int i_4 = 2; i_4 < 14;i_4 += 1)
                    {
                        arr_16 [i_0] [i_4 - 1] = (~((~(-2147483647 - 1))));
                        var_25 += ((~((~(arr_13 [i_4] [i_2] [i_1])))));
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_26 = (arr_13 [i_0] [i_1] [i_2]);
                        var_27 -= (((~(arr_17 [i_1]))));

                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_28 ^= ((~((-(arr_19 [i_6] [8] [i_5] [i_0] [i_0] [i_0])))));
                            var_29 -= (((~(arr_11 [i_0]))));
                            arr_22 [i_2] = (arr_12 [i_0] [i_0] [i_0] [i_0] [4]);
                        }
                        for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            var_30 = (~1033788994);
                            var_31 = (max(var_31, (((~(-2147483647 - 1))))));
                        }
                        for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
                        {
                            var_32 = (--7150952637036382605);
                            var_33 = 2147483647;
                            var_34 += 13961367881725199603;
                            var_35 = (~3664397388438640840);
                        }
                    }
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        var_36 = var_17;
                        var_37 = (min(var_37, 185));
                        var_38 = -128;
                        var_39 = (((~(arr_14 [i_0] [i_1 - 1] [i_9]))));
                        arr_29 [i_0] [i_1 + 3] [8] [i_1 + 3] [i_9] = (~189);
                    }
                }
            }
        }
        var_40 -= (~var_12);
    }
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 7;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    {
                        var_41 *= -var_16;
                        var_42 &= (((~(arr_20 [7] [i_11] [7] [i_11] [i_11] [7]))));
                        arr_39 [i_12] [i_11] [i_10] [i_10] &= ((~((~(~7926008845837360477)))));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_14 = 1; i_14 < 8;i_14 += 1)
        {
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 10;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 10;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 10;i_17 += 1)
                    {
                        {
                            arr_48 [3] [6] [6] [i_15] [4] [i_14] [i_10] &= ((-(!1)));
                            var_43 += (!1);
                        }
                    }
                }
            }
            var_44 = (arr_38 [i_10] [i_14] [i_14] [i_10]);
            arr_49 [i_10] = (!-1289046556);
            var_45 = ((!(((-(arr_19 [i_10] [i_10] [0] [8] [i_10] [i_10]))))));
        }
    }
    var_46 = var_4;
    var_47 -= ((-(~-var_15)));
    #pragma endscop
}
