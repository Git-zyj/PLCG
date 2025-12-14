/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [8] = (min(((((37305 != (arr_0 [10]))) ? (((arr_0 [7]) ^ 0)) : -28)), (-2060569341 && 12)));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_14 &= ((((~((30 % (arr_8 [i_0] [i_2] [i_2] [i_2] [i_1] [i_0]))))) * (((arr_0 [i_1 + 1]) * (arr_0 [i_1 + 1])))));
                        var_15 ^= ((((((((-1 ? var_1 : -2))) ? var_3 : (arr_3 [5])))) ? (((~var_3) & ((2683103803831284959 ? 197 : (arr_3 [i_0]))))) : (((arr_7 [i_0] [i_1 + 1] [i_2]) ? (arr_7 [i_0] [i_1 + 1] [i_2]) : (arr_7 [i_0] [i_1 + 1] [i_0])))));
                        var_16 = (((arr_8 [i_0] [2] [2] [i_2] [i_2] [i_3]) > -3));
                        arr_9 [15] [5] [13] [i_3] [i_3] [i_3] = ((((var_4 == (!3))) ? (((((-2060569341 ? var_8 : var_13)) - (arr_7 [i_1 + 1] [11] [i_1])))) : -9223372036854775806));
                    }
                }
            }
        }
        arr_10 [i_0] = ((((((var_12 <= 3) && var_7))) - (((-16 && (((var_7 ? var_4 : 59))))))));
        var_17 = (-2060569341 != 25);
        var_18 = (min(var_18, ((min((min(((var_11 ^ (arr_4 [i_0] [15] [i_0]))), var_11)), (((((var_5 ? (arr_5 [i_0] [i_0]) : (arr_6 [6] [6] [i_0]))) <= ((min(156, (arr_7 [i_0] [i_0] [i_0]))))))))))));
    }
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        var_19 &= (arr_0 [i_4 + 1]);
        var_20 = (((-1 ? (((5026 || (arr_6 [i_4] [3] [i_4]))) : (!-3064444928082620367)))));
        arr_13 [11] = ((((min((min(var_1, 908511143)), (178 > var_4)))) == (max((max(-1971, -5965799187590733190)), (((255 >> (((arr_8 [11] [i_4] [8] [11] [11] [1]) + 1656821208)))))))));
        arr_14 [i_4] [i_4] = (arr_12 [i_4] [5]);
    }
    var_21 = (!var_9);
    #pragma endscop
}
