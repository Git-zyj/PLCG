/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = ((!(((((1673419762 ? 1 : 33292288)) % (((((arr_0 [i_0] [i_0]) + 9223372036854775807)) << (((-573361972609289633 + 573361972609289648) - 13)))))))));
        var_13 = (min(var_13, (arr_2 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_14 = ((((((1 ? (arr_1 [i_0]) : var_3)))) ? (var_9 + -108) : var_6));

            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                arr_9 [i_0] [i_0] [17] [i_0] |= (arr_2 [i_0] [i_0]);
                var_15 = -5;
            }
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                var_16 = (!-1856542450868990242);
                arr_14 [i_3] [i_1] [i_0] = min(((((var_11 ? var_2 : -19501)))), (min((((arr_7 [i_0] [i_0] [i_1] [i_3]) % 524032)), (arr_2 [i_0] [i_0]))));
                var_17 = var_0;
            }
            var_18 = ((((1673419762 ? (arr_8 [i_1] [3]) : 29392))));
        }
        var_19 = (min(var_19, ((min((((max(1, var_7)) % (((var_0 ? var_5 : (arr_1 [i_0])))))), (((~((2621547507 ? (arr_11 [i_0] [i_0] [i_0] [i_0]) : 1675254893))))))))));
    }
    for (int i_4 = 3; i_4 < 15;i_4 += 1)
    {
        var_20 = 7168;
        var_21 ^= var_7;
    }
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        var_22 = (min(var_22, (arr_1 [i_5 + 1])));
        var_23 -= 573361972609289632;
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    {
                        var_24 = (arr_22 [i_8] [i_5 + 3] [i_7]);
                        var_25 = var_10;
                    }
                }
            }
        }
    }
    #pragma endscop
}
