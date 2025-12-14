/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_9));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_1] [i_1] = (((((((~(arr_5 [i_0 + 2] [i_1]))) ^ var_3))) & (((max(30, (arr_6 [i_0] [i_1] [i_2] [i_1]))) ^ var_1))));
                        var_13 = (arr_6 [i_2 + 3] [i_3 - 2] [i_2 + 1] [i_1]);
                        var_14 = (((((arr_7 [i_0] [i_1] [i_2] [i_2] [i_3]) - (arr_1 [i_3]))) != var_8));
                        arr_11 [i_1] [i_2] [i_2] [i_1] [i_1] = (((((max((arr_7 [i_0] [i_0] [i_0] [i_0] [10]), var_5))) ? (arr_9 [i_1]) : (((arr_2 [i_0]) * (arr_7 [i_3] [i_1] [8] [i_3] [i_0 - 1]))))));
                        var_15 = ((((~(arr_5 [i_3 - 4] [i_2 + 2]))) - (arr_7 [i_2] [3] [8] [i_2] [13])));
                    }
                }
            }
        }

        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            arr_16 [i_0] [i_4] = (min((((!(arr_12 [i_4])))), ((143477145 + (arr_14 [i_0 + 2])))));
            var_16 += (((min((((arr_12 [i_0]) ? (arr_5 [i_0] [i_0]) : (arr_3 [i_0] [i_4]))), (arr_8 [i_0]))) + (((((arr_0 [i_0]) + var_4))))));
            arr_17 [i_0] [i_4] [i_0 - 1] = (max((!18446744073709551606), (((arr_14 [i_0]) == -var_9))));
        }
        var_17 = (max(var_17, ((((arr_5 [i_0] [i_0 - 2]) * (min(23708, (min(0, (arr_6 [i_0] [i_0] [i_0] [i_0]))))))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_20 [i_5] [i_5] = (arr_19 [i_5] [i_5]);
        arr_21 [i_5] [i_5] = (arr_19 [i_5] [i_5]);
        var_18 = (((!125) > (arr_18 [i_5])));
        var_19 = ((arr_18 [i_5]) % (arr_18 [i_5]));
    }
    #pragma endscop
}
