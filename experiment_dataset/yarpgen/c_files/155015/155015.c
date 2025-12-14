/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((111 & (var_8 % var_9)))) ? 2020999433 : (((~var_7) ? (!var_6) : ((var_10 ? 32254 : -295765413)))));
    var_12 = 65504;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_2] = ((24240 ? 63 : 1161744390));
                    var_13 = var_9;
                }
            }
        }
    }
    var_14 *= var_6;

    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_15 = 1;
        var_16 = (max(var_16, (!-1479179704001120749)));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_17 = (min(var_17, (((-(arr_11 [i_4]))))));
        var_18 ^= (~var_2);
        arr_13 [i_4] = 7;
        var_19 = 1;
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_20 = (((((65496 ? -0 : 12751023677899418050))) ? ((max(1, 0))) : ((7 ? ((max(var_5, var_9))) : ((1 ? 1 : 18446744073709551615))))));
        arr_16 [i_5] = 3;
    }
    #pragma endscop
}
