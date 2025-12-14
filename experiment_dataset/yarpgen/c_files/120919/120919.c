/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((~-357576681) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        var_18 = ((((((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))) - (arr_0 [i_0]))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_0] [8] = (((arr_11 [i_0]) & (arr_4 [4] [i_1])));
                        var_19 = (arr_12 [i_3] [i_2] [1] [i_0]);

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_20 ^= (((arr_0 [i_4]) & (arr_0 [i_0])));
                            var_21 = (min(var_21, ((((((arr_3 [i_1]) && (arr_0 [i_2]))) ? (((((arr_16 [0] [i_0] [i_1] [i_0]) + 2147483647)) << (((arr_3 [i_3]) - 72)))) : (arr_15 [i_0] [8] [i_0] [i_0] [6]))))));
                            arr_17 [i_2] [i_4] [3] [i_3] [i_2] [i_2] [i_4] = ((-(arr_9 [i_0] [i_0] [i_1] [i_0] [3] [i_4])));
                            arr_18 [7] [i_1] [i_2] = (((arr_11 [i_0]) ^ (arr_11 [i_3])));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_21 [i_2] = ((((((arr_8 [i_2]) - (arr_3 [i_2])))) ? (arr_19 [i_0] [i_5]) : ((((!(arr_20 [i_0] [4] [4] [i_0] [1])))))));
                            arr_22 [i_0] [1] [7] [i_3] [i_5] = ((arr_14 [i_0] [i_1] [i_2] [i_3] [9]) ? (arr_20 [i_0] [i_1] [i_2] [i_3] [i_5]) : (arr_20 [i_5] [i_3] [i_2] [i_1] [i_0]));
                        }
                        arr_23 [i_0] [1] [5] [i_2] [8] = (((~(arr_6 [i_2] [6]))));
                        var_22 = (min(var_22, (((((((arr_1 [i_0] [i_3]) / ((-(arr_16 [2] [2] [i_1] [i_1])))))) ? (arr_16 [i_3] [i_1] [i_2] [5]) : (arr_9 [i_0] [i_1] [8] [i_1] [i_2] [8]))))));
                    }
                }
            }
        }
        arr_24 [1] [i_0] = (((((((arr_12 [i_0] [i_0] [1] [2]) ? (arr_8 [i_0]) : (arr_5 [i_0]))) > (((((arr_5 [i_0]) >= (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))))))) << ((((0 ? 0 : 188)) - 160)));
    }
    var_23 = ((((~(var_6 | var_14))) * (((-(!var_2))))));
    var_24 = ((((var_3 ? ((-32759 ? 41370 : -1152299923)) : var_9)) <= var_8));
    var_25 = (((((((var_4 / var_6) > ((var_6 ? var_1 : var_5)))))) % ((5879663894985856344 ? 1314 : 133002542096903797))));
    #pragma endscop
}
