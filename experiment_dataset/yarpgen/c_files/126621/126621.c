/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            arr_7 [i_0] [i_1] [i_0] = (~var_13);
            var_15 ^= (~35943);
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_12 [i_0] [i_0] [i_0] = (!12797260087702602744);
            var_16 ^= (((~(arr_1 [i_2] [5]))));
            arr_13 [i_0] [i_0] = (~26220);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        var_17 = ((!(-127 - 1)));
                        arr_22 [i_4] [i_0] = ((~(arr_2 [i_0] [i_0])));
                    }
                }
            }
        }
        arr_23 [i_0] = 6257;
        arr_24 [i_0] [i_0] = (!0);
        var_18 = (~var_4);
    }
    for (int i_5 = 1; i_5 < 23;i_5 += 1)
    {
        arr_29 [i_5] = (~var_1);
        var_19 = ((!(~1)));

        /* vectorizable */
        for (int i_6 = 2; i_6 < 20;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                arr_34 [i_5] = ((~(arr_25 [i_6 - 1] [i_6 - 1])));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 21;i_9 += 1)
                    {
                        {
                            arr_40 [i_5 - 1] [6] [6] [i_7] [6] [i_9] = ((~(arr_26 [i_9 + 3])));
                            arr_41 [i_5 + 1] [i_5 + 1] [i_7] [i_8] [i_5 + 1] [i_9] [i_9] = (!23796);
                            var_20 = ((-(arr_25 [1] [i_8 - 1])));
                        }
                    }
                }
                var_21 ^= ((~(arr_35 [i_5] [i_5] [i_7] [i_7])));
            }
            arr_42 [i_6 + 2] = (!32767);

            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                var_22 ^= (arr_26 [i_5 - 1]);
                var_23 = ((-(-127 - 1)));
            }
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                arr_48 [i_5] [i_11] = 127;
                arr_49 [i_11] [i_11] [i_11] [i_5] = ((~((-(arr_39 [i_5 + 1] [i_5 + 1] [i_11] [1] [i_11] [i_5] [1])))));
                arr_50 [i_5 - 1] [i_11] [i_11] = (~var_13);
            }
            arr_51 [i_6] [5] [5] = (arr_45 [i_6] [i_6 + 4] [i_6] [i_6 + 1]);
            var_24 = (~var_4);
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            arr_54 [i_5 + 1] [i_12] = ((-(arr_53 [i_5 - 1] [i_5 - 1])));
            arr_55 [13] = ((!(!var_0)));
            var_25 = (~var_1);
            arr_56 [i_5] [i_12] [i_5] = -1;
        }
        arr_57 [i_5] = var_10;
    }
    for (int i_13 = 1; i_13 < 8;i_13 += 1)
    {
        var_26 = ((!(((~(!var_4))))));
        arr_61 [0] = ((~(+-120)));
    }
    var_27 = ((~(~-29593)));
    var_28 = (!(~2919492191));
    var_29 = var_8;
    #pragma endscop
}
