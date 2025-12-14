/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (-(((((1985029274 ? 1985029271 : 2309938022))) ? 1 : var_3)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (((~4027146976341783986) ? (~-231982945522562360) : (1985029276 - 1)));
                var_15 = ((1 ? 231982945522562360 : 1));
            }
        }
    }
    var_16 = (~var_11);
    var_17 = var_0;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            {
                arr_9 [i_3] [9] [i_3] = ((-(((((var_6 ? (arr_7 [i_2] [i_2]) : (arr_4 [i_2] [i_2])))) ? ((((!(arr_6 [i_2] [i_2] [i_2]))))) : (max((arr_8 [i_2] [18]), -103))))));
                arr_10 [i_2] [i_2] [i_3] = (arr_4 [i_2] [9]);
                arr_11 [i_3] [i_3] [i_2] = ((var_10 ? ((-(min(0, 2309938032)))) : 231982945522562360));

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_15 [i_2] [i_3] [i_3] = -2309937991;
                    var_18 = (min(var_18, (!67108864)));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                {
                    var_19 -= (((arr_6 [i_5] [i_3 + 1] [i_2]) ? (arr_8 [1] [i_5]) : (arr_6 [i_3 + 1] [i_3] [i_3 + 1])));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_20 = (((var_10 + 2147483647) << (4294967295 - 4294967295)));
                                arr_23 [i_2] [i_3] = (arr_12 [i_6 - 2] [i_6]);
                                arr_24 [i_2] [i_3] [19] = var_8;
                            }
                        }
                    }
                    arr_25 [4] [i_5] [i_5] [i_2] |= (((((var_8 ? (arr_12 [i_2] [i_2]) : var_12))) ? ((~(arr_4 [i_2] [i_3]))) : (((arr_17 [i_2] [i_2]) ? (arr_22 [4] [i_2] [i_2] [i_3] [i_2] [i_5]) : 1985029305))));
                }
                for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 4; i_10 < 19;i_10 += 1)
                        {
                            {
                                arr_34 [i_2] [i_3 + 1] [i_3] [i_2] [i_3] [i_9] [i_10] = 1;
                                var_21 = var_12;
                                arr_35 [i_3] [18] [i_3] = (arr_14 [4] [4] [i_8] [i_8]);
                                arr_36 [i_2] [i_3 + 1] [i_3] [i_8] [i_9] [i_10] [i_10 - 2] = (!231982945522562360);
                                var_22 = -18446744073709551615;
                            }
                        }
                    }
                    arr_37 [i_3] = ((((((4212171616 ? 8235342399188770509 : 1985029276)))) ? (((arr_4 [i_2] [i_3 - 1]) ? (arr_28 [i_2] [i_8]) : var_2)) : (((max((arr_4 [13] [6]), (arr_21 [i_2] [i_3])))))));
                    arr_38 [i_3] = (((var_8 ^ (arr_6 [i_2] [i_3] [i_8]))));
                }
                arr_39 [i_3] [17] [8] = ((((((!(arr_22 [i_2] [i_3] [i_3 - 2] [i_2] [i_3] [i_3]))) ? (arr_5 [i_2]) : (((1 + (arr_33 [i_2] [i_2] [2] [i_2] [i_2] [16])))))) % -var_1));
            }
        }
    }
    #pragma endscop
}
