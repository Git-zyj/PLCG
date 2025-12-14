/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = ((-(((arr_0 [i_0] [i_0]) >> (184 - 177)))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_12 ^= (!1587806706);
                                arr_12 [i_4] [i_3] [i_3] [i_2] [i_3] [i_0] = ((min((arr_10 [i_0] [i_1] [i_1] [i_2] [i_3] [i_2] [i_0]), 72)) != (((((1 && (arr_6 [i_0] [i_1] [i_2 - 1] [i_3]))) ? ((max(13, 0))) : (71 || 1)))));
                                arr_13 [i_1] [i_2] [i_3] [i_4] = ((~(((~(arr_10 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_2] = 183;
                    var_13 ^= (((arr_2 [i_1 - 1] [i_1 - 1]) && 9618));
                }
            }
        }
        var_14 = (arr_5 [i_0]);
        var_15 = 3139803411;
    }
    for (int i_5 = 2; i_5 < 9;i_5 += 1) /* same iter space */
    {
        var_16 = 4988954611284820669;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    arr_24 [i_5] [i_5] [i_5] [i_5] = (((~1) * ((~((((arr_4 [i_5]) <= (arr_17 [i_6]))))))));
                    arr_25 [i_5] [i_5] [i_7] = max(0, (((((1 % (arr_10 [i_5 - 2] [i_5] [i_5 + 1] [i_6] [i_6] [13] [i_7])))) ? 183 : 2592262064)));
                }
            }
        }
    }
    for (int i_8 = 2; i_8 < 9;i_8 += 1) /* same iter space */
    {
        arr_28 [i_8] [i_8] = (((((529 / (arr_2 [i_8] [i_8])))) ? (arr_27 [i_8]) : 33));
        /* LoopNest 3 */
        for (int i_9 = 2; i_9 < 6;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 9;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    {
                        arr_37 [i_8] [i_9] [i_10] [i_10] &= ((((34524 ? ((((arr_30 [i_11]) >= (arr_16 [i_9 - 1])))) : ((min(184, 1)))))) ? (arr_21 [i_8 + 1] [i_9 + 4] [i_10 + 1]) : (arr_21 [i_9] [i_10 - 1] [i_11]));

                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            var_17 &= (((550958040 + 79) < (~30987)));
                            var_18 |= ((65001 * (((~30987) ? 181 : ((max(30967, (arr_34 [i_9] [i_10] [i_9]))))))));
                            arr_42 [i_8] [i_11] [i_10] [i_9] [i_8] [i_8] = ((max(1, 1)) > ((max((arr_21 [i_11] [i_10] [i_9]), (529 / 529)))));
                            arr_43 [i_8] [i_9] [i_10] [i_8] [i_12] [i_12] = 1;
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            var_19 = 4929520568349926795;
                            var_20 = 74;
                            arr_46 [i_8] = (-6864213492827730728 < 1);
                            var_21 |= (arr_9 [i_10] [i_10] [i_11] [i_10]);
                        }
                        var_22 ^= (arr_4 [i_9 + 2]);
                        arr_47 [i_8] [i_8] [i_8] [i_8] [i_8] = (arr_36 [i_8] [i_8 - 1] [i_10] [i_10 - 1] [i_9 + 2] [i_9 + 1]);
                        arr_48 [i_11] [i_11] |= 238;
                    }
                }
            }
        }
    }
    var_23 = (((((((31017 ? var_8 : 28345))) / var_1)) ^ -1670298269));
    var_24 ^= (!var_8);
    var_25 = 14;
    var_26 = ((-65 ? (((31011 ? (2147483647 == 0) : -1))) : var_6));
    #pragma endscop
}
