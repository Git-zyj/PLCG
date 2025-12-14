/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_7 ? (min(-var_9, (max(var_3, var_7)))) : (!var_0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (((((((((arr_4 [i_0]) ? 1 : (arr_6 [i_0] [i_0] [14])))) ? (((arr_3 [i_0]) ? var_9 : (arr_4 [i_0]))) : var_14))) ? var_14 : var_6));
                arr_7 [i_0] [i_1] |= ((-(((var_4 == 1) * (arr_4 [i_0])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 18;i_4 += 1)
            {
                {
                    var_17 = -3469;

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        var_18 += (((var_8 ? var_6 : 13982397298234790386)));
                        arr_18 [i_5] [i_3] [i_4] [i_4] [i_5 - 1] [i_5] = (((-127 - 1) ? var_10 : (arr_13 [i_4] [i_4])));
                    }
                    var_19 *= (((((-2 ? (~var_12) : var_7))) ? (min((var_2 & 6546), -1)) : ((max(var_10, var_2)))));
                }
            }
        }
    }
    #pragma endscop
}
