/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_4;

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = var_12;
        var_19 -= var_16;
        var_20 = var_5;
        arr_5 [i_0] = var_3;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_21 = var_10;
        var_22 &= var_4;

        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            var_23 *= var_10;
            var_24 += var_16;
            var_25 = (max(var_25, var_13));

            for (int i_3 = 3; i_3 < 13;i_3 += 1)
            {
                arr_12 [i_1] [i_1] [i_1] = var_7;
                var_26 -= var_8;
            }
        }
        var_27 = (min(var_27, var_11));
        var_28 = var_12;
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        var_29 = var_9;
        var_30 *= var_2;
        var_31 -= var_5;
    }
    var_32 = var_2;
    var_33 = var_12;
    #pragma endscop
}
