/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_2;
    var_15 += (((-((max(var_10, var_12))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_16 |= ((max((arr_7 [i_2] [4] [i_2 - 2]), (arr_7 [8] [6] [i_2 - 2]))) ^ (max(((8995766786530700513 ? var_1 : (arr_9 [6] [i_1] [6] [i_1]))), ((var_1 ? 1545780681 : var_12)))));
                            var_17 = (max(var_17, ((((((!(!var_6)))) - (((max((arr_11 [i_1] [i_2 - 1] [8]), var_8)) - (arr_9 [i_0] [i_0] [i_0] [i_0]))))))));
                            var_18 += (max((arr_11 [i_1] [8] [i_1]), (((arr_0 [0] [i_3]) ? (arr_4 [6] [3] [i_0]) : 19262))));
                            var_19 |= ((~(var_4 / 4294967292)));
                            arr_12 [i_0] [i_1] [i_2] [i_3] |= (max(((((max((arr_1 [9] [i_3]), -6319262373714207841))) ? (((!(-2147483647 - 1)))) : (arr_6 [1] [5] [i_1]))), ((((arr_0 [i_2 - 1] [i_2 - 1]) != (arr_6 [2] [i_1] [5]))))));
                        }
                    }
                }
                var_20 += ((((((arr_4 [4] [i_1] [4]) > (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [2])))) << (((max((max(17, var_9)), (var_7 | var_9))) - 4294967215))));
                var_21 = (((max((arr_9 [i_1] [i_0] [i_0] [i_0]), (arr_11 [4] [4] [i_1]))) + ((~(arr_6 [i_0] [i_1] [i_1])))));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    var_22 = (~4294967269);
                    arr_15 [6] [3] [i_4] [6] = ((~((var_13 ? var_3 : (arr_5 [i_0] [i_1] [i_1])))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    arr_20 [6] [i_1] [i_0] = (!var_6);
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 8;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_23 = (max(var_23, (((((arr_11 [0] [i_1] [i_1]) ? (arr_4 [i_7] [9] [i_0]) : var_12))))));
                                var_24 += var_2;
                            }
                        }
                    }
                    arr_25 [5] [0] = ((~var_2) ? (((-(arr_2 [i_0])))) : (((arr_4 [i_0] [i_1] [i_5]) ? var_1 : 4294967292)));
                }
                for (int i_8 = 4; i_8 < 9;i_8 += 1)
                {
                    arr_30 [i_1] |= ((-(arr_28 [4] [i_1] [4])));
                    var_25 |= (arr_9 [i_0] [3] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 9;i_10 += 1)
                        {
                            {
                                var_26 = (max(var_26, ((((((min(3315889560173585743, (arr_21 [7] [i_0] [i_1] [i_0]))))) || ((((max(var_1, var_2)) ^ (arr_11 [i_9] [i_9] [i_8])))))))));
                                var_27 = (max(var_27, (((var_4 < (arr_27 [i_9] [1] [0] [1]))))));
                            }
                        }
                    }
                }
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    var_28 = (max(var_28, (!var_5)));
                    var_29 = (max(var_29, (min((~var_6), (max(17, 4294967279))))));
                }
            }
        }
    }
    #pragma endscop
}
