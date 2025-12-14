/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, ((((((arr_4 [i_1] [i_3]) || (((~(arr_10 [i_2 - 1] [i_2 - 1] [i_2])))))) ? ((~(arr_3 [i_2 - 1] [i_2 - 1] [i_2 - 1]))) : (((1 ? var_18 : (arr_1 [i_2 - 1])))))))));
                                var_20 = (((113 <= var_12) ? (((max((max(var_16, (arr_10 [i_0] [i_3] [i_4]))), (arr_0 [i_1] [i_1]))))) : (((arr_9 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1]) ? (((min((arr_2 [i_0] [i_0] [i_0]), var_8)))) : (~var_9)))));
                                var_21 = (((min((arr_8 [i_2] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2]), (arr_8 [i_2] [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1] [i_2])))) ? (((((arr_10 [i_0] [i_0] [i_0]) ? var_1 : 340019756966613504)) * (arr_1 [i_3]))) : (arr_7 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4]));
                            }
                        }
                    }
                }
                arr_11 [i_0] = ((((max((max(131, (arr_9 [i_0] [i_0] [i_0] [i_1] [i_1]))), (arr_10 [i_1] [i_1] [i_0])))) && ((max(((var_0 ? var_0 : 18446744073709551612)), (((1 ? 2266044544 : 31395))))))));
            }
        }
    }
    var_22 = var_16;
    var_23 = (min(var_23, ((!((var_9 || ((max(var_15, 142)))))))));
    var_24 = (min(var_24, ((min((((((var_2 ? var_1 : var_10)) * 0))), (min(var_0, ((1 ? var_12 : var_2)))))))));
    var_25 = var_16;
    #pragma endscop
}
