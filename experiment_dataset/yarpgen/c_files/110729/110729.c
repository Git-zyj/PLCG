/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    var_17 = (max(var_17, ((max(var_3, -var_14)))));
    var_18 = (max(var_8, (((((var_1 ? var_12 : var_7))) ? 802330117 : 0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = ((((!(arr_5 [i_1])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_20 = ((((!(~-802330117))) ? (((!(arr_7 [i_4 - 1] [i_2] [i_2] [i_0])))) : ((((var_6 ? (arr_4 [i_1] [i_2] [i_4]) : var_14))))));
                                arr_12 [i_0] [i_0] [i_2] [i_0] [i_0] = (arr_8 [i_4] [i_2] [i_2] [i_1] [i_0]);
                                var_21 ^= (-var_5 ? (max(((~(arr_4 [i_4] [i_3] [i_0]))), ((var_5 << (var_8 - 51))))) : (arr_0 [i_4]));
                            }
                        }
                    }
                }
                arr_13 [i_0] [17] = (arr_4 [i_1] [i_0] [i_0]);
                var_22 = (max(var_22, (((arr_7 [i_0] [i_1] [i_0] [i_1]) ? ((-802330128 ? (arr_7 [i_0] [i_1] [i_1] [i_0]) : 2997892876)) : (((max(var_5, (arr_7 [i_0] [i_1] [i_1] [i_1])))))))));
            }
        }
    }
    #pragma endscop
}
