/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_17 = ((((max(96, (arr_10 [i_2] [i_1 - 1])))) ? ((-(arr_5 [i_0] [i_2] [i_0]))) : ((((~19) ? (arr_0 [i_0]) : (!117))))));
                        var_18 = (((~(arr_10 [i_2] [i_1 + 2]))));
                    }
                }
            }
        }
        var_19 = ((~((106 ? var_14 : (((arr_1 [i_0] [i_0]) ? -286775294 : 15360))))));
        var_20 = 86;
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 15;i_4 += 1)
    {
        arr_15 [i_4] = 13645752303626220017;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                {
                    var_21 = ((arr_3 [i_4 - 1]) ? 10 : (arr_3 [i_4 - 1]));
                    var_22 = (min(var_22, ((((arr_9 [i_4] [8] [i_6] [i_6]) ? (((110 ? var_6 : (arr_8 [i_6] [i_5] [i_4])))) : (((arr_12 [i_6] [i_4]) ? var_14 : 0)))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 15;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            {
                                arr_33 [i_8] [i_10] = ((~(arr_23 [i_4 + 1] [i_8 - 1] [i_9 - 3])));
                                var_23 ^= ((140737488355327 ? 28507 : 50335));
                            }
                        }
                    }
                    arr_34 [i_4] [i_7] [4] = ((-((var_12 ? -17842 : (arr_4 [i_7] [i_7])))));
                }
            }
        }
    }
    for (int i_11 = 2; i_11 < 19;i_11 += 1)
    {
        var_24 = (min(((((((arr_3 [19]) ? -12 : 30726))) | ((var_2 ? (arr_9 [i_11] [i_11] [i_11] [i_11]) : 82)))), ((-(arr_9 [i_11 + 1] [i_11 + 3] [i_11 - 1] [i_11 + 1])))));
        arr_38 [i_11] = 17216;
        var_25 -= (arr_5 [i_11] [i_11] [i_11]);
    }
    var_26 = 100;
    var_27 = (max(var_27, ((min(var_6, ((-77 ? -286775284 : 25356)))))));
    var_28 = (((!0) ? -3 : ((var_0 << (var_5 - 12873)))));
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 12;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {
            {
                arr_45 [1] = ((-((8729406294426777138 ^ (((var_10 ? var_1 : var_7)))))));
                var_29 = (min(((((max(var_7, var_3))))), (min(((9717337779282774464 ? 15 : var_9)), 0))));
                var_30 = (min(var_30, ((((((-((var_7 ? var_12 : -113))))) ? (arr_4 [19] [i_13]) : (((!((max(92, var_13)))))))))));
                arr_46 [8] = ((~(max(-var_11, (max((arr_41 [i_13]), (arr_29 [i_12] [i_12])))))));
            }
        }
    }
    #pragma endscop
}
