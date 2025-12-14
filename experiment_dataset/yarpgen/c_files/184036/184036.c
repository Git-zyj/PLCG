/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = var_2;
        var_10 = ((var_9 ? var_9 : (((var_1 + 2147483647) << (((var_1 + 47) - 30))))));
    }
    for (int i_1 = 4; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_11 = (min(var_11, (((~((~((max(var_2, var_1))))))))));
        var_12 = (((((var_0 ^ var_7) ? var_0 : ((var_9 ? var_7 : var_3)))) & (var_9 ^ var_4)));
        var_13 = ((~((var_7 ? ((var_9 << (var_3 - 3737355558))) : var_0))));
        var_14 &= -5437741264382265862;
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            {
                var_15 = ((((((var_3 ? var_4 : var_7))) ? var_7 : var_6)));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_16 *= var_3;
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_17 = (~var_0);
                                var_18 = ((var_2 ? var_9 : (~var_1)));
                            }
                        }
                    }
                    var_19 = var_6;
                }
            }
        }
    }
    #pragma endscop
}
