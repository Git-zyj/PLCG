/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~(((-105 && var_0) / ((104 ? var_18 : var_17))))));

    for (int i_0 = 1; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (((-(min(2204600761, var_17)))));
        var_21 = (~19);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_22 += 136339441844224;
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 16;i_4 += 1)
                {
                    {
                        var_23 = (min(var_23, 19581));
                        var_24 -= (((19980 - var_4) ? 4294967279 : var_13));
                    }
                }
            }
        }
        arr_15 [i_1] = (var_17 * (var_5 >= 6745338519152656550));
        var_25 = (((((var_17 ? var_16 : var_3))) ? 67 : (231 / var_4)));
    }
    var_26 = (min(((max(-var_18, 231))), (min((19 / 104), var_19))));
    #pragma endscop
}
