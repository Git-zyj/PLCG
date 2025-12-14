/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (max(-4503599358935040, -var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((((((((arr_4 [i_0] [i_0]) ^ var_10))) ? 18442240474350616570 : (arr_3 [i_0] [i_1 + 1])))) ? ((((18442240474350616570 ? var_16 : (arr_1 [i_1]))))) : (!var_10));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                            {
                                var_20 = (max((((max((arr_5 [i_0] [i_0] [i_0]), var_2)) >> (((((arr_9 [i_3] [8] [i_3] [i_2]) | var_16)) + 1421)))), -32753));
                                var_21 = (!var_9);
                                arr_14 [i_0] [i_3] [i_0] = ((var_10 != (((arr_12 [i_3] [i_1 - 3] [i_3] [i_3] [i_3 - 2]) % (arr_12 [i_3] [i_1 - 2] [18] [i_3] [i_3 - 1])))));
                            }
                            for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                            {
                                arr_17 [i_0] [i_2] [i_3] = (max(var_4, ((max(var_1, (arr_12 [i_3] [i_3 - 1] [i_3] [0] [i_1 - 1]))))));
                                arr_18 [i_3] [i_0] [i_0] = (min((max(18442240474350616579, (var_0 & var_4))), (((!(arr_15 [i_0] [10] [i_1 - 3] [0] [i_3 - 1]))))));
                            }
                            for (int i_6 = 0; i_6 < 19;i_6 += 1)
                            {
                                var_22 = (min(var_22, ((max(((9223372036854775791 / (arr_1 [i_1 - 2]))), ((min(var_10, ((max(var_9, var_6)))))))))));
                                arr_22 [i_0] [i_3] = ((((min((((arr_15 [i_2] [i_1] [i_2] [i_1 + 1] [i_6]) & var_15)), (~var_11)))) ? (((((arr_3 [i_0] [i_0]) & 4539628424389459968)) ^ (~var_11))) : var_12));
                            }
                            arr_23 [i_3] [i_1] [i_1 - 3] [i_3] = (max((max((((arr_8 [i_0] [i_2] [16]) ? var_4 : var_17)), (arr_12 [i_3] [i_2] [i_2] [i_1 + 1] [i_3]))), ((min((arr_13 [i_1] [i_1] [i_1] [i_1] [i_1 - 2]), var_3)))));
                            var_23 -= ((min(var_2, (arr_16 [i_0] [i_2] [i_3 - 2]))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 16;i_8 += 1)
                    {
                        {
                            arr_31 [i_8] = ((((max((((arr_0 [i_7]) ? 1152921229728940032 : (arr_16 [9] [5] [5]))), ((min(var_3, var_4)))))) ? var_1 : ((((((arr_26 [i_0] [i_0] [i_0] [4]) || (arr_9 [i_7] [i_7] [i_1] [i_7]))) || ((min(32764, (arr_2 [i_7] [i_7] [i_0])))))))));
                            var_24 = ((((min((arr_9 [i_1 - 3] [i_1 - 3] [i_1 - 1] [i_7]), (arr_10 [i_1 - 3] [i_1 - 3] [i_8 - 1])))) ? (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((arr_20 [i_1 - 2] [i_1 - 2]) ? (arr_25 [i_1 - 1] [i_8 + 2] [i_8]) : (arr_25 [i_1 - 3] [i_8 + 1] [i_1 - 3])))));
                            var_25 = (min(-1152921229728940032, (((-(arr_15 [i_0] [i_0] [i_0] [i_1 - 3] [i_8 + 2]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
