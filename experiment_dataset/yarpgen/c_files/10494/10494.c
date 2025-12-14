/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_10, var_2));

    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = ((((((((536870911 + (arr_3 [12] [6] [0])))) ? 8044960957705308054 : (arr_4 [i_2 - 1] [12] [i_0])))) ? (((((((arr_6 [i_0] [i_0 + 3]) && 19)))) * (arr_1 [i_0 + 3]))) : (max((max((arr_0 [i_0 - 1] [i_1]), (arr_0 [21] [i_2 + 1]))), (((arr_4 [i_0] [i_1] [i_2 + 2]) ? (arr_1 [i_2 - 3]) : 120861509))))));
                    arr_8 [i_1] [i_0] [i_2 + 2] [i_0 - 1] = (min((min((arr_2 [i_2 - 4] [i_0 + 2]), ((min(120861509, (arr_3 [i_1] [i_0] [i_1])))))), (arr_2 [i_2 - 3] [i_0 + 2])));
                }
            }
        }
        var_14 = (min((((arr_7 [i_0]) ^ 8044960957705308057)), (!8044960957705308061)));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 2; i_4 < 22;i_4 += 1) /* same iter space */
        {
            var_15 |= (arr_9 [i_3 + 3]);
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        var_16 ^= (arr_2 [i_4] [i_4 + 1]);
                        var_17 = ((+(((arr_6 [i_4] [i_4]) + (arr_11 [i_6])))));
                    }
                }
            }
        }
        for (int i_7 = 2; i_7 < 22;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 23;i_9 += 1)
                {
                    {
                        arr_25 [i_3] [i_8] [i_3] [i_3] = -20;
                        var_18 += (((arr_18 [i_3 + 1]) + (arr_9 [i_3 + 3])));
                    }
                }
            }

            for (int i_10 = 3; i_10 < 22;i_10 += 1)
            {
                var_19 *= (((arr_5 [i_7] [i_7 - 2]) / -22));
                var_20 = (arr_17 [i_10 - 2] [14] [i_10 - 2] [i_3]);
            }
            var_21 = ((((2616894040050424373 + (arr_19 [14]))) != (((arr_11 [i_3]) ^ 1743529752))));
            arr_29 [12] = (((arr_11 [i_3 + 3]) ? (arr_11 [i_3 + 1]) : (arr_11 [i_3 + 1])));
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 2; i_12 < 22;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    {
                        arr_39 [i_3] [i_11] [i_11] [i_12 - 2] [i_3] = (((~-8044960957705308051) << (((arr_23 [i_12 - 1] [i_11] [i_3 + 1]) - 2216073108))));
                        var_22 = (arr_26 [i_3 + 2] [i_11] [i_12 + 2] [i_13]);
                        arr_40 [i_3 + 1] [i_11] [i_3 + 1] [i_13] = (((arr_18 [i_3 + 2]) ? (arr_37 [i_3 - 1] [i_11]) : ((((8044960957705308053 != (arr_17 [i_3 + 2] [i_11] [i_12] [i_13])))))));
                        arr_41 [i_11] [3] [i_13] = var_9;
                        arr_42 [10] [i_11] [i_12] [i_13] = (((arr_3 [i_3 + 1] [i_13] [i_3 + 2]) ? (arr_3 [i_3 + 1] [i_12] [i_3 + 1]) : (arr_3 [i_3 + 1] [i_12] [i_3 + 1])));
                    }
                }
            }
            var_23 = (min(var_23, (((~(arr_0 [i_3 + 3] [i_3 + 2]))))));
        }
        arr_43 [i_3] = (((arr_32 [20] [i_3 + 3] [20]) ? (arr_27 [3]) : (arr_10 [i_3 + 3])));
    }
    var_24 &= (var_7 + var_4);
    var_25 = (min(-var_1, 8044960957705308066));
    #pragma endscop
}
