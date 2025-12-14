/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = var_6;

    for (int i_0 = 1; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_12 = (((~(min((arr_1 [i_0]), 125)))) == (((((~(arr_1 [i_0])))) ? (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : ((~(arr_1 [i_0]))))));
        arr_2 [i_0 - 1] &= (max((min((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_7)), (arr_0 [i_0 + 1]))), ((((arr_0 [i_0]) <= (max((arr_0 [i_0 + 1]), var_7)))))));
        var_13 = (min(var_13, -18985));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_14 = ((!((max(((((arr_3 [i_3] [i_1] [i_0]) < (arr_5 [i_2])))), ((19312 / (arr_7 [i_0] [7]))))))));
                        var_15 = (((arr_5 [i_0 - 1]) ? (((arr_8 [i_0 + 1]) ? ((max((arr_8 [i_0]), (arr_8 [i_1])))) : (arr_7 [i_0 - 1] [i_0 + 1]))) : 246));
                        var_16 = (min((((arr_8 [i_0]) ? 131 : (max((arr_1 [i_0]), (arr_4 [i_3]))))), ((((arr_3 [i_0 + 1] [i_1] [i_0 + 1]) && (arr_6 [i_1] [i_0 - 1] [i_1]))))));
                    }
                }
            }
        }
        var_17 = ((-(arr_6 [8] [i_0 - 1] [8])));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 19;i_4 += 1) /* same iter space */
    {
        var_18 = (arr_11 [15]);
        var_19 = (((107 ^ 11959) ? ((1 ? (arr_11 [6]) : (arr_5 [i_4]))) : (((-(arr_11 [i_4]))))));
        arr_12 [i_4] [i_4] = arr_9 [i_4] [i_4 - 1] [i_4 - 1] [9] [i_4 + 1] [i_4];
    }
    var_20 = (max(var_1, ((var_4 ? ((max(107, 125))) : var_1))));
    #pragma endscop
}
