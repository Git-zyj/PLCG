/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((var_1 ? -var_6 : -18446744073709551615)) == (((var_4 * (!var_1))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = ((((((!18446744073709551615) ? 0 : (18446744073709551603 / 18446744073709551615)))) ? ((((!var_2) ? ((var_11 ? var_4 : var_7)) : var_0))) : (((((var_1 ? var_7 : var_6))) ? ((var_7 ? var_9 : var_10)) : (((var_6 ? var_1 : var_6)))))));
        arr_2 [i_0] = var_1;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (((((((!(((var_6 >> (var_2 - 81)))))))) - ((0 ? 7102 : 0)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_15 = ((!((!(((var_2 ? var_10 : var_2)))))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= (var_8 + var_2);
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 ^= var_1;
    #pragma endscop
}
