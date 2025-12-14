/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_3 == ((var_7 ? (15840 > -15840) : var_0)));
    var_17 = ((1 * (var_1 | var_12)));
    var_18 = ((-((var_11 ? (~var_12) : (var_3 | var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_19 |= (arr_13 [i_1 - 2] [i_1] [i_4] [i_4] [i_4]);
                                arr_14 [i_0] [i_0] [i_3] [i_4] = ((~(3112301875 > 1)));
                                arr_15 [i_0] [i_0] [0] [i_0] [i_0] [i_0] [i_0] = (((((max((min((arr_0 [i_0]), (arr_11 [i_1]))), ((min(-23311, -15840))))))) * ((23311 ? 3532884601 : 0))));
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_1] = var_5;
            }
        }
    }
    var_20 += var_3;
    #pragma endscop
}
