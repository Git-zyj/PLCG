/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_1 ^ var_17);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 18;i_4 += 1)
                            {
                                var_21 = ((-(arr_8 [i_2] [i_1 + 1] [i_2] [i_1 + 1])));
                                var_22 = (((((var_9 ? var_11 : var_17))) ? (arr_11 [i_1 - 1] [i_1 - 1] [i_2] [i_3] [i_3]) : ((var_18 - (arr_8 [i_2] [14] [i_3] [14])))));
                                var_23 = ((-(var_1 || var_15)));
                                arr_12 [i_3] [i_1] [i_2] [i_2] [i_3] = (((arr_11 [i_0] [i_1 + 3] [i_2] [i_0] [i_2]) ? (arr_11 [i_0] [i_1 + 1] [i_1 + 1] [i_3] [i_4]) : (arr_11 [i_0] [i_0] [i_2] [i_3] [i_4])));
                            }
                            for (int i_5 = 4; i_5 < 17;i_5 += 1)
                            {
                                var_24 = ((var_5 ? (~var_11) : ((var_2 ? (((var_1 ? (arr_3 [i_0]) : (arr_6 [i_2] [i_2] [i_5])))) : var_17))));
                                arr_17 [7] [7] [i_2] = ((((var_2 | (arr_11 [i_1 + 1] [i_1 - 1] [i_2] [i_3] [i_5 - 1]))) & ((~(arr_11 [i_1 + 2] [i_1 + 1] [i_1 + 1] [1] [i_5 - 1])))));
                            }
                            var_25 = (max(var_25, (((((!var_5) ? (((var_18 ? var_18 : var_18))) : ((var_13 ? (arr_16 [i_0] [i_1] [i_3] [i_2] [i_3] [i_2]) : var_6))))))));
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    var_26 = (max((arr_20 [i_0] [i_1] [i_1]), (arr_15 [i_0] [i_0] [16] [i_1] [i_6])));
                    arr_21 [i_0] [i_1] = (((((~((var_14 ? var_0 : (arr_19 [i_0] [i_1 + 3])))))) ? (arr_11 [i_1 + 2] [i_1 + 1] [i_1] [i_1 - 1] [i_1 + 2]) : ((~(arr_20 [i_1 + 1] [i_1 + 3] [i_1])))));
                    var_27 = (((((arr_19 [i_6] [i_1 + 2]) << (var_6 - 10220663520556781718))) << ((((var_6 ? (arr_7 [i_0] [i_1] [i_6]) : (arr_19 [i_0] [i_6]))) - 12410491082986900353))));
                }
            }
        }
    }
    var_28 = var_5;
    #pragma endscop
}
