/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((((((var_4 << (10988 - 10970)))) ? (1880660337 <= 1) : var_8)), ((max(((min(var_5, 32592))), (1 | var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_8 [i_2] [7] [i_2] [i_2] [i_2] [i_1] = ((((-(arr_5 [i_1]))) / var_10));

                            for (int i_4 = 3; i_4 < 16;i_4 += 1)
                            {
                                arr_11 [i_4] [i_1] [i_2] [i_1] [i_0] = ((+(((!((((arr_9 [i_2] [i_1] [i_2] [i_3] [i_2] [i_2] [i_2]) ? 1 : var_3))))))));
                                var_12 = (max(var_12, (((((max((!var_2), ((var_1 ? var_0 : (arr_4 [i_0] [i_1])))))) ? (var_7 != 1151) : -var_3)))));
                                var_13 = ((-(arr_7 [i_1] [i_1] [i_1])));
                            }
                            for (int i_5 = 0; i_5 < 17;i_5 += 1)
                            {
                                var_14 = var_1;
                                var_15 = (min(var_15, 16606));
                                arr_15 [i_1] [i_1] [i_1] [i_0] = ((!(arr_7 [i_1] [i_0] [i_1])));
                                var_16 = 1;
                            }
                            for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
                            {
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_6] [i_6 + 1] = (max(((max(var_9, (arr_12 [i_6 + 1] [i_3] [i_0] [i_0] [i_0])))), (var_9 / 4910165764802600947)));
                                arr_19 [i_6] [i_1] [i_1] [12] = 1;
                                arr_20 [i_6 + 1] [i_1] [i_2] [i_1] [i_0] = (min(((0 ? 1 : 1)), (!40133)));
                                arr_21 [i_1] [7] [i_2] [7] [i_6] [i_2] [i_1] = 1;
                            }
                            for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
                            {
                                arr_24 [i_7] [i_1] [i_1] [i_0] = ((((((arr_14 [i_0] [i_1] [i_1] [5] [i_0]) > (1 - var_0)))) >> 1));
                                var_17 = var_4;
                            }
                        }
                    }
                }
                var_18 = var_0;
                var_19 = var_1;
            }
        }
    }
    #pragma endscop
}
