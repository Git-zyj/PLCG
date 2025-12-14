/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_4 != 26290);
    var_15 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_16 |= ((!(((((max(-25750, var_3))) ? (((-25750 ? 1 : (arr_0 [i_3 - 1])))) : -4753938953123216142)))));
                                var_17 *= arr_8 [i_0] [i_0] [i_0] [i_0 - 3];
                                arr_12 [i_4] [i_3] = var_1;
                            }
                        }
                    }
                }
                arr_13 [i_0] [21] [i_0] |= ((~(min(4753938953123216141, (arr_0 [i_1 + 2])))));
                arr_14 [i_1] [i_1] = ((((((arr_8 [i_0 + 1] [i_0 + 3] [i_1 + 2] [12]) < (-25766 % var_0)))) < (-25750 == 110)));
                arr_15 [i_1] = ((((((var_5 != (min(-4753938953123216142, var_5)))))) == ((-2147483626 ? ((var_6 ? var_6 : (arr_9 [i_1]))) : ((max(var_5, 1)))))));
            }
        }
    }
    var_18 = (!var_0);
    var_19 = var_7;
    #pragma endscop
}
