/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (((((var_6 ? ((max(var_5, var_0))) : ((var_7 ? var_6 : var_1))))) ? ((var_1 ? ((max(var_0, var_11))) : var_2)) : ((((var_6 ? var_1 : var_1))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (max(var_3, (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : var_2))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 = (((var_9 ? (arr_6 [i_0]) : (arr_1 [3]))));
                    var_14 = arr_4 [i_0];
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_15 = ((!(((var_9 == var_2) <= ((((arr_10 [i_2]) <= var_1)))))));
                                var_16 = (((((!var_5) ? (!var_11) : (arr_0 [i_0]))) <= ((-(arr_8 [i_0])))));
                                var_17 += max(var_7, var_11);
                                var_18 = (((((var_11 ^ (arr_15 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_3] [i_2 - 2] [i_2 + 1] [i_0])))) ? (((arr_9 [i_0] [i_2 + 1] [i_0]) ? (arr_9 [i_0] [i_2 + 1] [i_0]) : var_6)) : (((arr_15 [i_3] [6] [i_3] [i_3] [i_2 - 2] [i_2 + 1] [i_2 + 1]) << (arr_9 [i_0] [i_2 + 1] [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {
        var_19 = ((-(((((var_1 ? var_6 : var_10))) ? var_8 : (~var_6)))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 14;i_8 += 1)
                {
                    {
                        arr_26 [i_5] [i_5] [i_6] [i_7 - 2] [2] = (((((var_8 ? (((arr_17 [i_8]) ? var_5 : (arr_22 [i_7 + 2] [i_6] [i_5]))) : (~var_0)))) ? (((arr_4 [3]) ? (arr_4 [i_7 - 2]) : (arr_18 [i_7 - 1]))) : ((((((arr_23 [i_5] [i_6] [4] [13]) ? var_4 : var_9))) ? ((var_0 ? var_4 : var_2)) : ((var_0 >> (arr_25 [i_8] [8] [i_5] [i_5])))))));
                        var_20 = (((var_7 <= var_2) >= ((((var_8 ? var_3 : (arr_8 [i_5]))) | var_1))));
                        var_21 = (max(var_21, (min((-127 - 1), 91))));
                        var_22 = (((arr_16 [i_7 + 1] [i_7] [i_7] [i_8 + 1] [i_8 + 1] [i_8 + 1]) != (~var_10)));
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
    {
        arr_30 [i_9] [i_9] = (max(((max((arr_14 [i_9] [i_9] [8] [i_9] [i_9]), var_1))), ((((var_11 ? var_9 : var_1)) << ((var_5 ? var_4 : var_1))))));
        var_23 = (max(var_23, (((((max((min(var_3, var_9)), (max(var_5, var_2))))) - ((max((max((arr_4 [i_9]), var_8)), var_7))))))));
    }
    var_24 = var_2;
    var_25 |= var_2;
    #pragma endscop
}
