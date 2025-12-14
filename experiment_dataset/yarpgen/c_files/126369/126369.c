/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_13 *= (((var_3 != var_5) ? var_9 : (arr_0 [i_0 + 1])));
        var_14 = ((0 ? -23951 : 18446744073709551615));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 22;i_4 += 1)
                {
                    {
                        var_15 *= -0;
                        var_16 &= ((+((((~var_8) > ((9 ? var_10 : (arr_3 [i_1]))))))));
                        var_17 = (((var_8 > (arr_5 [i_2 - 2]))) ? (arr_7 [i_2] [i_2]) : ((((max(var_7, (arr_11 [i_1] [i_3] [i_1] [i_2])))) ? ((((arr_9 [i_1] [4] [i_3]) >= var_6))) : (((arr_2 [i_1] [i_1]) ? var_2 : (arr_8 [i_4] [i_2] [i_2]))))));
                    }
                }
            }
        }
        arr_12 [i_1] = ((((((arr_3 [i_1 - 1]) ? (arr_11 [i_1 - 1] [i_1 - 1] [i_1] [18]) : (arr_10 [i_1 + 1] [i_1])))) ? ((((arr_2 [i_1 - 1] [i_1 + 1]) ? (arr_2 [i_1 + 1] [i_1 + 1]) : var_9))) : (((arr_6 [i_1] [i_1]) ? 119 : (~14116776057685793171)))));
    }
    for (int i_5 = 1; i_5 < 7;i_5 += 1)
    {
        var_18 = (max(var_18, (((((((((var_2 ? var_9 : (arr_3 [18])))) ? (max(var_6, var_0)) : (arr_3 [i_5 - 1])))) ? (!var_9) : (max((((arr_3 [i_5]) * (arr_1 [14]))), var_10)))))));
        var_19 |= (((((~(arr_13 [i_5 + 3])))) ? (arr_13 [i_5]) : (var_11 >= 17688883142761690707)));
    }
    #pragma endscop
}
