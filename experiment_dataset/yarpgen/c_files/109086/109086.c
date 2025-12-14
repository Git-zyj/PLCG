/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] = 3004825942;
        var_20 = (max(((max(1, var_5))), (min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))));

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_1 + 1] [i_1] [i_1] = (((arr_0 [i_0 + 1]) - (arr_0 [i_0])));
            arr_6 [i_1] [i_1] = ((((max((arr_0 [i_0]), (arr_0 [i_1 - 1])))) ? (arr_1 [9] [12]) : var_19));
            var_21 &= var_9;
        }
        var_22 = (min(var_22, ((min((((arr_0 [i_0 + 1]) + var_5)), (arr_3 [i_0 + 1]))))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_9 [i_2] = (max((((((1 + (arr_8 [i_2] [1])))) ? 1 : ((1 ? 0 : 1)))), (arr_8 [i_2] [1])));
        var_23 = (max(var_23, 1));
    }
    var_24 = max(var_16, var_5);
    var_25 = var_17;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    arr_18 [i_4] [i_4] [18] = 1;
                    arr_19 [i_4] = (max((((-((1 ? 18110 : (arr_16 [20] [1] [i_5])))))), (arr_10 [i_5])));
                    var_26 = var_0;
                    arr_20 [18] [i_4] [i_4] [0] = (min(((~(arr_17 [i_4] [i_4]))), ((max((arr_17 [i_4] [i_5]), (arr_14 [i_3] [i_4] [i_4]))))));
                }
            }
        }
    }
    var_27 = var_10;
    #pragma endscop
}
