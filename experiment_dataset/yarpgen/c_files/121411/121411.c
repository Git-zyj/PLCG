/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((max((max(var_5, var_5)), (var_10 <= 0)))) && var_3);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_12 = ((((((var_3 && -29775) ? 1 : (var_2 - var_7)))) ? (((-(max(var_3, 1))))) : var_1));
                    var_13 *= ((((((arr_1 [i_0]) ^ (arr_2 [i_0])))) ? (((~((18446744073709551615 ? var_5 : var_2))))) : (((max(8191, var_6)) - (((var_2 ? 47421 : var_1)))))));
                    var_14 = (-19230 && 22138950);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_15 *= (max((((((var_10 ? 14737 : 1))) ? (arr_5 [22] [i_1] [20] [i_4 - 2]) : (((arr_9 [i_0] [i_1]) / (arr_8 [i_0]))))), ((((arr_1 [i_0]) * 1008)))));
                                var_16 -= ((((1134721285 | (arr_3 [i_0] [i_3 + 3] [i_2]))) >> (((((((-2930501028206643483 ? -1152641318 : var_5))) ? (((arr_11 [i_0] [i_1] [i_2] [3]) ? 27426 : var_3)) : (arr_0 [i_1] [i_0]))) - 27403))));
                                var_17 = (max(((~(arr_2 [i_4 - 3]))), (((arr_2 [i_4 + 2]) ? 1 : (arr_2 [i_4 + 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 -= -var_3;
    #pragma endscop
}
