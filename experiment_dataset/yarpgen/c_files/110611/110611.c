/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    var_16 = (min(var_16, ((((((-((max(var_14, 1)))))) ? (max(((var_3 ? 3 : 4294443008)), (max(var_5, 1559770805)))) : var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, (((((arr_5 [i_0]) ? (((-(arr_1 [i_2])))) : (((arr_0 [i_2]) ? 4294443008 : 1)))) | ((var_3 & ((((arr_1 [i_2]) & 1)))))))));
                    var_18 |= ((((2735196484 && 4294967280) ? (arr_7 [i_1] [i_2]) : ((1559770801 ? (arr_0 [i_0]) : 2735196493)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = min(5, ((((arr_7 [i_0] [i_4]) ? (arr_9 [i_1] [1] [1] [15]) : var_8))));
                                var_20 = ((((((var_8 && 1559770811) ? 0 : (((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [1]) + (arr_1 [i_4])))))) ? (arr_8 [i_1] [i_2] [i_3 - 1] [i_4] [i_4] [i_1]) : (((2735196495 || 0) ? 4294967295 : ((-(arr_7 [i_2] [i_4])))))));
                                var_21 = (min(var_21, ((((max(var_6, (arr_8 [1] [i_1] [i_2] [i_3] [11] [i_4])))) ? ((~((2735196492 * (arr_9 [i_0] [i_2] [i_3] [i_2]))))) : (((((((arr_10 [i_2]) ? (arr_7 [8] [13]) : (arr_9 [i_0] [i_1] [i_3] [i_4]))) != (((((arr_0 [i_0]) && (arr_4 [11] [i_2])))))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (min(((((min(2735196484, var_7)) != var_0))), (((((1 ? 1 : var_9))) ? var_10 : (var_0 || var_9)))));
    var_23 = (min(var_23, (((((((4294443016 ? var_10 : var_7))) ? (var_14 < var_13) : -var_12))))));
    #pragma endscop
}
