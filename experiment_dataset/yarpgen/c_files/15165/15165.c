/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((1 || ((min(((0 ? 0 : 18446744073709551615)), 4294967295)))));
    var_21 = var_15;
    var_22 -= ((min((max(0, 4294967295)), 64)));
    var_23 += (~4294967295);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_24 = var_13;
        arr_4 [i_0] = ((((min(var_19, (arr_0 [1] [i_0])))) ? ((((min(0, 0))) ? (var_5 + var_2) : (arr_2 [i_0]))) : (~17399272834895592033)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_7 [i_1] = (((var_7 ? (arr_5 [i_1]) : (arr_1 [i_1]))) != 0);
        arr_8 [i_1] [i_1] = -var_7;
        var_25 |= ((1047471238813959582 ? 4499875375850257839 : 4294967295));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_26 = (min(var_26, ((-((~(((arr_14 [9] [9] [i_4]) ? 17399272834895592033 : 18372))))))));
                    arr_16 [i_2] [i_2] [i_3] [i_4] = (((((1 + (min(0, 18372))))) ? ((min(var_17, var_6))) : 4294967295));
                    var_27 = ((((var_9 ? (max(var_1, 26068)) : -0)) * (min(1, 0))));
                    arr_17 [i_2] [i_2] [i_4] = ((1 % (((var_1 + 0) ? (1228555720 - var_12) : ((1047471238813959582 >> (-6902 + 6921)))))));
                    arr_18 [i_2] |= (((((+(((arr_13 [0]) - var_1))))) ? (var_6 <= 0) : var_2));
                }
            }
        }
        var_28 = ((0 ? 4294967295 : 1));
        arr_19 [i_2] [i_2] = (min(((min((((0 ? -13 : 1920))), var_13))), ((16287857981717340443 / (((max(-27342, var_12))))))));
    }
    #pragma endscop
}
