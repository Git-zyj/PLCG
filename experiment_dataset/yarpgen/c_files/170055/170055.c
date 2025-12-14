/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 = (((arr_2 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
        var_21 = ((~var_13) ? (arr_1 [i_0] [i_0]) : var_1);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_9 [i_1] [8] [i_1] = (((arr_3 [i_2] [i_1]) | ((var_3 ? 17504759263863911623 : var_19))));
            var_22 = ((((-(arr_3 [i_1] [i_1])))) ? 149 : (arr_3 [i_2] [i_1]));
        }
        arr_10 [4] [i_1] &= var_19;
        var_23 = var_8;
        arr_11 [i_1] &= (-(var_9 | 17504759263863911623));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            {
                arr_17 [i_3] [i_3] = var_1;
                arr_18 [i_3] = ((-(((((var_12 ? (arr_8 [i_4]) : (arr_7 [i_3] [i_3] [i_3])))) ? (((arr_12 [6] [9]) ? var_8 : var_5)) : 50589))));
                arr_19 [i_3] [i_4] [i_4] = ((var_12 >> (((((arr_8 [i_3]) | 941984809845640018)) - 18446744073709547497))));
            }
        }
    }
    var_24 &= (((var_3 ? ((2 ? 15649 : 50579)) : ((var_19 ? var_19 : var_19)))));

    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        arr_23 [i_5] = ((~(~var_4)));
        arr_24 [i_5] [i_5] = (!0);
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 23;i_7 += 1)
        {
            {
                var_25 |= (((arr_25 [i_6]) ? ((((arr_25 [i_7]) ? (arr_27 [i_7] [i_7]) : var_13))) : ((((((arr_28 [i_6] [i_6] [i_7 + 1]) ? var_6 : 34096))) ? (2147483647 > 0) : ((14922 ? -94 : 0))))));
                var_26 = ((2159764713 >> (50589 - 50572)));
                arr_29 [i_6] [14] [i_6] &= ((!(14935 | 107)));
                var_27 = var_11;
            }
        }
    }
    #pragma endscop
}
