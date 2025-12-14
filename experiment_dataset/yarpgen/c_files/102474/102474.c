/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        var_17 -= ((var_4 ? var_2 : var_3));
                        var_18 = -var_3;
                        var_19 = ((~((var_4 ? var_8 : (arr_6 [i_0] [i_3] [i_3])))));
                    }
                    var_20 = (~var_9);
                    var_21 = var_14;
                    var_22 = (arr_7 [i_0] [i_0] [i_0] [5]);
                }
                var_23 = (min(var_23, ((((6 ? var_8 : var_0))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                var_24 = (max((((~var_2) ? ((var_5 ? var_15 : var_5)) : ((min(var_8, var_11))))), (((max(var_0, var_3))))));
                var_25 ^= (((max((arr_6 [i_4] [i_5] [i_5]), (arr_6 [i_4] [i_4] [i_4]))) == ((((((max(-15, -64))) >= (var_15 + var_0)))))));
                var_26 = var_7;
                arr_16 [i_4] [i_4] = (arr_7 [i_4] [i_4] [i_4] [i_5]);
                arr_17 [i_4] = (((((var_10 ? (arr_1 [i_4] [i_5]) : 8240841152987607935))) ? (var_14 <= var_6) : -6));
            }
        }
    }
    #pragma endscop
}
