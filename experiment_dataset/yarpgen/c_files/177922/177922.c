/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= ((((min((max(var_14, var_8)), (18932 & var_10)))) ? var_18 : var_17));
    var_20 &= var_1;

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_21 = (max((max((((arr_0 [i_0]) ? (arr_2 [i_0] [i_0]) : var_10)), 1)), (((-((-18937 ? (arr_1 [i_0] [i_0]) : 18937)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 20;i_3 += 1)
                {
                    {
                        var_22 = (((((arr_3 [i_2 + 1] [i_2 + 1] [i_3 - 2]) ? (arr_10 [i_2 - 1] [i_2 - 1] [i_3 - 2] [i_3] [i_3]) : (arr_4 [i_0] [i_2 - 1] [i_3 - 3])))) ? (min((arr_6 [i_1] [i_2 - 1] [i_3 - 1]), (arr_6 [i_1] [i_2 + 1] [i_3 - 1]))) : ((-18933 ? -32276 : 18933)));
                        arr_11 [i_0] [i_1] [i_2] [i_0] [i_3] = (((((2641624587974434851 ? 32285 : -18940))) && (((~(arr_6 [i_1] [i_2 - 1] [i_3 + 1]))))));
                        arr_12 [i_1] [i_2] [i_1] [i_1] [i_1] [i_1] = (max((arr_6 [i_0] [i_2 - 1] [i_3 - 3]), (max((arr_6 [i_0] [i_2 + 1] [i_3 - 1]), (arr_6 [i_0] [i_2 - 1] [i_3 - 1])))));
                    }
                }
            }
        }
        arr_13 [i_0] [i_0] = ((((max((max(9223372036854775807, -1)), (arr_1 [i_0] [i_0])))) ? (min((((arr_7 [i_0]) ? var_10 : (arr_8 [i_0] [i_0] [i_0]))), (((251 ? (arr_6 [i_0] [i_0] [i_0]) : var_2))))) : ((((10 ? 18935 : 18940))))));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    arr_24 [i_4] [i_4] [i_5] [i_6] = (max(var_6, var_4));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_23 = ((-1 ? ((((min(var_6, var_6))) / var_14)) : ((((-32264 ? 50324 : 9628))))));
                                arr_29 [i_4] [i_5] [i_5] [i_7] [i_7] = ((((((arr_20 [i_7 - 2] [i_7 - 2] [i_7 - 2]) ? (arr_20 [i_7 - 1] [i_7 - 2] [i_7 - 2]) : -7024246091908972956))) ? ((((arr_20 [i_7 - 1] [i_7 + 1] [i_7 - 1]) ? (arr_20 [i_7 + 1] [i_7 - 2] [i_7 - 2]) : (arr_20 [i_7 + 1] [i_7 - 1] [i_7 - 1])))) : (arr_20 [i_7 - 2] [i_7 - 1] [i_7 + 1])));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 4; i_10 < 20;i_10 += 1)
            {
                {
                    arr_36 [i_9] = (max((3065318137 + -6), (min((arr_0 [i_10 - 3]), (max(var_16, var_14))))));
                    var_24 ^= ((((((arr_19 [i_9 + 1] [i_10 + 1]) ? (arr_19 [i_9 - 1] [i_10 - 4]) : (arr_19 [i_9 - 1] [i_10 + 1])))) ? (((((-5233519226850210095 ? var_17 : 40415))) ? 1142318963 : (((arr_3 [i_4] [i_4] [i_10]) | var_1)))) : ((max((arr_16 [i_10 - 1]), (5 % var_3))))));
                }
            }
        }
    }
    #pragma endscop
}
