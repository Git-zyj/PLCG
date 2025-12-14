/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 = ((((min((arr_6 [i_1] [i_3 + 1] [i_1]), (arr_7 [i_1] [i_1] [i_1]))) ^ (arr_2 [i_3] [i_1 + 2]))));
                                arr_13 [i_2] [6] [2] [i_1] [7] [i_2] = (arr_7 [i_1] [i_2] [i_1]);
                                var_17 -= var_0;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_18 = (min((147 % 32767), ((-((((arr_4 [i_1] [i_2] [i_1]) >= 20054)))))));
                                var_19 = (min(1, (max((((var_2 <= (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])))), (arr_5 [11] [i_1 + 2] [i_1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (max(((((var_0 ? var_4 : var_7)) + -var_10)), ((min(-23, var_10)))));
    var_21 = ((-(((var_14 ? var_6 : var_3)))));
    var_22 = (((((((var_9 ? var_6 : var_0))) > (min(var_8, var_0)))) && var_15));
    #pragma endscop
}
