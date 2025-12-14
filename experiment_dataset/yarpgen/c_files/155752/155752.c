/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    var_21 += var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_22 = (((((min(var_7, var_2))) ? 1876229339 : (max(var_12, 1185512572)))));
                                arr_14 [i_0] [i_0] [i_0] [i_3 - 1] [i_4] [i_0] [i_1] = ((((((-5156049164641510846 || (!var_6))))) != (min(16581929358306221808, 7062))));
                                arr_15 [i_0] [i_1] [i_0] [i_0] [i_0] = (!(((-(arr_11 [i_0] [i_1] [i_2] [i_4 + 1] [i_0])))));
                                var_23 = (max(var_23, (((((max(var_14, (max(var_3, 1864814715403329804))))) ? (arr_11 [2] [i_0] [i_3 - 1] [i_3 - 1] [i_4]) : 127)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 7;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 8;i_6 += 1)
                        {
                            {
                                var_24 = (((var_10 && -57) < var_11));
                                var_25 ^= (((826358585 ? -105 : 0)));
                                var_26 = (max(var_26, ((min(((var_2 ? var_11 : 1864814715403329804)), (-5156049164641510846 != var_13))))));
                                arr_22 [i_0] [i_1] [6] [i_1] [i_1] = (max(((min((arr_18 [i_1] [i_6 - 2] [i_5 - 1] [i_1]), (arr_21 [i_5 + 4] [i_1] [i_6 + 3] [i_1] [i_5 + 4])))), ((((((var_10 + 2147483647) >> var_3))) - -5156049164641510846))));
                            }
                        }
                    }
                    arr_23 [i_0] [i_0] [i_1] = (((((var_10 ? (((var_5 ? var_6 : var_3))) : ((var_5 ? (arr_12 [i_2] [i_0] [i_0] [1] [i_0]) : var_15))))) ? (((-1770469848346496265 ? var_17 : 14883242536614494885))) : (((max((arr_7 [i_2]), var_17))))));
                }
            }
        }
    }
    #pragma endscop
}
