/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_15 = 0;
            var_16 = -123;
        }
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    {
                        var_17 = (2036532778 & 8953644285456981459);
                        var_18 = -1;
                        arr_14 [i_0] [i_0] [14] [i_0] [i_0] [i_0] = 1;
                    }
                }
            }
        }
        var_19 = 56036;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_20 = 65535;

        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            var_21 = (max(var_21, 7692));
            arr_23 [i_5] [7] [i_6] = (-9223372036854775807 - 1);
            arr_24 [i_5] = 32767;
        }
        var_22 = (46 || 1);
        arr_25 [i_5] |= (57844 + 107);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        var_23 = (min(var_23, ((7692 ? 665139802585591552 : 57844))));
        arr_28 [i_7] [i_7] = -18478;
    }
    var_24 ^= var_9;
    var_25 &= (max((((1280 ? 12615756253045701879 : var_8))), var_11));
    var_26 = ((((min(var_1, var_5))) ? ((var_8 ? var_13 : (((0 << (-91 + 132)))))) : ((min(var_7, ((5830987820663849747 ? 4294967267 : 65535)))))));
    var_27 = 255;
    #pragma endscop
}
