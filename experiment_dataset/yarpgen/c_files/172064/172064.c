/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -var_6;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_17 = ((51 ? 1 : 1));
        var_18 = (max(var_18, ((((((var_9 ? var_13 : var_4))) || (((var_13 ? var_11 : var_8))))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_8 [0] [6] [i_1] = var_11;
            var_19 &= ((4294967294 ? var_2 : 13));
        }
        var_20 *= ((0 ? (-51 <= var_9) : 255));
        var_21 += ((var_8 ? var_1 : var_13));
        var_22 = -var_11;
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_12 [i_3] = var_8;
        var_23 = (((((var_5 ? ((var_10 << (var_13 - 495098674399564902))) : var_10))) ? (1 - -110) : var_2));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        arr_15 [7] = (((((var_7 ? var_1 : var_7))) ? var_3 : var_0));
        var_24 *= ((var_0 ? var_4 : ((-7491693889612250805 ? 1 : 4784))));
        var_25 = (((((var_12 ? var_3 : var_0))) ? var_5 : var_2));
    }
    #pragma endscop
}
