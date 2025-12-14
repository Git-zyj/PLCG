/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_0] = (var_4 ? (arr_6 [i_0] [i_0]) : (arr_5 [i_0] [i_0] [i_1] [i_2]));
                    var_12 -= (arr_2 [i_0] [i_1] [i_2]);

                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = 8259;
                        var_13 = ((-(arr_4 [i_3 - 1] [i_3 - 1])));
                    }
                    for (int i_4 = 3; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_4] [i_4 - 1] [i_4] [i_4 - 3] [i_4 - 1] [i_4] = (!var_4);
                        var_14 = (arr_1 [i_4 - 3]);
                        arr_17 [i_0] [i_4] [i_2] [i_2] [i_4] = 31;
                        var_15 = ((arr_15 [i_4 + 2] [i_4 + 1] [i_4] [i_4 + 3] [i_4]) > (arr_15 [i_4 - 1] [i_4 + 2] [i_4] [i_4 - 3] [i_4]));
                    }
                    for (int i_5 = 3; i_5 < 11;i_5 += 1) /* same iter space */
                    {
                        var_16 = ((31 ? -31 : 1056964608));
                        var_17 = (!-1);
                    }
                    var_18 = ((-(arr_13 [i_0] [i_1] [i_1] [i_2] [0])));
                    var_19 -= 25083;
                }
                var_20 = (arr_11 [i_0] [i_0] [i_0] [i_1] [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 11;i_7 += 1)
        {
            {

                /* vectorizable */
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        arr_31 [i_7 - 1] [i_7] = (((arr_25 [i_6] [i_7] [i_8]) >= (arr_20 [i_7 - 1])));
                        var_21 = ((18 ? 465261563 : -2));
                        var_22 = (((((2464872132 ? 4294967295 : 206))) ? (arr_6 [i_6] [i_6]) : 179));
                        arr_32 [i_6] [i_7] [i_6] [i_6] = ((2147352576 > (((arr_3 [i_6] [i_6]) ? (arr_22 [i_7] [i_9]) : 3974903094))));
                    }
                    arr_33 [i_6] [i_6] [i_7] = -1;
                }
                arr_34 [i_7] = ((((min(17038, (arr_18 [i_7] [i_7 - 1])))) ? (((arr_18 [i_7] [i_7 - 1]) ? 1 : (arr_18 [i_7] [i_7 + 1]))) : (arr_18 [i_7] [i_7 + 1])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 3; i_10 < 22;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 1;i_12 += 1)
            {
                {
                    var_23 = (min(61, 98));
                    arr_44 [i_10] [i_11] [i_12] [i_12] = (arr_38 [i_10 - 1] [i_10 - 2]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    for (int i_16 = 3; i_16 < 15;i_16 += 1)
                    {
                        {

                            for (int i_17 = 0; i_17 < 17;i_17 += 1)
                            {
                                var_24 |= ((2831971585 ? 8192 : 5125211000746864886));
                                arr_59 [i_13] [i_14] [i_13] [i_16] [i_17] = 17038;
                            }
                            arr_60 [i_13] [i_15] [i_15] [i_15] [i_15] = (((((arr_53 [i_13] [i_16 - 2] [i_16 - 2] [i_16]) ? (arr_53 [i_13] [i_16 + 2] [i_16] [i_16 - 1]) : 2116087528655221499)) << (((min(((2147483647 ? (arr_55 [i_13] [i_14] [i_13]) : (arr_40 [i_13] [i_16]))), ((min(7068871146944513749, 4096))))) - 4033))));
                            var_25 *= 13;
                            var_26 = (((((1672989287 ? var_3 : (arr_37 [i_16 + 1])))) ? (((arr_37 [i_16 - 2]) ? 4967507885212399367 : (arr_37 [i_16 - 1]))) : ((((!(arr_37 [i_16 + 1])))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 17;i_18 += 1)
                {
                    for (int i_19 = 3; i_19 < 15;i_19 += 1)
                    {
                        {
                            var_27 = (((min((var_2 & -1742530405), ((min(var_11, 1927716643))))) - -14));
                            arr_65 [i_13] [i_14] [i_18] [i_19 + 1] = (min((arr_52 [i_13] [i_19 + 1]), ((max(-10, (arr_46 [i_13]))))));
                            var_28 = min((!2147483647), (min(14, 1943636767)));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 16;i_20 += 1)
    {
        for (int i_21 = 3; i_21 < 15;i_21 += 1)
        {
            {
                var_29 ^= (arr_68 [i_20]);
                var_30 = ((-(arr_50 [i_20] [i_21] [i_21])));
            }
        }
    }
    #pragma endscop
}
