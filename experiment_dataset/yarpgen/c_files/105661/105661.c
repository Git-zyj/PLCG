/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_10 = ((61580 ? (!3956) : (arr_2 [i_0])));
        var_11 ^= arr_2 [i_0];
        arr_3 [i_0] |= (~var_9);
        var_12 = min(((max(var_0, 1))), ((16 ? var_4 : -2437662978376724319)));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_13 *= (((((2425535249 ? (arr_19 [i_5] [i_5 - 1] [4] [i_5] [i_4]) : (arr_17 [i_5] [i_5 - 1] [i_5] [i_5 - 1] [i_5] [i_2] [i_1])))) ? (max(3945, var_8)) : (arr_19 [i_5 - 1] [i_5 - 1] [15] [i_4] [7])));
                            var_14 += (((((var_8 & (((var_3 ? var_0 : -16)))))) ? ((min(((var_3 ? 1224843434 : (arr_19 [i_1] [1] [i_1] [i_1] [i_1]))), (arr_14 [i_4] [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_4])))) : 17007135597107429237));
                            var_15 = ((((max((arr_16 [i_4] [i_4] [i_4 - 1] [i_4 - 1]), var_9))) ? (((arr_16 [i_4] [i_4] [i_4 - 1] [i_4 - 1]) & 9759018178082928435)) : 0));
                        }
                    }
                }
            }
            var_16 = (max(var_16, ((min((((arr_13 [i_1]) ? (var_9 | 85) : (var_0 > var_4))), (((71 ? 33921 : 785531244))))))));

            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                arr_23 [i_1] = var_7;
                var_17 = (max(var_17, ((min(((4294967294 << (((arr_22 [i_1] [i_1] [0]) - 43827)))), ((((((1 ? -1575329827 : 0))) && (arr_20 [i_1] [i_1])))))))));
                var_18 = (max(var_5, (18446744073709551615 != 1)));
                var_19 = 3063853302571786227;
            }
            arr_24 [i_1] [i_2] [7] = (max((arr_4 [i_2]), (((arr_13 [i_1]) ? (arr_13 [i_2]) : var_6))));
        }
        arr_25 [i_1] [i_1] = ((((~(1 % 17487339172144522296))) != ((-(arr_12 [i_1])))));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 16;i_8 += 1)
            {
                {
                    var_20 = (min(var_20, (((-var_3 ? ((((max(var_5, 1))))) : ((((max((arr_4 [i_8]), -30))) ? (((arr_29 [15] [3] [16]) * 31601)) : 27190)))))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            {
                                var_21 |= 66584576;
                                var_22 = var_2;
                            }
                        }
                    }
                }
            }
        }
        var_23 = ((-(3955 >= 80)));
    }
    for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
    {
        var_24 = (min(var_24, ((min((((max((arr_16 [i_11] [i_11] [i_11] [i_11]), -16)))), (((arr_16 [i_11] [i_11] [i_11] [i_11]) << (134217216 - 134217194))))))));
        arr_42 [i_11] = ((((((arr_37 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]) ? 90 : var_0))) * (max(var_1, var_9))));
    }
    var_25 &= var_5;
    var_26 = var_7;
    #pragma endscop
}
