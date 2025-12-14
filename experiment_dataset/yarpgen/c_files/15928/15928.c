/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_3] [i_1] [i_1] [i_1] [i_0] = ((((((var_11 ? 0 : 1))) && var_3)));
                                arr_13 [i_0] [6] [i_2] [i_3] [i_1] = 4269145051;
                            }
                        }
                    }
                }
                var_16 = ((var_6 ? var_2 : (((((arr_2 [i_1]) ? var_9 : (arr_6 [i_1] [i_1] [i_1]))) << ((var_0 / (arr_1 [i_0] [i_0])))))));
                var_17 *= var_7;
                arr_14 [6] [6] |= ((-97 ? (~0) : 13380258885082952198));
            }
        }
    }
    var_18 = var_0;
    var_19 = (min(var_19, ((max(var_13, 14155199930497663034)))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                arr_20 [i_5] [7] [i_6] = (var_7 < 18446744073709551603);
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 16;i_9 += 1)
                        {
                            {
                                arr_29 [i_9] [i_7] [i_7] [i_7] [1] = ((((((arr_27 [14] [14] [i_6] [i_6] [i_6]) || ((!(arr_27 [i_9 - 2] [i_8] [i_7] [1] [i_5])))))) + (-97 || -97)));
                                arr_30 [i_5] [i_7] [i_7] [18] [i_7] = (!(arr_21 [i_7] [i_6] [15] [i_9]));
                                var_20 -= (((~(!var_2))));
                                var_21 = (min(var_21, ((((arr_16 [i_5]) ^ (min(var_15, (arr_17 [i_9 + 4] [i_9 - 2]))))))));
                            }
                        }
                    }
                }
                arr_31 [i_5] [i_5] [i_5] = (((((arr_16 [i_6]) ^ (arr_16 [i_5]))) >> (((arr_23 [i_6] [2] [2] [2]) - 1272852380))));
                var_22 = (max(var_22, ((max((min((((~(arr_26 [i_5] [8] [0])))), (~var_15))), ((((arr_22 [i_5] [i_5] [1] [i_5]) << (((arr_16 [i_5]) + 37))))))))));
            }
        }
    }
    var_23 = 4294967295;
    #pragma endscop
}
