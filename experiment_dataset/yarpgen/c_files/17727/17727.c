/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 17989320318352508631;
    var_18 = var_0;
    var_19 = var_11;

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_20 = (min(var_20, (arr_1 [i_0 - 1])));
        var_21 = 0;

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_5 [i_0 - 2] = (arr_2 [i_1] [i_0 - 1]);
            var_22 = (3301868341990222056 << 1);
            arr_6 [i_1] = (23721 && -2147483636);
        }
    }
    for (int i_2 = 2; i_2 < 14;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                {
                    var_23 *= (arr_8 [i_2 - 2]);
                    arr_18 [i_3] [i_3] [1] = (arr_17 [i_2 - 2] [i_4] [i_4 - 1]);
                }
            }
        }
        var_24 = 18014396361998336;
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        var_25 = 25573;
                        arr_26 [10] [13] [i_5] = (((arr_0 [i_7] [i_6]) * ((((-32767 - 1) != (arr_21 [i_5] [i_5 + 1]))))));
                    }
                }
            }
        }
    }
    for (int i_8 = 2; i_8 < 14;i_8 += 1) /* same iter space */
    {
        arr_29 [i_8] = (((457423755357042991 << 1) / (arr_28 [i_8 + 1])));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 14;i_10 += 1)
            {
                {

                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {

                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            arr_38 [i_8] = 1;
                            arr_39 [i_12] [1] [i_8] [i_8] [i_8] = (((arr_13 [i_8 - 2] [i_9] [i_8 - 2]) & var_11));
                            arr_40 [12] [11] [i_11] [3] [i_12] [11] [3] = (var_3 == 1);
                        }
                        var_26 = var_11;
                        var_27 &= (((-68 & 9) && ((((arr_30 [i_8 - 2] [i_11]) % (arr_30 [i_10 - 1] [i_11]))))));
                        var_28 = (((arr_2 [i_8] [i_9]) || (((arr_2 [i_8 - 2] [i_8 - 1]) && (arr_2 [i_10] [i_8 - 1])))));
                        var_29 = 1;
                    }
                    for (int i_13 = 1; i_13 < 14;i_13 += 1)
                    {
                        arr_44 [i_8] [i_8 + 1] [i_9] [i_10] [i_13] [i_9] = (var_6 == 110);
                        var_30 += 1;
                    }
                    for (int i_14 = 1; i_14 < 15;i_14 += 1)
                    {
                        var_31 = (-32767 - 1);

                        for (int i_15 = 0; i_15 < 16;i_15 += 1)
                        {
                            arr_51 [i_10] [i_14] [i_10] [i_14] [i_8] = (arr_16 [11] [i_15] [i_15]);
                            arr_52 [6] [i_9] [6] [i_10 + 2] [i_14] [i_15] [6] = var_13;
                        }
                        for (int i_16 = 0; i_16 < 16;i_16 += 1)
                        {
                            var_32 = (arr_41 [i_8]);
                            var_33 += (arr_46 [i_8] [i_9] [i_10] [i_14 + 1] [i_16]);
                        }
                    }
                    for (int i_17 = 0; i_17 < 16;i_17 += 1)
                    {
                        arr_59 [i_8] [12] [i_10 - 1] [i_17] = 1;

                        for (int i_18 = 2; i_18 < 15;i_18 += 1)
                        {
                            arr_63 [i_17] [i_10 + 2] [i_10 + 1] [i_17] [i_17] = (arr_31 [i_8] [i_10] [2]);
                            var_34 = var_8;
                            var_35 = (min(var_35, var_7));
                        }
                    }
                    arr_64 [i_9] = var_10;
                    var_36 = (arr_25 [i_8] [i_8 + 2] [i_8 - 2] [i_8 - 2] [i_8 - 1] [i_10 - 2]);
                    var_37 *= var_3;
                    arr_65 [i_8] [12] [i_10] = var_6;
                }
            }
        }
        var_38 *= (arr_9 [i_8]);
    }
    #pragma endscop
}
