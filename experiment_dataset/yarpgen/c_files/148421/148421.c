/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((max(var_13, ((var_12 ? var_0 : var_3)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = ((((arr_0 [i_0] [i_0]) | (arr_1 [12]))));
        arr_2 [i_0] = (((((-2147483645 ? 34918 : 6148053585790729961)) + (1 - -1948990392))));
    }
    var_17 = var_14;
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    var_18 = (((((((arr_4 [5] [i_1]) < (arr_0 [i_1] [i_1]))))) & ((((arr_4 [i_3] [i_2]) ? (arr_6 [i_1]) : (arr_8 [i_3]))))));
                    var_19 = (((((arr_8 [i_1]) ? (arr_8 [i_3]) : (arr_8 [i_3]))) == ((~(arr_9 [i_1] [i_1] [i_1])))));
                    arr_12 [7] [i_2] [i_1] = ((max((((arr_9 [i_1] [i_1] [i_3]) ? (arr_0 [i_1] [i_1]) : (arr_7 [i_3] [i_2] [8]))), (((arr_11 [1]) ^ (arr_1 [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 9;i_5 += 1)
                        {
                            {
                                arr_18 [6] [i_1] [i_1] [4] [i_1] = (((arr_0 [i_1] [i_1]) ? ((max((arr_17 [i_5 + 1]), ((~(arr_14 [i_1] [7] [8])))))) : (max((((-7404216343044103989 ? 14 : 204))), (((arr_1 [i_1]) ? (arr_10 [i_1] [i_2] [i_1]) : (arr_15 [i_1] [i_2] [i_3])))))));
                                var_20 = ((((+((((arr_4 [i_1] [i_2]) < (arr_14 [i_5] [i_4] [i_3])))))) > (max((((arr_11 [i_1]) ^ (arr_9 [i_5 + 2] [i_1] [i_1]))), ((~(arr_0 [i_3] [i_1])))))));
                                var_21 = (((((((((arr_0 [i_1] [i_1]) ? (arr_11 [i_1]) : (arr_10 [i_1] [i_1] [i_3])))) ? ((~(arr_17 [i_3]))) : (arr_13 [i_5 - 1] [i_1] [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 2])))) ? ((((max((arr_8 [i_1]), (arr_3 [i_1])))) ? (arr_14 [i_1] [i_5 - 1] [i_5 - 1]) : (arr_4 [i_5 - 1] [i_2]))) : ((((max((arr_6 [i_1]), (arr_10 [i_1] [i_2] [i_3]))))))));
                                arr_19 [i_1] = 124;
                                var_22 = (((((arr_1 [i_5 + 2]) < (arr_1 [i_5 - 1]))) ? (((~(arr_16 [i_1] [i_1] [i_3] [i_2] [i_2])))) : (arr_1 [i_5 + 2])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 += var_14;
    #pragma endscop
}
