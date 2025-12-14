/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_10 ? var_5 : (var_9 ^ var_5)))) ? -var_3 : ((((((var_0 ? var_3 : 0)) < (var_1 * var_1)))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_12 *= 0;
                        arr_10 [i_0] [i_2] [1] [i_0] [i_0 - 1] = var_9;
                        arr_11 [i_0 + 1] [i_1] [i_2] [i_2] [i_3] = (((arr_4 [i_2 - 1]) ? (arr_1 [i_3]) : (arr_6 [i_1] [i_3])));
                        var_13 = (min(var_13, var_9));
                        var_14 = (max(var_14, ((!((((arr_1 [i_1]) ? (arr_8 [i_0] [i_1] [i_3]) : (arr_2 [i_3]))))))));
                    }
                }
            }
        }
        var_15 = ((arr_1 [i_0]) | ((((arr_1 [i_0]) > (arr_1 [i_0])))));
        arr_12 [i_0 - 1] = (0 ? (!var_9) : (((var_5 && (arr_4 [i_0])))));
        var_16 = ((!(arr_6 [i_0] [i_0 - 1])));
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        arr_16 [6] = (((arr_14 [i_4 + 3] [i_4]) * ((((!((((arr_9 [14] [14] [14] [i_4] [1] [i_4]) * (arr_15 [i_4]))))))))));
        arr_17 [0] [i_4] = (0 & 0);
        var_17 = (min(((((!(arr_15 [i_4 + 1]))))), (((!(arr_15 [i_4]))))));
        var_18 = arr_7 [12] [1] [10] [i_4 + 3];
        var_19 = (((arr_0 [i_4]) || ((!(var_5 == var_10)))));
    }
    var_20 = var_6;
    var_21 = ((-(((((-1 ? 0 : (-127 - 1)))) ^ var_9))));
    #pragma endscop
}
