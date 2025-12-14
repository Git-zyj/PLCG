/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_10 += (arr_2 [i_0 + 1] [i_0 + 1]);
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 8;i_3 += 1)
                {
                    {
                        arr_15 [i_0 - 1] [10] [7] [i_3 + 3] [i_3 - 1] = 31;
                        arr_16 [i_0] [i_0] [i_0] [i_1] = max((((((((!(arr_11 [i_2]))))) <= (arr_7 [i_0] [i_1 - 1] [i_1 - 1])))), ((+(((arr_11 [9]) / (arr_10 [i_1]))))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_11 = var_9;
                            var_12 = (arr_8 [6] [i_1]);
                            var_13 = 1;
                        }
                    }
                }
            }
        }
        arr_19 [i_0] = (arr_8 [2] [i_0]);
    }
    var_14 = (min(var_14, var_4));
    var_15 = (((1 < 137438953471) ^ (((!((min(137438953471, 17784))))))));
    var_16 = (min(var_16, var_4));
    #pragma endscop
}
