/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_10 = (max(var_10, (((var_5 * (((((-2147483647 - 1) / 2602382237012499572)) * -var_5)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, ((((((var_7 && (-2147483647 - 1)))) == -var_6)))));
                    var_12 = (min(var_12, (4311820250375245282 || 4311820250375245267)));
                    arr_6 [i_1] [i_2] = 2147483625;
                    arr_7 [i_0] [i_2] = -var_9;
                }
            }
        }

        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            var_13 = (max(var_13, ((((var_4 + var_0) ? (((1360604558 / (var_1 || var_6)))) : var_0)))));
            var_14 = (var_9 - var_8);
            var_15 = (max(var_15, ((max(1, ((((var_7 ? var_7 : 1735865529)) < (((0 ? var_6 : var_2))))))))));
        }
    }

    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_16 = (min(-var_2, (314554382 / var_1)));
        arr_12 [i_4] = (~var_2);
        var_17 *= var_2;
        var_18 = -var_5;
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_19 = (--3862621892528923891);
        var_20 = ((var_5 ? 22 : 65536));
    }
    #pragma endscop
}
