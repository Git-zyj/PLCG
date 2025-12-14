/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_4 <= 63);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 *= min((63 && -29394), 19569);
                    arr_9 [7] [i_1] [i_1] = (min(((-(arr_6 [i_0] [i_0] [i_0]))), -63));
                    var_20 = (max((arr_2 [i_0]), ((~((min(var_8, -32766)))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_21 = var_17;
                        var_22 = var_6;
                    }
                    for (int i_6 = 2; i_6 < 8;i_6 += 1)
                    {
                        var_23 = (max((((arr_12 [i_6 - 1] [4] [i_4 - 1]) ? (arr_12 [i_6 - 2] [i_6 - 2] [i_4 + 1]) : (arr_12 [i_6 - 1] [i_6] [i_4 - 1]))), (((67 && var_10) ? 67 : (arr_6 [i_6 - 1] [7] [i_4])))));
                        arr_21 [7] [i_4] [7] [i_0] [i_0] = ((~((min((170 != var_1), (!19720))))));
                    }
                    arr_22 [i_0] [i_0] = 67;
                }
            }
        }
        var_24 = (min(((((min((arr_4 [i_0]), (arr_17 [10] [10] [10] [i_0] [i_0])))) ? var_17 : ((max(18, 179))))), var_3));
    }
    for (int i_7 = 1; i_7 < 14;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                {
                    var_25 = (max(var_25, (((((30935 >> (18474 - 18454))) * 18474)))));
                    var_26 = (min(var_26, -1371));
                }
            }
        }
        var_27 = ((((max((arr_26 [i_7 + 3] [i_7] [i_7]), var_11))) && (((~(arr_26 [i_7 + 3] [i_7 + 3] [i_7]))))));
    }
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        var_28 = (((((-var_11 - (~var_13)))) ? var_6 : ((min((arr_31 [i_10] [i_10]), var_6)))));
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 15;i_12 += 1)
            {
                {
                    var_29 *= 18;
                    /* LoopNest 2 */
                    for (int i_13 = 3; i_13 < 15;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 17;i_14 += 1)
                        {
                            {
                                var_30 = (((!var_15) >= ((min((arr_42 [i_14] [i_14] [i_14 + 1] [i_14 + 1] [i_14] [i_14]), (arr_42 [i_14] [i_14] [i_14 + 1] [i_14] [i_14] [6]))))));
                                arr_43 [i_10] [i_11] [i_12] [i_13] [11] = (arr_42 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 17;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 17;i_16 += 1)
        {
            {
                arr_48 [i_15] [i_16] [i_15] = 18474;
                arr_49 [i_16] [i_15] [i_15] = (((arr_38 [i_15] [i_15] [i_15] [i_15]) + ((26 ? -63 : 18474))));
                var_31 = var_5;
            }
        }
    }
    var_32 = var_14;
    var_33 = (!-124);
    #pragma endscop
}
