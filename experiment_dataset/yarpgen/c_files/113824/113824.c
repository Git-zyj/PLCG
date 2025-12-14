/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= ((((max(var_11, var_4))) || (((var_4 ? var_4 : var_4)))));
    var_13 = var_11;
    var_14 = (((min(2047, var_3)) ^ ((((var_9 ? var_9 : var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_15 = (arr_0 [i_0]);
                            var_16 = (min((((arr_9 [i_0] [i_1] [i_0 + 3] [i_3]) ? (arr_4 [i_1 - 1] [i_0 + 3]) : (arr_4 [i_1 - 3] [i_0 + 1]))), ((min((arr_9 [i_0 + 3] [0] [i_0 - 1] [i_3]), (arr_4 [i_1 - 1] [i_0 + 2]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_17 = ((!((max(17950256587189701320, (min(0, var_1)))))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] = ((((((arr_10 [i_0] [i_4 - 1]) ? 18446744073709551612 : (arr_4 [i_1 + 1] [i_0 - 1])))) ? ((((min(245, (arr_11 [i_5] [i_4 + 2] [i_1] [i_0 - 1])))) ? (arr_4 [i_0] [i_5]) : (arr_12 [i_0] [i_1 + 1] [i_4 + 1]))) : (arr_6 [i_0 + 1] [i_4 + 2])));
                        }
                    }
                }
                var_18 = (arr_10 [i_0] [i_0]);
            }
        }
    }
    var_19 = (((((max(var_6, var_7))) == ((var_5 ? var_4 : var_2)))));
    #pragma endscop
}
