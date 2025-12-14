/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((720732883 ? (((min(8986797755206755649, var_0)))) : var_14));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_17 = 8;
        var_18 = (((arr_0 [i_0] [i_0]) + (((-var_14 ? -14342 : ((-14341 ? -25796 : -25773)))))));
        var_19 *= min(var_5, ((((min((arr_1 [i_0]), var_7)) > ((((arr_0 [16] [16]) ? var_13 : var_14)))))));
        arr_2 [4] [i_0] = (min((((arr_1 [i_0]) % var_11)), (arr_0 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = (((((arr_3 [3]) ? -1 : 5899576669529299701)) <= (arr_3 [i_1])));
        arr_6 [i_1] = (arr_3 [i_1]);
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_20 = 14342;
            var_21 = var_15;
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 18;i_5 += 1)
            {
                {
                    var_22 = ((((var_13 >> (((~var_10) + 8822290712801930205)))) * (((-(arr_14 [8] [i_2] [i_5 - 2] [i_2]))))));
                    arr_16 [i_2] [i_4] [i_2] [i_5] = -5899576669529299702;
                }
            }
        }
        arr_17 [i_2] = (((var_5 || (arr_15 [5] [i_2] [12] [1]))));
    }
    #pragma endscop
}
