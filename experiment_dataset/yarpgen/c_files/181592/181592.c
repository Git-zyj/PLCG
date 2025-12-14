/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    var_12 = ((0 / ((0 ? 0 : 2147483647))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_13 = 15;
        var_14 = (max(var_14, ((max((min(var_9, var_0)), (((255 >= (-5019640541831913308 ^ 764699607)))))))));
        arr_2 [i_0] &= (((3255837453 ^ 8) + (-16 || 252)));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_15 = (max(15948121529673464568, var_7));
                    arr_10 [i_1] [i_1] [i_2] = (((var_0 <= 1) + (185 <= var_4)));
                    var_16 = (~31);
                }
            }
        }
        arr_11 [i_1] [i_1] = (((var_2 / 274877382656) ^ var_7));
        var_17 = 2147483647;
        var_18 = var_6;
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        var_19 += (((-1 + 87) + (((((-2147483647 - 1) >= 8))))));
        var_20 = ((15 ? 0 : 3));
    }
    var_21 = 142;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 21;i_7 += 1)
            {
                {
                    var_22 = (min(var_22, ((((!255) + (var_10 ^ -7))))));
                    var_23 = ((((15 ? var_2 : (6144 / var_10))) ^ (((12288 >= 9223372036854775807) / (min(37, 2147483647))))));
                    arr_23 [i_7] [i_7] [11] = var_6;
                }
            }
        }
    }
    #pragma endscop
}
