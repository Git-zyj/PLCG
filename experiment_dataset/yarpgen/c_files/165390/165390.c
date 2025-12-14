/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 2147483647;
    var_21 = var_19;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_22 = ((~(max((4294967287 <= 65526), var_4))));
                                var_23 = (((((var_10 ? var_16 : (arr_7 [i_0] [i_1] [i_4 - 1])))) <= (((~((min((arr_2 [i_2] [i_2]), (arr_3 [i_2 - 1])))))))));
                            }
                        }
                    }
                    var_24 *= arr_12 [i_0] [i_2] [i_2 + 1] [i_0] [i_0] [i_0];
                }
            }
        }
    }
    var_25 = (((!var_14) <= (((var_12 > (min(var_17, var_6)))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 8;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 7;i_8 += 1)
                    {
                        {
                            arr_24 [8] [i_6] = (arr_6 [i_6] [i_7] [i_8]);
                            var_26 = ((~((((((arr_8 [i_5] [i_5] [i_7]) ? var_8 : (arr_23 [i_7])))) ? ((-(arr_11 [i_7]))) : ((2147483643 ? (arr_13 [i_5] [i_6] [i_7] [i_7] [i_8]) : (arr_8 [17] [i_6] [i_7])))))));
                            var_27 = (arr_13 [i_5] [i_6] [i_7] [i_7 + 3] [i_8]);
                            var_28 ^= (((((((((arr_2 [i_5] [i_5]) - var_17))) ? var_8 : var_4))) ? ((min(2147483643, 1))) : (max((min(0, -56073481)), (((arr_5 [i_5]) - (arr_11 [i_6])))))));
                            var_29 = var_5;
                        }
                    }
                }
                var_30 = (!var_8);
            }
        }
    }
    #pragma endscop
}
