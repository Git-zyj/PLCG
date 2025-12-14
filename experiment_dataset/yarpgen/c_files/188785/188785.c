/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (((31 ? 0 : 5)))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_2] [i_3] [i_4] = (max((((arr_10 [9] [i_2] [i_2 + 2] [i_0 + 2] [i_2] [i_0]) ? (arr_10 [i_4] [i_2] [i_2 + 2] [i_0 + 4] [i_2] [i_0 - 1]) : (arr_10 [i_3] [i_2] [i_2 + 3] [i_0 + 1] [i_2] [i_0]))), ((1 * (arr_10 [i_2] [i_2] [i_2 + 3] [i_0 - 1] [i_2] [i_0 + 3])))));
                                arr_14 [i_4] [i_0] [i_2] [i_1] [i_0] = (max((((-19 ? 70 : 38))), (((min((arr_4 [i_0]), (arr_1 [i_4] [i_1]))) ^ (19 ^ var_2)))));
                                arr_15 [i_2] = (min((arr_2 [6]), (~var_14)));
                                var_20 = (min(var_20, (((var_2 < 1) ? (min(var_5, (((arr_2 [i_0]) ? (arr_3 [i_3 + 1] [1]) : (arr_6 [i_1] [i_1] [8]))))) : ((-((max(123, 59)))))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            arr_22 [i_6] [i_6] [i_5] [i_6] [i_0 - 1] = -655687179733561658;
                            arr_23 [i_6] [i_6] [i_5] [i_6] = (-(((arr_16 [i_0 - 1] [i_0 + 3] [i_6]) ? var_16 : (0 && 34846))));
                            var_21 = (((((4227858432 << (4227858432 - 4227858425)))) ? 1534435907167957241 : (arr_5 [i_1])));
                            var_22 = (min(var_22, (arr_20 [i_5] [i_0])));
                        }
                    }
                }
                arr_24 [i_0] [i_0] = (max((((((arr_8 [i_1] [i_1] [i_1] [i_1]) ? (arr_4 [i_0]) : (arr_6 [i_1] [6] [i_1]))) - (arr_6 [i_1] [i_1] [i_1]))), (((((min(var_8, var_17))) ? ((min((arr_7 [i_1] [9] [i_0]), var_5))) : (arr_9 [i_0] [i_1] [0] [1]))))));
            }
        }
    }
    var_23 *= (((~67108858) == (((var_12 ? (var_11 * var_8) : var_3)))));
    #pragma endscop
}
