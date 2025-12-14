/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, -114));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = var_1;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_11 = (0 ? 5920476942041871704 : 5920476942041871704);
                                arr_14 [i_2] [i_3] [i_4] = (((((~(arr_6 [i_3] [i_0])))) ? (((-1576430982 / (min(4294967295, 5920476942041871704))))) : 76));
                            }
                        }
                    }
                    var_12 = (min(var_12, (((-5006822351130212029 ? (min(((5006822351130212029 ? 205 : 1)), (!var_5))) : ((-(arr_7 [i_0] [i_0] [i_2]))))))));
                    arr_15 [i_2] [i_2] [i_1] [i_0] = var_5;
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_13 = (min(var_13, (((3341854776 ? (arr_10 [i_5] [i_5] [i_5] [i_5] [i_5]) : -963464213)))));
        arr_19 [i_5] [i_5] = 2680;

        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            arr_22 [12] &= (min(((-1537371484 ? 1 : 5920476942041871704)), 2147483647));
            arr_23 [i_6] [i_6] [i_6] = ((((arr_12 [i_6] [i_5] [i_5] [i_5] [i_5] [i_6 + 1]) ? 3341854776 : -45)));
            arr_24 [i_6] [i_6] [i_6] = (((35 << (12978265563523476288 - 12978265563523476267))));
            var_14 = -3781234558176353679;
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        arr_27 [i_7] = (((((min(-45, 46)) ? 4294967295 : ((4209829857377840865 ? var_6 : (arr_12 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))))));
        arr_28 [i_7] [i_7] = (+-5006822351130212029);
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 16;i_10 += 1)
            {
                {
                    var_15 = ((65535 ? (~2000297249) : 0));
                    var_16 = 3341854776;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 18;i_14 += 1)
                        {
                            {
                                arr_46 [i_12] [i_11] = 1;
                                arr_47 [i_12] [i_13] [i_12] [i_12] [i_8] [i_12] = (min((arr_0 [i_8] [i_14]), (min(2147483647, 18446744073709551615))));
                                arr_48 [i_8] [i_11] [i_8] [i_12] [i_8] = -5006822351130212030;
                            }
                        }
                    }
                    var_17 ^= (arr_7 [i_8] [i_8] [i_12]);
                    var_18 -= ((!(arr_44 [i_8] [i_11] [i_8] [i_12])));
                }
            }
        }

        for (int i_15 = 1; i_15 < 17;i_15 += 1)
        {
            arr_51 [i_8] [i_8] = (min((((max(65535, var_0)))), (~255)));
            arr_52 [i_8] [i_8] [i_15] = 255;
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 18;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 18;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 16;i_18 += 1)
                    {
                        {
                            arr_63 [i_8] = 8477;
                            arr_64 [i_8] [i_15] [i_17] [i_17] [i_16] = (((~1) ^ -16762));
                        }
                    }
                }
            }
        }
    }
    var_19 = ((-24882 ? var_1 : (min(82, var_1))));
    #pragma endscop
}
