/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_4 | var_8);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = (((((~(arr_2 [i_1 + 3] [i_0 + 1])))) ? (((arr_2 [i_1 + 1] [i_0 - 2]) ^ (arr_2 [i_1 + 3] [i_0 - 2]))) : 2025029945925363376));
                var_20 = ((var_6 ? ((((var_16 ? (arr_0 [i_0 - 2]) : (arr_1 [15] [i_1]))) * (var_7 >= var_6))) : (((!((((arr_1 [i_0] [i_1]) ? var_12 : var_8))))))));
            }
        }
    }
    var_21 = var_7;
    var_22 = (((((~((1 ? var_4 : var_4))))) > ((2025029945925363383 << (((-32558 + 32607) - 47))))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 6;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                var_23 = (((((((93 ? 2025029945925363376 : 9))) ? (arr_4 [6]) : var_13)) & ((min((arr_6 [i_2] [i_2] [i_3]), var_13)))));
                var_24 = (arr_2 [i_2] [i_2 + 4]);
                var_25 = (((-2025029945925363382 ? 2025029945925363376 : 7012)));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 8;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 7;i_5 += 1)
                    {
                        {
                            var_26 = max((((var_4 ? (((arr_0 [i_4]) * -69)) : ((-(arr_6 [i_5 - 1] [i_5 - 1] [2])))))), ((-var_6 ? ((var_2 ? (arr_3 [i_5] [9]) : -2025029945925363386)) : (((arr_2 [i_3] [i_3]) / -29001)))));
                            var_27 = (~(((((var_11 ? 99 : (arr_8 [i_3] [i_4 - 1])))) ? ((var_12 ^ (arr_12 [1] [i_5] [i_4 + 2] [i_3] [i_2 + 4] [i_2 + 4]))) : (((3410982320 ? 931902605 : 883984976))))));
                            var_28 = ((-(((~-28860) & -69))));
                            var_29 = ((-28858 == (((~68) ? var_13 : (min((arr_3 [i_3] [i_5 + 3]), 3223322276466919015))))));
                            var_30 = (arr_6 [2] [2] [i_4 + 1]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
