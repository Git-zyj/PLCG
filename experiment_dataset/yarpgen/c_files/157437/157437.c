/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_12 = (((~(arr_4 [i_3]))));
                        arr_10 [i_1] [i_3] [i_3] = (((arr_8 [i_3] [14] [i_2] [i_2] [i_3] [i_3]) ? 14255124112732871200 : var_10));
                        arr_11 [i_0] [6] [i_3] [i_3] = ((4191619960976680409 << (arr_7 [i_3])));

                        for (int i_4 = 3; i_4 < 19;i_4 += 1) /* same iter space */
                        {
                            var_13 = (((arr_5 [i_3 - 1] [i_3 - 1] [i_0 - 1] [i_0 + 1]) ? (arr_5 [i_3 - 1] [i_3 - 1] [i_0 + 2] [i_0 - 1]) : var_11));
                            var_14 ^= ((var_8 ? var_3 : (arr_13 [i_4 + 3] [i_3 - 1] [8] [i_3 - 1] [i_0])));
                            arr_14 [i_0 - 1] [i_3] [10] [10] [i_4] [i_3] [1] = ((~var_10) ? (~4191619960976680409) : 6);
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((18446744073709551612 + (arr_9 [i_0] [i_0 + 2])));
                        }
                        for (int i_5 = 3; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_0 + 2] [i_0 - 1] [i_0] [i_0] [i_0] [i_3] = ((-2887808445022265062 * (((((arr_16 [i_0] [i_1]) >= var_3))))));
                            var_15 += (((var_2 >= var_10) >= (arr_16 [i_0] [i_1])));
                        }
                    }
                    var_16 = ((var_8 == (((((max(27660, (arr_3 [i_0] [i_1] [i_1]))))) | (~4191619960976680420)))));
                    arr_19 [2] = (~((~(arr_4 [i_1]))));
                }
            }
        }
    }
    var_17 = (min(var_7, ((~((var_9 ? var_5 : var_1))))));

    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        arr_24 [i_6] = (((((~((1 ? 1 : 62))))) != ((var_4 ? ((31208 ? 8910767696803835842 : (arr_8 [i_6] [14] [i_6] [i_6] [i_6] [i_6]))) : (14255124112732871213 - 855780718)))));

        for (int i_7 = 3; i_7 < 12;i_7 += 1)
        {
            var_18 = ((((((((var_5 ? (arr_5 [i_6] [i_7] [i_7] [i_6]) : var_1))) ? ((var_0 << (7936 - 7917))) : (((((arr_2 [i_7] [i_7]) != 4294967295))))))) + (((arr_7 [i_6]) ? (max((arr_2 [8] [i_7]), 9498339779859547468)) : 7408967005593608609))));
            var_19 ^= (((((((var_9 ? var_5 : (arr_13 [16] [i_7] [i_7] [1] [i_7]))) + (~var_8)))) ? (arr_7 [i_6]) : (arr_22 [1])));
            arr_27 [i_6] [i_6] [11] = max((min((((arr_8 [i_6] [14] [i_7 + 1] [i_6] [i_7 - 1] [14]) / 1)), var_10)), var_7);
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            arr_31 [i_6] [i_6] [i_8] = (((arr_6 [i_8] [i_6] [i_6] [i_6]) ? (arr_6 [i_6] [i_8] [i_8] [i_6]) : (arr_6 [i_6] [i_8] [i_8] [i_8])));
            arr_32 [i_6] [i_6] [i_6] = (((arr_2 [1] [i_8]) ? var_8 : (arr_2 [i_6] [i_8])));
        }
    }
    #pragma endscop
}
