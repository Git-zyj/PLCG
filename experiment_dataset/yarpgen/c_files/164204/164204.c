/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 = var_9;
        arr_3 [20] [i_0] &= (min((((!((max((arr_2 [i_0] [i_0]), 1206672628340066387)))))), (((((~(arr_0 [i_0])))) ? (arr_1 [18]) : (min(0, var_15))))));
    }
    var_20 = (max(var_20, var_3));
    var_21 &= (min(65, 0));

    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_22 *= ((-1206672628340066390 ? 19297 : 177));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        var_23 = (((arr_5 [i_1]) ? ((max((arr_5 [i_1]), -384))) : ((((arr_5 [i_1]) || (arr_5 [i_4]))))));

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            var_24 = ((-(arr_14 [i_5 + 4] [i_5 + 3] [i_5] [i_5 + 3] [i_5])));
                            var_25 = (~(arr_11 [i_1] [i_5 - 1]));
                        }

                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_26 = (max((((arr_8 [i_1] [i_1]) ? 32556 : (arr_4 [i_3]))), ((min(var_3, (arr_4 [i_1]))))));
                            var_27 = (min(1166038080, (((min(1, var_3)) ? ((var_14 ? -1206672628340066388 : 1)) : 1))));
                            var_28 = ((max(1764858881, (arr_9 [i_1] [i_1] [i_1] [i_1]))));
                            var_29 = ((+(min((arr_9 [i_6] [i_6] [i_3] [i_4]), ((~(arr_14 [i_1] [i_2] [i_6] [4] [i_6])))))));
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                        {
                            var_30 *= ((((max(0, (arr_7 [i_1] [i_4] [10])))) ? 1 : -var_10));
                            arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] = var_4;
                        }
                        for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                        {
                            var_31 = (min(var_31, (~var_8)));
                            var_32 = (max((max((arr_7 [i_1] [i_1] [i_1]), (arr_16 [i_1] [i_1] [i_1]))), (((var_11 > (arr_8 [i_4] [i_2]))))));
                        }
                        var_33 = 4294967295;
                    }
                }
            }
        }
    }
    #pragma endscop
}
