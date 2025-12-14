/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (~var_14);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_21 = 8913709887776671751;
                    var_22 = (((--1) ? ((((max(1230889901, 8830))) ? (arr_1 [i_1 + 1]) : (((arr_4 [i_0] [i_1 + 3] [1]) ? var_12 : (arr_5 [i_0] [i_0] [i_2]))))) : ((((arr_0 [i_0]) + (((arr_0 [i_1]) ? var_5 : 11782)))))));
                }
            }
        }
    }
    var_23 = ((-((var_10 ? (!var_5) : -11756))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {

                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        var_24 = ((((max(93, (arr_13 [i_6 - 2] [i_6] [i_5] [i_4 + 2] [i_4 + 4] [i_4 + 4])))) ? -var_5 : (((var_13 ? (arr_13 [i_6 + 3] [i_6] [5] [i_4 + 1] [i_4 + 4] [12]) : (arr_13 [i_6 - 2] [8] [i_4] [i_4 - 1] [i_4 + 1] [i_4]))))));
                        var_25 = 100037760;
                    }
                    for (int i_7 = 2; i_7 < 14;i_7 += 1)
                    {
                        var_26 = ((~(~-8508)));
                        var_27 = ((var_14 ? ((var_16 ? (arr_2 [i_5]) : (((((arr_14 [9] [i_5] [i_5] [i_4] [9]) + 2147483647)) << (var_5 - 2888195323))))) : (((var_5 >= (((425361617 ? -1035865377 : -1))))))));
                        var_28 = (max(((-1035865377 ? -21702 : -4481)), ((((((arr_2 [i_3]) ? var_10 : var_3)) != (-2147483647 - 1))))));
                        var_29 = (max(var_29, (((((min(4476, -0))) ? ((153 ? (arr_4 [i_3] [i_7 + 1] [i_7 + 1]) : var_0)) : (arr_14 [i_3] [i_3] [i_4] [i_5] [i_3]))))));
                    }
                    var_30 -= max(var_18, (arr_2 [i_3]));
                    var_31 = ((!((((!var_6) ? (arr_14 [i_3] [i_3] [i_4 + 3] [i_5] [i_5]) : (((arr_17 [4] [4] [4] [1]) ? (arr_10 [i_3] [i_3] [i_5]) : var_15)))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 1; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 4; i_11 < 20;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 22;i_12 += 1)
                        {
                            {
                                var_32 = -300978365;
                                var_33 = (-5817706061346569534 > (((1 ? (arr_19 [i_8 - 1] [i_8]) : (arr_18 [i_8])))));
                                var_34 = (min(var_34, ((((!1) >> ((((235 ? var_7 : (~32745))) - 88)))))));
                            }
                        }
                    }
                    arr_30 [i_8] [i_9] [i_8] = ((var_10 ? (max((((arr_29 [16] [i_8] [i_10] [i_8 - 1]) ? (arr_20 [i_10] [i_9 + 1] [1]) : -356906308)), (var_7 && 23))) : ((((((arr_25 [i_8] [i_10] [i_10] [i_10]) ? (arr_27 [i_9 - 1]) : (arr_26 [i_8] [i_8] [i_8] [i_8] [i_8] [12]))) != (arr_23 [i_10] [i_10] [i_10]))))));
                }
            }
        }
    }
    #pragma endscop
}
