/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = var_5;
                var_14 = ((-(((arr_5 [i_0] [i_0] [i_1]) ? (arr_5 [i_0] [i_0] [i_1]) : var_3))));
            }
        }
    }
    var_15 &= ((var_9 ? (((1 ? 55560 : 0))) : ((var_8 ? (~var_12) : (~var_0)))));
    var_16 = var_10;

    for (int i_2 = 3; i_2 < 11;i_2 += 1)
    {
        var_17 = (~(arr_1 [i_2 + 2]));
        arr_9 [i_2 - 3] = (((arr_4 [i_2]) ? (((min(1, -17)))) : 1));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    arr_17 [i_2] [i_3] [i_4] = ((var_10 >= (((arr_10 [i_4] [i_3]) ? 55560 : (arr_10 [i_2 - 3] [i_3])))));
                    var_18 = ((~((-((min((arr_12 [i_3]), (arr_2 [i_3]))))))));
                    var_19 = ((55560 && ((((((65530 ? 14531633622719627435 : 3915110450989924160))) ? (9975 & 51645) : ((min(55560, 0))))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 17;i_5 += 1)
    {
        var_20 += ((-(~0)));
        arr_22 [i_5] [i_5] = ((var_5 ? (((14301478502357027348 ? 0 : 9962))) : 14531633622719627455));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_25 [i_6] = (~0);
        var_21 += (arr_23 [i_6]);
    }
    var_22 += ((var_4 ? (min(((max(var_11, 11363))), (var_7 ^ 3760))) : ((((!(((0 ? var_2 : var_7)))))))));
    #pragma endscop
}
