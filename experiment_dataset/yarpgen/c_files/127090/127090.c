/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((((((var_3 ? var_7 : var_4)) < ((min(var_8, var_12)))))), (min(var_12, -var_15))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_17 += (min(((min(var_4, var_0))), var_5));
                    arr_7 [i_0] [i_1] [i_2 - 1] [i_2 - 1] = var_2;
                }
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    var_18 = (min(var_18, (((-94 ? 5739 : -6)))));
                    var_19 = ((((-((min(var_13, var_2))))) != (((-var_13 != (~var_1))))));
                    arr_10 [i_1 + 1] [i_1 + 1] [i_1 + 2] = ((!((min((~var_3), (max(var_5, var_4)))))));
                    var_20 = ((((((max(var_2, var_1)) ^ ((((var_4 + 2147483647) >> (var_9 + 26))))))) ? (max(var_0, var_5)) : (((((min(var_2, var_0))) ^ (~var_15))))));
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            arr_15 [i_0] [i_1 - 1] [i_4] [i_5] [i_5] = (min(((var_8 ? (var_2 & var_1) : (((var_2 >> (var_8 - 1564498402)))))), (((((min(var_8, var_3))) ? ((min(var_15, var_2))) : var_3)))));
                            var_21 *= (min((min((!var_7), (var_1 & var_2))), ((min(var_2, ((var_8 ? var_14 : var_14)))))));
                            arr_16 [i_0] [i_0] [i_0] [i_5] = (max(((((!var_0) ? var_12 : (~var_9)))), (min(((var_5 ? var_5 : var_10)), ((max(var_9, var_8)))))));
                        }
                    }
                }
                arr_17 [i_0] [i_0] [i_0] = ((0 ? 0 : 4209562984937103937));
                arr_18 [i_0] [i_1 + 1] [i_0] = var_13;
            }
        }
    }
    var_22 = (min(var_22, (((-(var_3 != -var_13))))));
    #pragma endscop
}
