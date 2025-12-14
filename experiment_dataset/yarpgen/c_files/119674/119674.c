/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((var_18 ? 30 : 123)) >= var_3))) % ((-var_5 ? (~var_5) : -96))));
    var_20 = ((-((~(-2147483647 - 1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_21 ^= var_12;
                arr_6 [1] |= ((2147483647 < (((arr_1 [i_0]) + (var_13 / var_16)))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    {
                        arr_20 [i_2] [i_2] = (max((var_7 == var_9), ((-var_7 ? ((((arr_5 [i_3] [i_3]) | var_15))) : (max(2147483647, -3185893885371225161))))));
                        arr_21 [i_2] [i_4] [i_5] = var_18;
                    }
                }
            }
        }
        arr_22 [i_2] = var_15;
        arr_23 [i_2] = var_2;
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 18;i_6 += 1)
    {
        var_22 = ((2147483647 ? -6 : 30));
        arr_26 [i_6] [i_6] = ((67092480 ? ((~(arr_25 [1]))) : (((51 ? 59226 : 55)))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    {
                        var_23 *= var_10;
                        arr_37 [i_6] [i_7] [1] [i_9] &= arr_36 [i_9] [i_8] [i_7] [i_7] [i_7] [i_6 - 1];
                        arr_38 [i_7] [i_7] [7] = (992861860 == 0);
                        arr_39 [i_6] [i_6 - 1] [i_6] [i_6] [i_6] = var_2;
                    }
                }
            }
        }
        var_24 ^= ((-(arr_33 [i_6] [8] [i_6] [i_6] [i_6])));
    }
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        var_25 ^= ((!((min(var_9, 7)))));
        /* LoopNest 3 */
        for (int i_11 = 1; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 16;i_13 += 1)
                {
                    {
                        arr_50 [i_11] [i_12] [16] = ((((min((max((arr_45 [i_11] [i_11]), var_17)), var_13))) ? (arr_29 [i_11 - 1]) : (((-((((arr_43 [i_10] [i_11] [i_13]) || -20))))))));
                        arr_51 [i_11] = ((4294967273 ? 138 : 4294967274));
                        arr_52 [13] [i_10] [i_11] [15] [i_12] [4] = (2882079118 <= 59244);
                    }
                }
            }
        }
    }
    #pragma endscop
}
