/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((-(max((var_4 - var_6), var_5))));
    var_11 = var_2;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_12 = (max(var_12, (((var_9 ? ((var_2 ? (arr_2 [i_0 + 4]) : (arr_1 [i_0 + 4]))) : (arr_1 [i_0 + 4]))))));
        arr_4 [i_0] = (((arr_2 [i_0 + 1]) << (((!(arr_0 [i_0]))))));
        var_13 = ((var_6 ? (((~15883) ? (arr_3 [i_0]) : (-15883 != 3270958231))) : (((((arr_0 [i_0]) == var_3))))));
        var_14 = (((-15883 ? (((var_6 ? -15884 : (arr_3 [i_0])))) : (((arr_2 [i_0]) | var_0)))) == ((((((((!(arr_2 [i_0]))))) <= 1399981675)))));

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_15 ^= ((((max((arr_0 [6]), (arr_5 [6])))) ? (((~(arr_6 [i_1 + 1] [i_1 - 1])))) : ((~(max(var_8, var_6))))));
            var_16 = ((3 / (arr_2 [12])));
            arr_7 [i_0] [i_0] = (((((max(var_4, (arr_2 [i_1])))) ? (arr_0 [i_0]) : (max((arr_2 [7]), 1399981675)))));
        }
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            var_17 = (max(var_17, (((((((arr_2 [i_2 + 2]) ? (arr_2 [i_2 - 1]) : (arr_2 [i_2 - 2])))) ? 15882 : (arr_2 [i_2 + 1]))))));
            /* LoopNest 3 */
            for (int i_3 = 3; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_18 = ((((87 + ((53 + (arr_12 [2] [i_3 + 3] [7] [13]))))) > ((((var_0 ? (arr_11 [i_2] [i_3 + 3] [i_5]) : (arr_12 [i_0 + 4] [13] [13] [i_4]))) << (((arr_2 [i_2 + 1]) - 822694183))))));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = var_8;
                            var_19 ^= ((15882 ? (max((((arr_10 [i_5] [i_2] [i_2] [i_2 + 3]) ? 2894985646 : (arr_15 [i_0 + 4] [i_0 + 4] [i_0 + 4] [i_3 - 2] [i_3] [i_4] [i_5]))), ((max(1, (arr_11 [i_4] [3] [i_0])))))) : ((((!(arr_11 [i_3 - 2] [i_2 - 1] [i_0 - 1])))))));
                        }
                    }
                }
            }
            var_20 = (min(var_20, (~var_7)));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 17;i_7 += 1)
                {
                    {
                        arr_24 [i_0] [i_0] = (~((~(arr_23 [i_2] [i_0] [i_7 - 1] [1]))));
                        arr_25 [i_0] [i_0] = ((((((arr_10 [i_0] [i_2 - 2] [i_0] [i_7]) ? var_5 : ((-(arr_23 [i_0] [i_0] [i_0] [i_0])))))) ? (((var_3 / ((var_6 ? (arr_23 [i_7] [i_0] [i_0] [i_0]) : var_2))))) : (((arr_18 [i_7 - 1] [i_6] [i_2 + 3]) ? (arr_18 [i_7 + 1] [i_2 - 1] [i_2 + 2]) : (arr_18 [i_7 - 1] [i_6] [i_2 + 2])))));
                        var_21 = (min(var_21, (((((-(arr_0 [i_2]))) ^ ((((-15880 - -15857) > (arr_18 [i_7] [i_7 + 1] [i_7 - 1])))))))));
                        var_22 = (((arr_22 [12] [i_6] [i_0]) ? (((var_9 ? 87 : (arr_2 [i_0])))) : ((((!(arr_10 [i_2 + 2] [i_2 + 3] [i_0] [i_2 + 1])))))));
                    }
                }
            }
        }
    }
    var_23 = var_5;
    #pragma endscop
}
