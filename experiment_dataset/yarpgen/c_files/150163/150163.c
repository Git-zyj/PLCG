/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((var_10 ? ((((var_5 ? 8553340681645846594 : 0)))) : ((0 ? (~32767) : var_3)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 -= (~82);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_21 |= 188;
                    arr_6 [i_0] [i_0] [i_0] [9] = 235;
                    var_22 = ((((max((1899852584 >= 7), var_18))) & ((+(((-2147483647 - 1) / 1))))));
                    var_23 -= ((~(((!(((-4155503073926912154 ? (arr_4 [i_0] [i_0] [i_0] [6]) : 26384))))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_24 = (((~127) | (((arr_9 [i_3]) ? (arr_9 [i_3]) : (arr_9 [i_3])))));
        arr_10 [i_3] = ((((!(arr_8 [i_3] [i_3])))));
        var_25 = ((!((((((114389888088924000 ? (arr_0 [i_3]) : 23))) ? var_2 : (2181431069507584 * 252))))));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 16;i_4 += 1)
    {
        var_26 = (min(var_26, (-32767 - 1)));
        var_27 = (((arr_14 [i_4 + 1]) ? (arr_14 [i_4 + 1]) : (arr_14 [i_4 - 1])));
        arr_15 [i_4] = var_16;
        arr_16 [i_4] = var_13;
    }
    var_28 = (((max(var_1, var_14)) > var_14));
    #pragma endscop
}
