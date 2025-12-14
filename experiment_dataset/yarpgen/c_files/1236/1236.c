/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, 29566));
    var_20 = (max(var_20, var_14));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [4] |= (arr_7 [i_1]);
                    var_21 = (min(var_21, (((((arr_8 [i_2 - 1] [i_2] [i_2 - 1]) ? var_13 : (arr_8 [i_2 - 1] [i_2] [i_2 - 1])))))));
                }
            }
        }
        var_22 -= ((((2147483647 ? (arr_6 [6]) : (var_12 * var_3))) / ((62527 ? (-127 - 1) : (-127 - 1)))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 23;i_5 += 1)
                {
                    {
                        var_23 &= -var_7;
                        arr_17 [16] [18] &= (arr_12 [i_0] [i_5] [4]);
                        var_24 -= ((-(arr_14 [2] [i_4 - 1] [i_4 + 1] [i_4 - 1])));
                    }
                }
            }
        }
        var_25 -= ((((max((arr_4 [i_0] [i_0] [18]), var_7))) ? ((((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [12]) + (arr_15 [0] [i_0] [i_0] [i_0] [i_0] [0])))) : (min(var_11, 17204368406958622015))));
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        var_26 -= ((arr_0 [4]) > (-124 * -118));
        var_27 = (max(var_27, ((((((!(arr_11 [i_6] [0]))))) <= (~17204368406958622015)))));
    }
    #pragma endscop
}
