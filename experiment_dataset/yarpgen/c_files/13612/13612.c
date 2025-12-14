/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    var_18 = (+((-6110538189701913793 ? (-9223372036854775807 - 1) : -7488041059233299635)));

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((min((arr_2 [i_0 + 1]), (arr_1 [i_0 - 2] [i_0 + 1])))) ? (((((9223372036854775807 ? var_2 : (arr_2 [i_0])))) ? (arr_2 [i_0 - 3]) : -9)) : ((((!(!8436915544140418622))))));
        var_19 = 6559323242576438291;
        arr_5 [i_0] [i_0] = max(-4348212654819178834, 9223372036854775801);
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        var_20 = (~(((((arr_6 [i_1 + 2]) + 9223372036854775807)) >> (((arr_3 [i_1 - 3]) + 8782867136670929368)))));
        var_21 = ((!(((0 ? var_14 : (max((arr_6 [i_1]), -2799459493778763168)))))));
    }
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        arr_11 [i_2] = var_13;
        arr_12 [i_2] = var_10;
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                {
                    var_22 = arr_15 [i_4 + 1] [i_2];
                    var_23 |= max((-9223372036854775807 - 1), ((8413541874634188357 ? 831619881121883325 : var_4)));
                    var_24 = var_7;
                }
            }
        }
        var_25 = arr_7 [i_2 - 2];
    }
    #pragma endscop
}
