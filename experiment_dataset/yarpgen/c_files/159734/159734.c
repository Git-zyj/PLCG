/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_21 = (max(var_21, (arr_1 [i_0])));
        var_22 |= 219;
    }
    for (int i_1 = 4; i_1 < 18;i_1 += 1)
    {
        arr_5 [i_1 - 3] [i_1 - 3] = var_4;
        arr_6 [i_1] = ((((1 ^ (arr_2 [14] [i_1])))));
        var_23 = (max(var_23, (min(1, -23471))));

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_24 = (max(var_24, (arr_8 [i_1] [18] [i_1 - 3])));
            var_25 = ((((arr_2 [i_1 + 1] [i_2]) >= (arr_2 [i_2] [i_1 - 4]))));
            var_26 = var_18;
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_27 = (max(var_27, (((var_8 ? (arr_10 [i_3] [i_4]) : (arr_11 [i_3]))))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    {
                        var_28 = (((23471 ? (arr_21 [i_4] [6] [10]) : var_14)) < (arr_17 [i_6 - 1] [i_6] [i_6] [i_6 - 1]));
                        var_29 = (arr_9 [i_5] [i_4]);
                        var_30 |= (arr_17 [i_6] [12] [i_3] [i_3]);
                        var_31 = (arr_15 [i_4] [i_4]);
                    }
                }
            }
            var_32 = arr_8 [i_3] [0] [1];
            var_33 = 255;
            var_34 &= ((178 ? (589702181 + 65535) : (arr_4 [i_4])));
        }
        var_35 = ((53513 && (arr_8 [18] [14] [i_3])));
    }
    var_36 += var_8;
    #pragma endscop
}
