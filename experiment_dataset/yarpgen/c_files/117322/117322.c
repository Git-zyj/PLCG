/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_12 ? var_16 : var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_18 = (max(((63 ? (min(9009144268323851763, 14316101300874307207)) : (arr_5 [i_1] [i_1 + 3]))), (((((3606098140531365257 ? 251 : (arr_7 [4] [i_1] [i_2])))) ? (((arr_5 [i_1 - 1] [i_0]) ? 6946758246946543132 : 255)) : (arr_7 [i_1 + 2] [i_1 + 2] [i_1 + 3])))));
                    arr_9 [i_0] [6] [i_2] [i_0] |= ((((max((((arr_7 [i_0] [1] [i_2]) ? (arr_8 [i_0] [i_1] [i_0]) : (arr_5 [10] [i_0]))), (((12 < (arr_1 [8]))))))) ? (arr_3 [i_2]) : (min((min((arr_8 [i_0] [i_1] [i_2]), -3606098140531365258)), (6 >> 1)))));
                    var_19 = ((1324718867 <= (var_9 - 737180063)));
                    var_20 = (arr_3 [i_0]);
                }
            }
        }
    }
    var_21 = ((var_16 ? (min(1844232353, -159945702)) : var_14));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {
                arr_15 [i_3] [i_3] = var_14;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        {
                            arr_22 [i_3] [i_4] [i_3] [i_3] = (arr_21 [i_6] [i_5] [i_3] [i_3]);
                            var_22 = ((-((-(((arr_10 [i_3] [13]) * var_8))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 4; i_7 < 8;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            {
                arr_30 [i_8] [i_8] [i_8] = (3758724659 != 6112099816971259082);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 8;i_10 += 1)
                    {
                        {
                            var_23 = (min(var_23, ((((((14032627338694386355 ? ((((arr_31 [i_9] [i_8] [i_9] [i_7]) ? (arr_13 [i_7] [i_7]) : (arr_11 [i_10 - 2])))) : (arr_32 [i_8] [i_8] [i_8])))) ? ((((max(-4539451962338185517, 7)) > ((min((arr_23 [i_7]), (arr_29 [10] [10] [i_10]))))))) : (((arr_14 [i_7 - 1]) ? (arr_14 [i_7 + 1]) : (arr_14 [i_7 + 3]))))))));
                            var_24 = (min(var_24, (arr_20 [i_7 - 3])));
                            var_25 = (max(var_25, (((((((arr_23 [i_10 - 2]) ? 5079926303063017982 : (arr_23 [i_10 + 1])))) ? ((((arr_34 [i_7 + 2] [i_7 - 1] [i_7 - 3] [i_7 + 2] [i_7 + 2] [i_7 + 2]) <= (max(1, (arr_1 [i_7])))))) : (((((arr_6 [i_7] [1] [1]) + 2147483647)) << (129 - 129))))))));
                        }
                    }
                }
                var_26 = ((875661592307025643 * (130783944 <= 248)));
            }
        }
    }
    #pragma endscop
}
