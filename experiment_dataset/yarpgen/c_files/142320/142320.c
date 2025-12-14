/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_14 = (max(var_14, var_0));
            arr_5 [i_1] = (~-30478);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_15 ^= var_2;
                        var_16 = var_1;
                        var_17 ^= (max(((var_10 - (-3449331735840200866 / -2306281598238950715))), (((((var_2 ? 255 : 1))) ? var_1 : 2306281598238950715))));
                        var_18 = (((((min(var_10, var_8)))) - 2306281598238950714));
                        var_19 *= ((((var_13 >> (128 - 117))) >= var_13));
                    }
                }
            }
        }
        var_20 = (((((var_10 / 206) * 1)) / var_1));
        arr_12 [i_0] = (min(132, -3449331735840200866));
        var_21 = (max(var_21, (((-(var_10 | -5369131457304396480))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_22 = (max(var_22, ((((min(var_4, (0 & -1377275098))) + var_0)))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    arr_19 [i_5] = (max((12990714485796882882 == var_2), 15519));
                    var_23 = var_5;
                }
            }
        }
    }
    var_24 ^= (((((9007190664806400 ? 1 : var_3)) * var_13)));
    #pragma endscop
}
