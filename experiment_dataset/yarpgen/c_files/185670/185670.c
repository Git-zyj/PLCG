/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_20 = (max(var_16, var_2));
                                var_21 = (min(var_21, var_3));
                                arr_11 [i_0] [i_0] [i_2] [i_0] [i_2] = ((((9223372036854775807 ? (-11099 | var_8) : (-9223372036854775807 - 1))) | (arr_6 [i_0])));
                                var_22 = (max((((385632214739849294 ? (arr_8 [i_0]) : var_8))), (arr_5 [i_0] [i_2] [i_3] [i_4])));
                            }
                            for (int i_5 = 1; i_5 < 22;i_5 += 1)
                            {
                                var_23 = (((((arr_12 [i_0 - 2] [i_0] [i_2] [i_2] [i_3] [i_0] [i_5 + 1]) ? 0 : var_12)) * 1812529260));
                                arr_14 [13] [i_1] [i_1] [i_1] [i_1] [i_0] [i_1] = 32;
                                var_24 = (max(var_24, (((-(arr_13 [i_1]))))));
                                arr_15 [i_3] [i_0] = ((-32 ? ((((min(var_17, 0))))) : (((var_2 ? (arr_1 [i_3] [i_3]) : 204)))));
                                var_25 = (min(var_25, (((var_17 >> (((((max(94, (arr_2 [i_3])))) || ((var_18 || (arr_1 [i_0 - 3] [i_0 - 3])))))))))));
                            }
                            for (int i_6 = 0; i_6 < 23;i_6 += 1)
                            {
                                arr_19 [i_0] [i_1] [i_0] [i_3] [i_0] = 35787;
                                var_26 = (i_0 % 2 == 0) ? ((min(((((((arr_9 [i_0] [i_1] [i_1] [i_2] [i_0] [i_6] [i_6]) >> (((arr_5 [i_6] [i_2] [i_1] [i_0 + 1]) + 3577553482070256934))))) ? ((min((arr_18 [i_0]), (arr_3 [i_3] [i_0 - 1])))) : (arr_9 [11] [i_3] [i_0] [i_2] [i_0] [i_1] [i_0]))), (((((var_10 ? (arr_1 [i_0] [i_0]) : 385632214739849308))) ? (!var_9) : (arr_8 [i_0])))))) : ((min(((((((((arr_9 [i_0] [i_1] [i_1] [i_2] [i_0] [i_6] [i_6]) + 2147483647)) >> (((arr_5 [i_6] [i_2] [i_1] [i_0 + 1]) + 3577553482070256934))))) ? ((min((arr_18 [i_0]), (arr_3 [i_3] [i_0 - 1])))) : (arr_9 [11] [i_3] [i_0] [i_2] [i_0] [i_1] [i_0]))), (((((var_10 ? (arr_1 [i_0] [i_0]) : 385632214739849308))) ? (!var_9) : (arr_8 [i_0]))))));
                            }
                            var_27 = (min(29733, 10543747106844519833));
                            arr_20 [i_0] [i_0] [1] [i_0 - 2] = (min((arr_9 [9] [9] [i_0 - 1] [i_0 - 3] [i_0] [i_0 + 1] [i_0 - 3]), (min((arr_9 [i_0] [i_0 - 2] [i_0 - 1] [i_0 - 3] [i_0] [i_0] [i_0 - 3]), (arr_9 [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 3] [i_0] [i_0] [i_0 - 3])))));
                            arr_21 [21] [i_0] [21] [i_0] [i_0] = (((arr_5 [i_0] [i_1] [5] [i_0]) ? (min((arr_5 [i_0 - 1] [i_1] [i_0 - 1] [i_3]), (arr_18 [i_0]))) : (arr_10 [i_0] [i_2] [i_0] [i_3] [i_0] [i_0] [i_0 - 2])));
                        }
                    }
                }
                arr_22 [i_1] [i_1] |= -11111;
            }
        }
    }
    var_28 = (max(var_28, 61415));
    #pragma endscop
}
