/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_16 = -var_4;
        var_17 = (177 / 1);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_18 = -7448010990713784572;

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                arr_8 [i_1] [11] [i_1] [11] = var_9;
                var_19 ^= (((arr_6 [i_1] [i_2] [i_3] [i_3]) ? (arr_6 [i_1] [i_1] [i_2] [i_3]) : 154));
            }
        }
        for (int i_4 = 3; i_4 < 18;i_4 += 1)
        {
            var_20 = ((var_11 ? 22 : 79));
            var_21 -= (((-1835646266 || 70) ? (106 && -1835646264) : var_8));
        }
        arr_11 [i_1] = ((-1835646264 ? 266820638 : ((var_6 ? 77 : 8))));
    }
    var_22 = var_11;
    #pragma endscop
}
