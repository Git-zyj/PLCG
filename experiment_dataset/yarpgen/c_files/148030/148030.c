/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (var_4 * var_10)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_14 ^= var_9;
                            var_15 = (min(var_15, (((((((((arr_2 [i_1] [i_1] [i_3]) ? var_4 : var_1)) - ((var_9 ? (arr_3 [i_1]) : (arr_5 [i_1 - 1] [i_1 - 1] [i_0])))))) ? ((var_8 ? (((arr_1 [i_1] [i_2]) - (arr_7 [i_0] [i_0] [i_2] [i_2] [i_2]))) : var_3)) : 18684)))));
                            arr_9 [i_0] [i_1] [i_0] [i_3] = (((((arr_0 [i_1 + 1]) ? -12601 : (arr_6 [i_2] [9] [9]))) << (((((((arr_1 [i_0] [i_3]) ? (arr_4 [i_0]) : ((((arr_4 [i_3]) ? (arr_0 [i_3]) : (arr_5 [i_0] [i_2] [i_3])))))) + 5055369149943048431)) - 14))));
                            var_16 ^= (arr_3 [i_1]);
                            var_17 ^= (((((((min(var_4, var_3))) ? (max(var_6, var_9)) : (arr_6 [i_1] [i_2] [i_2])))) ? ((((((arr_6 [i_0] [i_1 + 1] [i_2]) / var_4))) ? ((var_10 ? 149 : var_11)) : (min(var_11, var_3)))) : (arr_3 [1])));
                        }
                    }
                }
                var_18 |= (max(-7869001343669476446, (((min(-7869001343669476449, -1)) ^ (arr_3 [i_1])))));
                arr_10 [i_1] [i_0] [i_0] = (arr_2 [i_0] [i_1] [i_1]);
            }
        }
    }
    #pragma endscop
}
