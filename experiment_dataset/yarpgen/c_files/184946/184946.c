/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_10 = (arr_4 [i_0] [i_2]);
                    var_11 = (arr_3 [i_0] [i_0] [i_2]);
                    var_12 &= (max(var_3, (((((var_7 ? (arr_4 [i_0] [i_0]) : (arr_7 [i_2])))) ? ((var_6 ? var_5 : (arr_3 [i_0] [4] [i_0]))) : ((((arr_5 [i_2] [3] [10]) ? (arr_8 [i_2] [4] [i_2]) : (arr_2 [i_0]))))))));
                }
            }
        }
    }
    var_13 = (min(var_4, 220));

    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {
        var_14 = (min((max(((7490607881648007169 ? (arr_9 [i_3]) : var_8)), ((max((arr_10 [i_3] [i_3]), (arr_9 [13])))))), ((-((min(var_0, (arr_9 [i_3]))))))));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_15 = (((((var_0 ? var_0 : 7490607881648007169))) && (arr_11 [i_3 - 2] [i_3 + 1] [i_3 + 1])));
            var_16 = var_8;
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_17 = (min(var_17, (arr_14 [i_3] [8])));
                        arr_19 [i_6] [4] [i_3] [i_4] [1] = var_7;
                        arr_20 [16] [12] [i_4] &= (((((var_4 ? var_4 : (arr_18 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))) ? (arr_18 [17] [i_3 - 2] [i_3] [i_3] [i_3 - 2] [i_3]) : var_3));
                        arr_21 [6] [i_3] = var_3;
                    }
                }
            }
            var_18 = (var_7 ? var_1 : (arr_15 [i_3] [i_3] [i_4] [i_4]));
        }
        for (int i_7 = 2; i_7 < 19;i_7 += 1)
        {
            var_19 = ((!((max((min((arr_24 [i_3]), (arr_12 [i_3 + 1] [i_3] [i_3]))), (var_4 && var_3))))));
            var_20 = ((var_7 ? (max(var_6, var_9)) : (arr_22 [i_3] [i_7 - 2])));
            arr_25 [i_3] = (min(var_1, ((-(min(var_8, (arr_23 [i_3])))))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            var_21 = var_0;
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    {
                        var_22 = (max(var_22, (arr_31 [i_9] [i_10])));
                        var_23 = var_3;
                    }
                }
            }
            var_24 = (min(var_24, (arr_9 [i_3 - 1])));
        }
        var_25 = (min((min((arr_26 [i_3] [i_3 - 2]), ((var_5 ? var_6 : (arr_13 [i_3] [i_3] [i_3]))))), ((max(35, 2047)))));
        var_26 = (max(var_26, -var_8));
    }
    #pragma endscop
}
