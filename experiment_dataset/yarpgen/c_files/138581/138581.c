/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_10 -= (min(-51833840, -189867292));
        var_11 = (arr_0 [i_0]);
        arr_2 [i_0] = var_7;
        var_12 ^= (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_13 = (max((max((arr_4 [i_1]), (max(189867292, (arr_3 [i_1]))))), (min((arr_3 [i_1]), (arr_3 [i_1])))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_16 [i_2] [i_1] [i_4] [i_5] = var_8;
                            var_14 = var_4;
                            arr_17 [i_1] [i_1] [i_3] [i_4] [i_4] [i_1] [i_5] = ((((!(arr_6 [i_4 + 1]))) ? (arr_6 [i_4 - 1]) : (arr_6 [i_4 - 1])));
                            var_15 = (max(53827755, (((arr_11 [i_1] [i_1] [i_1] [i_4]) ? (arr_15 [i_1] [i_1] [i_1] [i_4] [i_2] [i_3] [i_4 - 1]) : var_8))));
                        }
                    }
                }
            }
            var_16 = ((92668925 || ((min((max(-684935885, -5631321702698857204)), -10)))));
        }
        arr_18 [i_1] = ((var_8 != (((1575397442 ? (arr_8 [i_1] [i_1] [i_1]) : 1)))));
    }
    var_17 -= ((((((var_3 ? var_7 : var_2))))) * var_8);
    #pragma endscop
}
