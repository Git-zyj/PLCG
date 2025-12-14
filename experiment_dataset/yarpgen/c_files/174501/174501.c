/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                            {
                                var_12 = (((-28 + 2147483647) >> ((((((max(var_4, var_3))) * var_3)) - 2275))));
                                arr_13 [i_2] [i_3] [6] [i_1] [i_2] = (((9223372036854775807 / (-2147483647 - 1))));
                            }
                            for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                            {
                                var_13 = (max((((var_1 ^ 236) ? -var_5 : (var_10 & var_6))), (((((var_2 ? var_2 : 236))) ? ((max(var_4, var_4))) : var_8))));
                                arr_16 [2] [8] [8] [10] [i_2] = ((~((min(var_2, (!9757))))));
                            }
                            for (int i_6 = 1; i_6 < 23;i_6 += 1)
                            {
                                arr_19 [i_0] [i_1] [2] [i_2] [1] = ((-((min(((max(var_4, (arr_12 [1] [5] [i_2])))), -17889)))));
                                var_14 = 28;
                                arr_20 [14] [i_1] [i_2] [i_1] [i_6] = ((-((var_2 + (arr_12 [1] [i_1] [i_0])))));
                            }
                            var_15 = (max(var_15, (((((((((17681439861744001707 ? -1 : 130))) ? (((arr_7 [i_0]) ? 1 : var_2)) : (max(var_10, var_4))))) * var_7)))));
                        }
                    }
                }
                arr_21 [i_0] &= ((-(min((((-9223372036854775807 - 1) ? 5746982838118951931 : 105)), var_0))));
                var_16 = ((-9758 ? (max(((var_2 ? (arr_3 [1] [i_1]) : var_4)), (max(-723044801, var_2)))) : ((var_2 << (120 - 98)))));
            }
        }
    }
    var_17 = (max(((max(var_0, var_1))), -var_2));
    var_18 &= (max(((min(var_8, 9741))), (((-((max(var_6, var_0))))))));
    #pragma endscop
}
