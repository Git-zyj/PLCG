/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(3044646415, (-2297152870154225277 | var_10)));
    var_17 = var_10;
    var_18 = (max(((var_13 ? (!355525422) : (~3680))), ((3666 ^ (!3620538869)))));

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = ((min(((max(var_5, 62))), (max(3620538874, 372217110)))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 = (min((((31 & var_11) ? var_13 : (min(var_10, var_8)))), (((!((min(-14986, -10))))))));
                                var_20 = ((~(max((~var_10), -42))));
                                arr_11 [i_2] [i_1] [i_2] [10] [i_1] [i_1] [i_1 - 1] = (0 % var_5);
                            }
                        }
                    }
                    arr_12 [i_1] [i_1] [i_2] = ((-((((min(4294967282, var_2))) ? (!666092536) : (~var_7)))));
                    var_21 &= ((min(var_7, -8187936441206901520)));
                    var_22 -= var_0;

                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        var_23 = (~(max(((var_9 ? -79 : var_3)), var_4)));
                        arr_16 [i_2] = (var_6 | var_0);
                        var_24 = (((606363878279574068 != var_1) >= 536870912));
                        var_25 = (((3666 != var_0) ? ((var_4 ? 3628874759 : var_3)) : (~61868)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
