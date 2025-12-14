/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_13 = (((((96 ? 142 : (arr_0 [i_1])))) ? -var_0 : ((var_10 & (arr_5 [i_1])))));
                    var_14 = (min(((min(-15, 113))), (var_8 % var_9)));
                    arr_8 [i_1] = (max(((var_5 ? (((min(var_5, 152)))) : ((var_0 ? 159 : -5230276076112221701)))), (arr_6 [i_0] [i_1] [i_2] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [20] [i_1] [i_2] [i_3] [i_4] [i_4] &= ((((var_1 || (((var_0 ? var_11 : var_5))))) ? (arr_0 [i_3 + 1]) : (((((-5230276076112221701 ? var_7 : 0))) ? 1 : (arr_3 [i_0 - 3] [i_3 + 1])))));
                                var_15 ^= ((((min((((3236862628786978959 ? -1087513321 : var_3))), (2171174330824546846 * 0)))) ? var_11 : -7558));
                                arr_15 [i_0] [i_1] [i_2] [i_4] [i_1] [i_3] = (!(arr_2 [i_0]));
                                arr_16 [i_3 + 1] = ((((min(var_11, (arr_10 [i_4] [i_3] [i_2] [i_2] [i_0 + 1] [i_0 + 1])))) ? ((((arr_2 [i_4]) <= (arr_10 [i_0] [i_0 - 2] [i_1] [i_2] [i_3] [i_4])))) : ((-(arr_6 [i_0] [i_0] [i_2] [i_4])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 += (min(var_11, (min(var_1, ((var_2 ? var_12 : var_9))))));
    #pragma endscop
}
