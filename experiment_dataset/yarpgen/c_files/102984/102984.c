/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 24;i_3 += 1)
                {
                    {
                        var_15 = (((var_8 ^ var_6) && ((min((max(var_4, var_4)), (var_5 >= var_2))))));
                        var_16 = ((((-0 ? -0 : -11))) ? 16 : ((-var_12 ? ((var_1 ? 2 : -12)) : ((var_7 ? var_6 : var_1)))));
                        arr_10 [i_0] [6] [i_0] [i_3] &= (((9 >> (-123 + 131))) << ((((65527 ? -var_10 : -4194304)) - 3578407961225471407)));
                        arr_11 [i_2] [1] [7] [i_2 - 1] [i_3] [i_3] = (((var_7 <= var_9) ? (((min(var_3, -3)))) : ((18446744073709551607 ? var_10 : var_2))));
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] = (-1 | var_10);
        arr_13 [19] = ((max(0, var_8)));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] [i_4] = ((var_4 ? (max(var_2, var_3)) : 21));
        var_17 = ((((((~var_1) ^ 11))) ? (!var_9) : ((((max(var_0, var_9))) ? (min(10, 268427264)) : ((65535 ? 10 : -18))))));
    }
    for (int i_5 = 4; i_5 < 22;i_5 += 1)
    {
        var_18 = (min(var_18, (((((((var_13 ? 0 : 21))) ? (!var_10) : ((min(12288, 0)))))))));
        arr_21 [i_5] = (var_0 & var_11);
        var_19 &= -0;
    }
    var_20 = ((-(var_13 * var_12)));
    #pragma endscop
}
