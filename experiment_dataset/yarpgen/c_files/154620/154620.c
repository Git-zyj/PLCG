/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((max(32640, (min(var_7, var_3)))))) / ((var_8 / (var_11 ^ 1206161944)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = (((((41562 ? 32640 : (arr_2 [i_1])))) ^ (arr_3 [i_0])));
                arr_4 [i_0] [i_0] [i_0] = (+(min(((min((arr_2 [i_0]), (arr_3 [i_0])))), ((-32639 ? 6074336538253415769 : -32640)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 15;i_4 += 1)
                            {
                                arr_12 [i_0] [i_1] [i_0] [i_1] [i_4] [i_2] [13] = (min(18446744073709551610, (((6074336538253415769 >> (6074336538253415769 - 6074336538253415751))))));
                                var_17 = (max(var_17, ((max((max((~-31589), 15620)), (min((((-32641 + 2147483647) >> (32640 - 32610))), (arr_8 [i_4] [9] [i_2] [i_0]))))))));
                                arr_13 [i_0] [i_2] [i_3] [i_3] = (max(68, 28255));
                                arr_14 [i_0] [i_1] [10] [i_2] [i_3] [i_4] [i_0] = var_13;
                            }
                            for (int i_5 = 0; i_5 < 18;i_5 += 1)
                            {
                                var_18 = (min(var_18, var_1));
                                var_19 = (min(var_19, (((((max((var_3 ^ var_0), (arr_3 [8])))) ? (arr_7 [i_1] [2] [i_5]) : ((min(var_3, 32640))))))));
                                var_20 = (min(var_20, (((var_9 ? (((((((arr_5 [i_5] [11] [11]) & var_10))) ? ((min(227, (arr_16 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0] [i_5])))) : -6074336538253415763))) : var_9)))));
                            }
                            var_21 = (((((227 ? 8598093638656298428 : 3690842250))) ? (max((arr_11 [i_3 - 1]), 255)) : ((((!(arr_15 [11] [i_3 + 2] [i_3 + 1] [i_3 + 1] [i_3])))))));
                        }
                    }
                }
                var_22 = (max(604125046, (((((min(-869885795, 3690842249))) && (var_11 && 10475328240599726957))))));
                var_23 = (max(var_23, (((((((((121 + (arr_17 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0] [i_1])))) ? (84 == 11) : (arr_11 [i_0])))) ? ((-var_1 >> (var_9 - 308889217))) : (arr_17 [7] [6] [6] [i_1] [i_1] [i_0] [i_0]))))));
            }
        }
    }
    var_24 = (min(32640, -var_4));
    var_25 = var_1;
    var_26 = var_7;
    #pragma endscop
}
