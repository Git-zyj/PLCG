/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((min(((75 ? var_8 : var_10)), ((128 ? 1008537855 : 18446744073709551615)))) ^ 115231908);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 = ((var_11 ? -var_4 : ((min(116, 480)))));
                                var_21 = 22139;
                                var_22 = (!23339);
                            }
                        }
                    }
                    var_23 = (max(var_23, ((((((max((arr_5 [i_0] [i_1] [i_2] [i_2]), 84)))) >= 12527885652900596294)))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_24 = ((-823965853 ? 1065151889408 : 13605436453886238951));
                                var_25 = (min((var_2 || var_1), (max((~-32765), ((110 ? var_15 : (arr_18 [i_0] [i_6] [i_5] [i_6])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
