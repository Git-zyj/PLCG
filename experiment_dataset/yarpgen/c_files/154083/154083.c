/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    var_12 = (((var_8 ? 1 : var_2)));

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_13 *= var_9;
        var_14 = -var_9;
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1 + 1] = ((-((1637939237 ? 4698 : 10597974955918772367))));
        var_15 = (min(var_15, var_9));
        var_16 = 1;
        arr_7 [i_1] = (((((1112682868922407084 ? 16786 : 1))) ? (((((1 ? 1 : 1))) ? (arr_5 [i_1] [i_1]) : (arr_2 [i_1 - 1]))) : 1));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        var_17 = (arr_10 [i_2 + 4]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 14;i_4 += 1)
            {
                {
                    var_18 = (max(var_18, (((15 | (arr_17 [i_4 + 1] [i_3] [i_4 + 1] [0]))))));
                    var_19 += ((-1 ? 0 : (arr_15 [i_2 + 2] [i_2 + 3] [i_2 + 2])));
                    arr_18 [i_4] [i_3] [i_2] [i_4] = (((14640799971574292986 * 1) ? 700856811 : (arr_4 [i_2 + 2])));
                }
            }
        }
    }
    #pragma endscop
}
