/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    var_15 = (var_13 % var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 ^= var_11;
                arr_6 [i_0] [i_1] [i_1] = ((min(32749, (((arr_5 [i_0] [13]) % var_9)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                var_17 ^= (((var_3 >= var_5) > (((arr_1 [i_2] [i_4]) ? 2147483647 : var_2))));
                                var_18 ^= (-5676370982946540387 ^ 1679688415);
                            }
                            for (int i_5 = 0; i_5 < 23;i_5 += 1)
                            {
                                var_19 = (max(var_19, ((min((arr_1 [i_2] [i_2]), (max((((arr_11 [i_1]) ? (arr_2 [i_2]) : (arr_11 [i_0]))), var_1)))))));
                                var_20 = (min(var_20, ((min((((!(arr_2 [i_2])))), ((var_6 ? (((-1530751304 ? var_4 : (arr_4 [i_2] [i_3] [i_2])))) : ((var_11 ? 10087694342629697328 : 18829)))))))));
                            }
                            for (int i_6 = 1; i_6 < 21;i_6 += 1)
                            {
                                var_21 = (arr_8 [i_6 + 1] [20] [20]);
                                var_22 = (((((var_12 + (arr_14 [i_2 + 1] [i_2 - 2])))) ? (max((((arr_8 [i_1] [i_3] [i_1]) ? (arr_9 [3] [i_1] [i_0]) : 27)), (arr_8 [10] [i_1] [i_1]))) : (arr_15 [i_0] [i_1] [i_1] [19] [i_0] [i_2] [19])));
                                arr_20 [i_0] [i_1] [7] [7] [16] = (((arr_19 [i_0]) / (((min((arr_18 [8] [i_1] [i_1] [i_1] [9] [7]), var_11))))));
                                var_23 = (min(var_23, var_4));
                            }
                            var_24 = (min(var_24, ((min((max(-28022, -19804)), (arr_2 [i_2]))))));
                            var_25 = var_0;

                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 23;i_7 += 1)
                            {
                                var_26 ^= ((((arr_22 [i_2]) ? 22 : var_7)));
                                var_27 = (max(var_27, ((((var_6 ? -18829 : (arr_18 [2] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                            }
                            for (int i_8 = 0; i_8 < 23;i_8 += 1)
                            {
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((min((arr_15 [i_8] [i_8] [i_3] [i_0] [i_1] [14] [i_0]), (arr_4 [i_2] [i_2 + 1] [i_2])))) < ((((((arr_22 [i_0]) == 21656))) << (18819 - 18811)))));
                                var_28 = (min(var_28, (arr_15 [i_0] [i_0] [16] [i_0] [7] [i_0] [i_0])));
                                var_29 = (arr_23 [i_1] [i_0] [i_3]);
                                var_30 = (((arr_3 [i_2 - 1] [i_8]) < ((max((min(var_2, (arr_5 [i_2 - 1] [i_0]))), 32767)))));
                            }
                            for (int i_9 = 1; i_9 < 22;i_9 += 1)
                            {
                                var_31 = ((max(0, (max(var_13, (arr_16 [i_0] [i_0] [15]))))));
                                var_32 -= -29836;
                                arr_30 [i_9 + 1] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = (max(((min((arr_22 [i_3]), -1173252305))), (max((arr_23 [i_0] [i_0] [i_9]), (arr_14 [i_0] [i_9])))));
                            }
                            /* vectorizable */
                            for (int i_10 = 1; i_10 < 20;i_10 += 1)
                            {
                                var_33 ^= (((((arr_7 [i_1]) ? (arr_13 [i_3] [i_1]) : 255)) >> (((arr_11 [i_0]) - 11233393556885189306))));
                                arr_34 [i_2] [i_1] [22] [i_0] [i_0] [i_0] = var_12;
                                var_34 = (var_1 || var_6);
                                var_35 += ((1099511627775 ? 875629815 : 10249));
                            }
                            var_36 -= (min(((max(-1773911973, 1))), 4294967295));
                        }
                    }
                }
                var_37 ^= (arr_26 [i_1] [i_0] [i_1] [i_1] [i_0]);
            }
        }
    }
    var_38 -= var_6;
    #pragma endscop
}
