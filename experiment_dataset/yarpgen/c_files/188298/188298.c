/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min(((min(var_0, var_3))), 59792))) ? var_9 : var_3));
    var_18 = (max((65535 % var_2), var_12));
    var_19 = (max(var_19, var_0));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_16 [5] [i_1] [i_2] [i_1] [6] = var_14;
                                var_20 = 4294967283;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_21 [3] [i_1] [i_5] [i_6] = (min((min((((113 ? 17213 : 48327))), (max(var_1, var_16)))), ((min((((var_15 != (arr_1 [i_0 - 1])))), ((var_10 ? (arr_0 [i_6 - 1]) : var_6)))))));
                            var_21 = ((max((((!(arr_10 [i_0 - 1] [3] [i_6])))), var_5)));
                        }
                    }
                }
                arr_22 [i_1] = (((arr_20 [11] [0] [13] [14] [i_1] [i_1]) ? ((((18446744073709551615 ? (arr_2 [i_0]) : var_14)) | var_3)) : ((max((arr_11 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0]), (arr_11 [i_0 - 1] [i_0 + 1] [6] [3]))))));
            }
        }
    }
    var_22 = (((((-29 ? var_3 : ((-11820 ? var_0 : var_6))))) ? (((-var_15 != ((23 ? (-32767 - 1) : var_12))))) : (((((var_7 ? 11808 : var_15))) ? var_11 : ((var_13 ? var_11 : var_10))))));
    #pragma endscop
}
