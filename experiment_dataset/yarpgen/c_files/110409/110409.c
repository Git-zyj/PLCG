/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;
    var_21 ^= 0;
    var_22 = ((((((min(var_3, 1))) && (var_15 && 314558085))) && var_11));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_23 = (max(var_23, ((((!var_9) ? 0 : var_8)))));
                        var_24 -= var_17;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 18;i_5 += 1)
            {
                {
                    var_25 &= 5753120045646315881;
                    arr_15 [i_0] [i_4] [i_4] = -1643697440;
                }
            }
        }
        var_26 = (arr_12 [i_0] [i_0] [i_0]);
        var_27 -= (min(((max((1332091424 / var_2), 27743))), (min(((1643697417 ? var_17 : (arr_2 [i_0] [i_0]))), ((min(1, 1)))))));
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_28 = (min(var_28, ((((arr_1 [i_6]) ? var_14 : (min((arr_13 [i_6] [i_6]), (arr_13 [i_6] [i_6]))))))));
        var_29 -= (arr_12 [i_6] [i_6] [i_6]);
        var_30 = (((((254 & var_14) / (((max((arr_18 [i_6] [i_6]), var_12))))))) ? (254 / 18446744073709551615) : ((min(1, (arr_0 [i_6])))));
        arr_19 [i_6] = (((((-2468 ? -26693 : var_5))) != (((arr_8 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) ? (!1) : 1))));
    }
    #pragma endscop
}
