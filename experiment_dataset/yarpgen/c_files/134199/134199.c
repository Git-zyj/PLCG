/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            var_11 = (max(var_11, ((!((((arr_5 [i_1] [i_2] [i_3] [i_3]) ? 1 : (arr_3 [i_0] [i_0] [i_4 - 1]))))))));
                            arr_12 [i_4] = 123;
                            arr_13 [1] [1] [1] [i_3] = ((123 ? ((1 ? 126 : 29722)) : (arr_11 [i_0] [i_1] [i_2] [3] [1] [i_2] [i_2])));
                            var_12 = (max(var_12, (((-(arr_6 [i_4 - 2]))))));
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4 + 1] = ((!(arr_9 [i_4] [i_4] [i_4 - 1] [i_4 - 2] [i_4 - 2])));
                        }
                        var_13 = (max(var_13, (~119)));
                        var_14 = arr_11 [i_0] [i_1] [i_3] [i_0] [i_3] [i_2] [i_1];
                        var_15 += (((((-(((!(arr_0 [i_0] [i_1]))))))) ? (((-((min((arr_11 [i_0] [i_0] [i_0] [5] [5] [i_0] [i_0]), 59)))))) : (((arr_8 [i_3] [i_2] [i_1] [i_0]) ? ((-(arr_7 [i_3] [i_0] [i_1] [i_0] [i_0]))) : (((~(arr_4 [i_0] [i_1] [i_2]))))))));
                    }
                }
            }
        }
        var_16 |= ((((min((arr_5 [i_0] [i_0] [i_0] [i_0]), (arr_6 [i_0])))) ? 11427 : ((((min(35802, 59))) ? 1 : 1))));
    }
    /* vectorizable */
    for (int i_5 = 4; i_5 < 17;i_5 += 1)
    {

        for (int i_6 = 3; i_6 < 14;i_6 += 1)
        {
            var_17 = ((-121 ? 1 : (arr_17 [i_5 - 4] [i_6 - 3])));
            var_18 += 25178;
            arr_19 [i_5] = ((-(arr_17 [i_5 + 1] [i_6 + 4])));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_22 [i_5] = (arr_16 [i_5]);
            var_19 = (((arr_18 [i_5 - 2] [i_5 - 1] [i_7]) ? 8192 : (arr_18 [i_5 - 3] [i_7] [i_7])));
            var_20 += (((arr_17 [i_5 - 4] [i_7]) ? (arr_17 [i_5 + 1] [i_7]) : (arr_17 [8] [i_7])));
            var_21 = (((arr_17 [i_5 - 2] [i_5 - 1]) ? (arr_17 [i_5 - 1] [i_5 - 4]) : 7));
        }
        var_22 = -0;
    }
    var_23 = ((-(((((var_1 ? 1 : 25178))) ? var_9 : var_9))));
    #pragma endscop
}
