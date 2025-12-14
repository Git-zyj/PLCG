/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += ((~var_12) >> ((((27255 ? 8796093022207 : 254)) - 8796093022188)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] |= ((((max((arr_4 [i_0] [i_0] [i_0]), (((-2147483647 - 1) & (arr_4 [i_0] [i_1] [i_1])))))) ? (min((8796093022207 + -6040666287796650260), (arr_3 [i_0]))) : (max(var_14, var_5))));
                var_19 = ((min(var_8, (arr_1 [i_1]))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_20 = (((((-8796093022201 ? (arr_3 [i_2]) : (arr_7 [i_2])))) ? (((var_6 && (arr_9 [i_2])))) : ((var_8 ? (arr_0 [i_2]) : var_17))));
        arr_10 [i_2] [i_2] = var_1;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_15 [i_2] = ((+(((arr_2 [i_3]) ? (arr_12 [i_2] [i_3] [i_4]) : var_17))));
                    var_21 = ((-(arr_4 [i_4] [i_3] [i_2])));
                }
            }
        }
    }
    var_22 = var_10;
    #pragma endscop
}
