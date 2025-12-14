/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += 70931694131085312;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 -= ((var_1 ? (((((min(-49062540, 121))) >= (arr_0 [i_0] [i_0])))) : ((237 ? -49062540 : -49062551))));
        arr_2 [i_0] = ((+(((!-49062531) - var_3))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 = 49062540;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_2] = arr_12 [i_0] [17] [i_2] [i_3] [i_4];
                                var_16 = ((125 ? 5802724699375894380 : (arr_12 [12] [i_1] [i_2] [i_2] [i_4])));
                                arr_14 [i_4] [i_2] [i_3] [i_2 + 1] [i_2] [i_0] = 2;
                            }
                        }
                    }
                }
            }
        }
        arr_15 [i_0] [i_0] = (((((((min(253, -49)))) <= (arr_11 [16] [i_0] [i_0]))) ? (((arr_5 [i_0] [i_0]) ? (min(28025, var_10)) : (((min(235, var_4)))))) : ((-6674 ? var_10 : ((~(arr_11 [i_0] [10] [i_0])))))));
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        arr_20 [i_5] = (arr_11 [i_5] [i_5] [i_5]);
        var_17 = ((59575 ? (((var_10 == var_9) ? 9829260361583023920 : ((min(9223372036854775807, 768))))) : (arr_18 [i_5])));
        var_18 = (min(var_18, ((((min(65528, 0)))))));
    }
    var_19 = (min((var_4 != var_11), 63));
    #pragma endscop
}
