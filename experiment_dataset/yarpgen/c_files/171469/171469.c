/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((var_1 ? var_3 : var_6)))));
    var_13 = var_4;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (max((!392573171244485527), (arr_2 [i_0] [i_0])));
            arr_6 [i_0] = (max((arr_1 [i_0] [i_0]), (((((arr_0 [i_0] [i_1]) ? (arr_1 [1] [1]) : (arr_2 [i_0] [i_0])))))));
            var_14 += ((((max((max((arr_0 [8] [i_1]), (arr_4 [i_0] [7] [3]))), (arr_2 [4] [4])))) ? (((arr_1 [2] [2]) ? 1 : (min(var_9, (arr_0 [2] [i_1]))))) : (arr_1 [i_0] [i_1])));
        }
        for (int i_2 = 1; i_2 < 6;i_2 += 1)
        {
            arr_9 [i_0] = ((((((arr_2 [i_0] [i_0]) ? ((250 ? 71 : -775880351)) : ((~(arr_1 [i_0] [i_2])))))) ? (arr_0 [i_0] [i_2]) : (arr_2 [i_0] [i_0])));
            arr_10 [i_0] = (arr_3 [i_0] [i_0] [i_2]);
            var_15 = (arr_1 [i_0] [i_2]);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 7;i_4 += 1)
                {
                    {
                        var_16 = (min(var_16, var_9));
                        var_17 = ((!((max((arr_3 [i_0] [i_2 + 3] [i_2]), 1)))));
                    }
                }
            }
        }
        arr_15 [i_0] [i_0] = (((((((arr_1 [i_0] [0]) ? (arr_12 [i_0] [i_0]) : var_0))) ? 8227968577559855519 : (arr_2 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        arr_25 [i_0] [i_6] [i_0] [i_0] [i_0] [6] = ((~(min((min((arr_3 [i_0] [1] [i_0]), (arr_4 [i_0] [1] [i_7]))), (arr_1 [i_0] [i_6])))));
                        var_18 = ((~(arr_17 [i_0])));
                    }
                    var_19 = (max(var_19, ((min(((min((!var_6), (min((arr_12 [i_5] [2]), (arr_7 [i_0] [i_6])))))), var_8)))));
                }
            }
        }
    }
    var_20 = (min(var_0, var_0));
    #pragma endscop
}
