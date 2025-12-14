/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (472883174 >> ((((var_11 ? var_9 : var_5)) - 85)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [8] &= (((arr_7 [2] [2] [i_2] [2]) ? var_3 : var_8));
                    var_14 = 472883176;
                    arr_10 [i_0] [7] [i_2] [i_2] |= ((!(((var_8 ? 252 : (-32767 - 1))))));
                    var_15 = (((var_9 >> (var_10 - 382741261928116991))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        var_16 = var_3;
        var_17 = ((3822084120 >> (((-9369 & -9369) + 9397))));
        var_18 = var_11;
    }
    var_19 = ((+((((!var_2) || 5533917798063032172)))));
    #pragma endscop
}
