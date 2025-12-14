/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = (max(var_10, ((max((((18246 << 0) % (~2705245081216523125))), ((max(((((arr_2 [i_0]) / (arr_2 [i_0])))), var_1))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 |= var_7;

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_12 = (max(var_12, (!0)));
                        var_13 = (max(var_13, var_8));
                        arr_12 [i_0] [19] [i_0] [i_0] = ((((((arr_0 [3]) ? (!2682734614) : var_6))) ? ((1612232680 / (42731 + 10))) : 22794));
                        var_14 = (max(var_14, (((-(((arr_9 [i_0] [i_2 + 1] [i_1]) ? (arr_0 [i_0]) : (~var_0))))))));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                    {
                        var_15 = (max(((-(var_9 > var_3))), (max(var_9, 65525))));
                        var_16 = (~7185);

                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_17 ^= (((~(arr_8 [i_2 - 2] [1] [1] [i_2 - 2]))));
                            var_18 = 121668549;
                            arr_17 [i_0] [i_1] [i_1] [i_4] [i_0] &= (((max(7, (arr_8 [i_2 + 2] [i_5] [i_5] [i_2 + 2]))) - (((var_9 + (arr_7 [i_2 + 1] [i_4] [i_5] [i_5]))))));
                            var_19 = var_1;
                        }
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                    {
                        var_20 -= ((-(((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]) ? ((12 ? 13 : 3525003616)) : var_1))));
                        arr_21 [i_0] [i_1] [i_0] [20] = 68;
                        var_21 = (--var_4);
                    }
                }
            }
        }
    }
    var_22 ^= var_5;
    var_23 = (((((max(42736, ((max(-86, 1))))))) / var_8));
    var_24 = ((+(((15741498992493028499 % 65506) ? -var_4 : var_6))));
    var_25 = 1;
    #pragma endscop
}
