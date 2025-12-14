/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_0] [i_0] = 18002013431936671337;
                    var_15 = (-127 - 1);
                    arr_9 [i_1] = 124;
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                {
                    arr_12 [11] [i_0] [i_0] [i_0] = 124;
                    arr_13 [i_3] [2] [2] &= 422212465065984;
                    arr_14 [i_0] [1] [i_0] = 53488256;
                    arr_15 [4] [1] [2] = -124;
                }
                arr_16 [0] [i_1] [0] = 18002013431936671337;
            }
        }
    }

    for (int i_4 = 4; i_4 < 13;i_4 += 1) /* same iter space */
    {
        var_16 = 116;
        arr_19 [i_4] = 9887260243973725435;
    }
    for (int i_5 = 4; i_5 < 13;i_5 += 1) /* same iter space */
    {
        var_17 += 123;
        var_18 = 127;
        var_19 += 1;
    }
    var_20 = 11099;
    #pragma endscop
}
