/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_11 [i_0 + 2] [i_0 - 1] [i_0] [i_0 + 3] = (min((18037080748107359353 - 18037080748107359353), ((max(828346807, -6742133430915010510)))));
                            var_11 = (((var_3 ? 18037080748107359352 : var_1)));

                            for (int i_4 = 0; i_4 < 15;i_4 += 1)
                            {
                                var_12 = (arr_1 [i_0 + 3] [i_4]);
                                var_13 |= ((~(arr_12 [10] [10] [i_2] [i_3] [10])));
                                arr_14 [i_0] [i_1] [i_3] [i_3] [i_4] = (((((arr_6 [i_0 + 1] [i_0 + 3] [i_2]) ? (arr_6 [i_1] [i_0 + 2] [i_1]) : (arr_6 [i_0 + 1] [i_0 + 2] [i_0 + 2]))) & ((max((min(var_2, (arr_9 [i_0] [i_0 + 2] [i_1] [i_2] [i_3] [i_4]))), ((-6196619375372318191 ? 43673 : -940987099)))))));
                                var_14 = (max(var_14, (((~(((18037080748107359342 / var_5) ? 3767223942 : (~-88304890))))))));
                            }
                            /* vectorizable */
                            for (int i_5 = 1; i_5 < 12;i_5 += 1)
                            {
                                var_15 -= (arr_7 [7] [i_1] [i_2]);
                                var_16 = ((84 ? ((13014965842220471045 ? (arr_6 [i_0] [i_1] [i_3]) : var_7)) : ((1 ? 1 : (arr_6 [i_1] [i_1] [0])))));
                                var_17 = (((arr_9 [i_0] [i_0 - 1] [i_3] [i_0] [i_5 + 2] [i_5]) ? 0 : (arr_9 [i_0] [i_0 + 2] [9] [i_5] [i_5 + 2] [i_1])));
                            }
                            var_18 = (((((arr_1 [i_0 - 1] [12]) ? 15495975871943444450 : -2147483647)) <= (((-26369 <= (arr_1 [i_0 + 1] [i_0 + 1]))))));
                        }
                    }
                }
                var_19 = (~var_5);
            }
        }
    }
    var_20 = var_1;
    var_21 = var_9;
    var_22 = (min((-31 || var_3), ((((min(var_5, 26368))) ? var_9 : (min(44151, var_2))))));
    #pragma endscop
}
