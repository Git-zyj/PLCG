/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_8, ((((((0 ? -796879911 : var_6))) ? ((255 ? var_1 : var_9)) : (max(var_5, -1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = (((-796879911 || (2147483647 - 252))));
                arr_5 [i_1] [i_1] = (9240 <= 18367110613722523051);
                arr_6 [i_1] [i_1] [i_1] = var_10;
            }
        }
    }
    var_12 = var_6;

    /* vectorizable */
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        var_13 = (((((110 ? -1545290907 : 1940821234))) ? 2147483647 : 1630008421));
        var_14 = var_8;
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    arr_17 [i_2] [i_3] [i_3] [i_4] = 35107;
                    arr_18 [i_2] [i_4] [i_3] = (var_1 ? 17081 : 796879911);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_15 = var_4;
            arr_23 [i_6] [i_5] = (127 * 0);
        }
        var_16 = 18446744073709551615;
        var_17 = (37 / 1);
    }
    #pragma endscop
}
