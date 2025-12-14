/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_10 ? var_2 : var_8);
    var_16 = (~(max(3, var_0)));
    var_17 = (max((((var_1 == ((var_10 ? 130 : var_13))))), ((var_0 ? 0 : (~var_2)))));

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_18 -= (max((arr_0 [i_0 - 2]), (arr_2 [i_0 - 2])));
        var_19 = var_5;
        var_20 = ((~((min((arr_2 [i_0 - 1]), (arr_2 [i_0 - 1]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_21 += -19544;

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_22 *= ((31 ? (arr_4 [i_0 - 2] [i_1]) : (arr_9 [i_0 - 2] [i_1])));
                            arr_13 [i_1] [i_3] [8] [i_1] [10] [i_1] = ((31 ? 758544796 : 31));
                        }
                        var_23 |= -5466070285553948105;
                    }
                }
            }
        }
        arr_14 [i_0] [i_0] = (max((((-8222549700267932903 ? (arr_2 [i_0]) : (!1625207965925809625)))), (3536422491 / 1)));
    }
    #pragma endscop
}
