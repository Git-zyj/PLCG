/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_1 ? (max(((max(var_4, var_3))), ((101 ? var_2 : var_16)))) : 59));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = (((((var_1 / (arr_1 [i_0] [i_1 + 1])))) ? (arr_0 [i_0]) : (arr_4 [i_1] [i_1 + 1] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_19 = ((~((min(31259, 204)))));
                            var_20 = ((var_0 ? (min((arr_2 [i_1 + 1]), (arr_2 [i_1 + 1]))) : (((((var_0 ? var_15 : (arr_8 [i_3] [i_3] [5] [5] [i_3]))))))));
                            var_21 = ((((min(((max(31245, var_10))), (arr_2 [i_3])))) ? (min(((max(139, 117))), ((160 ? (arr_5 [0] [6] [i_2] [i_2]) : (arr_7 [i_0] [10] [i_2] [i_3] [i_3] [i_2]))))) : var_16));
                            var_22 -= -var_5;
                            var_23 = 146;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
