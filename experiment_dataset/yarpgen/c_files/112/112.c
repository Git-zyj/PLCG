/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (((((((2263086586 ? var_5 : var_10)) + var_4))) ? ((2263086567 ? 18446744073709551595 : var_10)) : var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = ((~(((var_11 >= var_11) ? (arr_5 [7] [i_1]) : var_9))));
                var_14 = var_12;
                arr_7 [i_0] [i_1] [i_0] = ((((var_0 ? (var_2 || var_12) : ((var_8 ? var_4 : var_1))))) ? (((arr_4 [19]) % (arr_5 [i_0] [i_1]))) : var_12);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_14 [i_3] = (((var_0 ? var_8 : (arr_8 [i_3] [i_3 - 2] [i_0]))) / ((var_8 ? var_4 : var_1)));
                            arr_15 [i_0] [i_0] [i_2 - 1] [i_3 + 1] [i_3 + 1] [i_3] = (((((var_5 ? var_3 : var_12))) ? (var_0 || var_10) : ((((!(arr_12 [i_0] [i_1] [i_2 - 1] [i_1] [i_1]))) ? var_10 : ((var_7 ? var_7 : var_12))))));
                            var_15 *= ((((arr_11 [i_3 + 1] [i_1] [i_1] [i_2 - 1]) ? (arr_12 [i_3 + 2] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_2 - 1]) : (arr_8 [i_3 - 2] [i_3 - 3] [i_2 - 1]))) & (((arr_8 [i_3 - 3] [i_3 + 2] [i_2 - 1]) ? (arr_8 [i_3 + 1] [i_3 + 2] [i_2 - 1]) : (arr_8 [i_3 - 3] [i_3 - 2] [i_2 - 1]))));
                        }
                    }
                }
            }
        }
    }
    var_16 = ((var_1 ? ((var_1 ? (((var_0 ? var_9 : var_12))) : var_5)) : var_8));
    #pragma endscop
}
