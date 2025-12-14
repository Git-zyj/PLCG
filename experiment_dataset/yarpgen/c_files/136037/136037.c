/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!((max(var_0, ((var_8 ? var_11 : var_10)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_13 ^= (arr_1 [i_0]);

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_9 [15] [i_1] [i_0] = (((arr_0 [i_2]) ? (arr_6 [i_0] [i_0] [i_0] [i_2]) : (arr_8 [1] [i_2] [i_1])));
                    arr_10 [i_0] [i_1] [i_1] [i_1] = ((!((((arr_1 [i_0]) ? (((0 ? 1 : 2032))) : (((arr_0 [1]) ? (arr_8 [i_0] [i_2] [i_2]) : (arr_3 [i_0]))))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        var_14 = arr_1 [i_2];
                        arr_13 [i_0] = ((arr_4 [i_1] [i_1] [i_1]) ? (arr_6 [i_0] [i_0] [i_2] [i_3]) : (arr_8 [1] [i_1] [i_2]));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_19 [i_5] [i_4] [i_2] [i_0] [i_1] [i_0] |= ((arr_8 [i_0] [i_1] [i_4]) << (arr_12 [i_0] [i_0] [i_2] [i_4]));
                            arr_20 [i_0] [i_1] [i_2] [i_4] [i_5] = ((((min((arr_15 [i_0] [i_0] [i_0] [i_0]), (arr_15 [i_0] [i_0] [i_4] [i_4])))) / ((max((arr_3 [i_5]), (arr_3 [i_0]))))));
                            var_15 = (min(var_15, (arr_1 [i_4])));
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_0] &= ((-(arr_17 [i_0] [i_1] [i_2] [i_4] [15] [i_4] [i_1])));
                            var_16 = (min(var_16, ((min((min((arr_15 [i_0] [i_1] [i_2] [i_4]), (arr_15 [i_4] [i_4] [i_2] [i_4]))), (arr_2 [i_0]))))));
                            var_17 &= (arr_7 [i_0] [i_1] [i_2] [i_4]);
                            var_18 = (max(var_18, (((!((max(((min((arr_3 [i_6]), (arr_5 [i_6])))), ((-(arr_6 [i_0] [3] [3] [i_4])))))))))));
                            var_19 &= arr_16 [i_6] [i_4] [i_2] [i_1];
                        }
                        arr_24 [i_0] [8] [i_2] = arr_21 [i_4];
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        var_20 += (arr_14 [15] [i_1] [15] [i_7]);
                        var_21 &= (arr_26 [i_0] [i_2] [i_7]);
                        var_22 += (arr_1 [i_7]);
                    }
                    for (int i_8 = 1; i_8 < 13;i_8 += 1)
                    {
                        var_23 = (max(var_23, (arr_25 [i_8] [i_8] [i_2] [i_1] [i_0])));
                        var_24 = (max(var_24, ((min(((-(arr_12 [i_8 + 2] [i_2] [i_1] [i_0]))), ((min((arr_12 [i_0] [i_2] [i_1] [i_1]), (arr_12 [i_8] [i_2] [i_1] [i_0])))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_25 = (((((~(arr_3 [i_10 - 1])))) ? (arr_0 [i_9]) : ((min((arr_15 [i_10 - 1] [i_10] [i_10 - 1] [i_10 - 1]), (arr_15 [i_10 - 1] [i_10] [i_10 - 1] [i_10 - 1]))))));
                                var_26 = ((-(arr_21 [i_10 - 1])));
                                arr_37 [i_10] = (arr_35 [0] [i_9] [i_9] [i_10 - 1] [i_10 - 1]);
                            }
                        }
                    }
                    var_27 = (arr_21 [i_0]);
                }
            }
        }
    }
    var_28 = ((var_10 ? var_0 : ((((min(var_10, var_1))) - ((min(var_6, var_5)))))));
    #pragma endscop
}
