/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = (!9223372036854775807);
                var_14 = (arr_1 [i_0]);
                var_15 = (arr_3 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [2] &= ((1 ? ((((((arr_3 [i_0 - 2]) / (arr_7 [i_0 + 1])))) ? (((arr_3 [7]) << (((arr_9 [2] [6] [6] [i_0]) - 5881056689432379784)))) : (arr_1 [i_1]))) : ((~((var_6 ? (arr_1 [i_2 - 1]) : var_3))))));
                            var_16 = (max(var_16, (((((((((arr_8 [i_0 - 3] [i_0] [i_0]) ? -1 : var_4))))) <= var_12)))));
                            var_17 = ((~(max(-32767, ((9223372036854775807 ? -32750 : var_8))))));
                        }
                    }
                }
                arr_11 [i_1] = (((((var_10 ? 65527 : var_1)))) ? (((((30720 ? (arr_1 [i_0]) : var_10))) ? (arr_8 [i_0 - 3] [i_0] [i_0 + 2]) : (var_12 != var_11))) : 0);
            }
        }
    }
    var_18 = (max(var_18, var_7));
    #pragma endscop
}
