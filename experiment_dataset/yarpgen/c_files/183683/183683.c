/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 *= var_2;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] = ((((((((3662 ? 2147483642 : 1))) ? (arr_5 [i_4] [i_3 - 1] [11] [i_1]) : (arr_8 [i_4] [i_0])))) ? ((max((max(-32459, (arr_2 [i_1]))), (arr_3 [1])))) : (((-2147483647 - 1) ? 30565 : ((var_5 ? var_2 : var_7))))));
                                arr_14 [i_0] [i_1] [i_2] = ((((max(((~(arr_7 [i_0] [i_0] [i_2] [i_4]))), (((arr_2 [12]) - var_1))))) ? ((var_9 ? var_9 : 30576)) : ((((min(var_10, var_0))) ? ((4194240 ? var_6 : -29589)) : ((var_5 ? (arr_10 [i_4] [1] [i_4] [i_3 + 1] [1] [1] [i_1]) : var_7))))));
                                arr_15 [8] [i_1] [i_2] [20] [i_0] = arr_4 [19] [1] [i_2];
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (min(var_15, -29589));

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_16 = (max(var_16, ((max((!29581), (((((-(arr_17 [i_5])))) ? ((var_8 ? (arr_6 [1] [1]) : var_4)) : (arr_7 [i_5] [i_5] [i_5] [i_5]))))))));

        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            var_17 = (min((arr_6 [i_5] [i_6]), var_9));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_18 = (1 ? ((min(1, (arr_26 [i_8] [1] [i_6] [i_5])))) : (((((var_9 ? var_7 : var_1)) != ((0 ? (arr_21 [i_5]) : (arr_22 [i_5] [i_5] [i_7] [i_5])))))));
                        arr_27 [i_7] [i_7] [i_5] [i_8] = (((((var_3 ? ((-(arr_16 [i_6]))) : (((arr_24 [i_8] [i_7] [i_7] [9] [i_5]) ? 1 : (arr_24 [i_5] [i_6] [14] [i_7] [i_8])))))) ? ((1 ? ((((arr_16 [i_5]) <= 11181))) : (arr_3 [i_6]))) : ((783938536 ? (arr_16 [i_6]) : var_11))));
                        arr_28 [i_8] [i_7] [i_5] [1] [i_5] = min(((min(1905124566, 4194303))), ((var_12 != (arr_11 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [14]))));
                        arr_29 [1] [i_5] [i_5] [10] = (arr_17 [i_5]);
                    }
                }
            }
            var_19 = var_0;
        }
        var_20 = (arr_3 [i_5]);
        var_21 = (min(var_21, ((((arr_7 [i_5] [i_5] [i_5] [i_5]) && (arr_17 [i_5]))))));
    }
    #pragma endscop
}
