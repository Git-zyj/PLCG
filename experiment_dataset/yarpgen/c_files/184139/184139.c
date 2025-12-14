/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_12 -= max((arr_2 [i_1 - 2] [i_0] [i_2 - 1]), (((arr_0 [i_0]) ? (((arr_9 [i_0]) ? (arr_3 [i_0] [i_0]) : var_2)) : (((var_7 ? var_1 : var_3))))));
                                arr_13 [2] [i_1] = (-97 ? (var_3 >= var_8) : ((((max((arr_5 [i_1] [i_3] [1] [i_1]), (arr_10 [i_0] [i_3] [i_0])))) ? var_11 : var_5)));
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_4] = (((((((var_9 ? -22379 : (arr_3 [i_1] [i_1])))) ? ((((8546815401197254295 < (arr_9 [i_0]))))) : (arr_7 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_1] [i_3 + 1] [i_4]))) | ((max(var_9, (arr_5 [i_0] [i_1 - 3] [i_2] [i_1]))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_18 [i_1] [i_1] = (((var_2 * var_7) && (arr_8 [1] [i_1] [i_1] [i_1] [i_1])));
                        arr_19 [0] [0] [i_2] [i_1] = ((var_6 ? ((var_1 ^ (arr_4 [i_0] [i_0] [7]))) : (-103 > var_11)));
                    }
                    for (int i_6 = 2; i_6 < 8;i_6 += 1)
                    {
                        arr_22 [i_6] [i_1 - 4] [i_1] [i_6] [i_6] = ((((var_3 > (((var_9 ? (arr_11 [i_0] [i_1 + 3] [i_2] [i_1] [i_1] [i_0]) : (arr_10 [i_6] [i_2] [i_0])))))) ? ((max((arr_20 [i_0] [i_6] [i_2 - 2] [i_6 + 2] [i_0] [i_0]), ((var_6 + (arr_2 [11] [i_1] [i_2 + 2])))))) : (max(var_5, 3169897801809420410))));
                        arr_23 [i_1] [i_1] [i_1] = ((((((((var_6 ? (arr_21 [i_0] [i_0] [i_0] [i_0]) : 32767))) ? (arr_20 [i_0] [i_0] [i_0] [i_1 + 4] [i_2 - 3] [i_6]) : ((max(var_8, (arr_17 [i_6] [i_2] [1] [i_0] [i_0]))))))) ? (((~(arr_3 [i_1] [i_6])))) : (~496881665)));
                        arr_24 [0] [i_1] = (max(((((arr_1 [6]) | var_7))), (max((arr_16 [i_0]), (((var_9 ? -59 : var_4)))))));
                        var_13 += ((~(((arr_5 [i_0] [i_1 - 3] [i_2 - 3] [i_6]) ? (arr_9 [i_0]) : (arr_5 [i_0] [i_1 - 2] [2] [i_0])))));
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_14 = ((+(max((arr_0 [i_2 - 1]), var_3))));
                        var_15 = (var_0 ? ((~(arr_6 [i_2 - 3] [i_1]))) : ((~(arr_6 [i_2 - 3] [i_1]))));
                        var_16 = (~(((var_9 ? var_11 : var_10))));
                    }
                    var_17 = (((((~((var_11 ? (arr_7 [i_0] [i_1 + 3] [5] [i_1] [1] [1]) : var_2))))) ? 59 : var_8));
                }
                var_18 = (min(var_18, ((((arr_10 [i_0] [i_0] [i_1 - 4]) >= (arr_7 [i_1 + 3] [i_1] [0] [i_0] [4] [i_0]))))));
                var_19 = (-63 ? ((((arr_17 [i_0] [i_0] [i_1 - 1] [i_1 - 3] [i_1 - 3]) & (arr_12 [i_0] [i_0] [i_0] [i_1 + 1] [10])))) : ((((((arr_17 [5] [i_0] [i_0] [i_1 - 1] [5]) ? var_1 : 4294967295))) ? var_6 : (arr_25 [i_1]))));
            }
        }
    }
    var_20 = var_1;
    var_21 = var_3;
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 10;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            {
                var_22 = (arr_12 [i_8] [i_9] [9] [9] [3]);
                var_23 = (min(var_23, ((((((((111 ? var_1 : var_8)) % ((var_0 ? 1 : var_9))))) ? ((((max(var_6, var_1))) ? var_1 : var_8)) : (((69 * var_9) & ((((arr_0 [i_8]) > var_4))))))))));
                var_24 = (max(((((((var_7 ? var_9 : (arr_10 [i_8] [i_9] [i_9])))) ? 27028 : (((arr_25 [i_8]) ? var_5 : 1))))), 7816842));
            }
        }
    }
    #pragma endscop
}
