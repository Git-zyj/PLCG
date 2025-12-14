/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    var_11 -= var_2;
    var_12 = (min(var_12, var_8));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (-((((!(arr_0 [i_0]))))));
        var_13 = (arr_0 [i_0 + 1]);
    }

    /* vectorizable */
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        arr_6 [3] = ((-(arr_0 [13])));

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_14 = (arr_0 [i_2]);
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    {

                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            arr_17 [i_1] [i_2] [i_3] [i_2] [i_2] [11] [i_2] = ((!(((-(arr_7 [i_4]))))));
                            var_15 = (min(var_15, (arr_9 [i_1] [0] [0])));
                            var_16 = (arr_7 [i_1]);
                            var_17 ^= ((~(arr_10 [i_5])));
                        }
                        arr_18 [i_1] [1] [i_1] [i_3] = (arr_4 [i_1] [i_1]);
                    }
                }
            }
            var_18 = ((!(arr_16 [i_1] [12] [i_1] [i_1] [i_2] [i_2])));
        }
        var_19 = ((~((~(arr_13 [i_1] [i_1 + 3] [1] [0])))));
        var_20 = (min(var_20, (((-(((!(arr_4 [i_1] [i_1])))))))));
        var_21 ^= (((-(arr_1 [i_1]))));
    }
    #pragma endscop
}
