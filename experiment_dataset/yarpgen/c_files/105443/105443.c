/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= ((((!(150 <= 150))) ? ((max((var_9 - 105), 0))) : 105));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = ((min(8191, ((1109023015 ? var_9 : -8999371230574826331)))));
                var_14 = (~-5293);
                arr_5 [i_0] [i_0] [i_0] = var_1;
            }
        }
    }
    var_15 = ((((99 ^ 4431) <= (35563 ^ var_2))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 23;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_3] [i_4] = ((8191 ? ((((-6861724965588510684 ? var_7 : (arr_6 [i_4]))) & 134)) : (((39525 & (((arr_8 [i_3] [i_4]) | 26010)))))));
                    var_16 = 1;
                    var_17 = (((arr_11 [1] [i_3]) ? (arr_7 [i_3 - 1] [i_4 - 1]) : var_10));
                    var_18 = 4673982873340991700;
                }
            }
        }
    }
    #pragma endscop
}
