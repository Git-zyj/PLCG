/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = var_7;
        var_14 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_5 [i_1] = ((!(~var_1)));
        var_15 = (arr_3 [i_1] [i_1]);
        arr_6 [i_1] = (arr_4 [i_1] [i_1]);
    }
    for (int i_2 = 3; i_2 < 19;i_2 += 1)
    {
        arr_9 [2] |= ((((((arr_7 [4]) ? var_6 : (!-100)))) ? (((((arr_4 [i_2 - 2] [i_2 - 3]) + 9223372036854775807)) << (((((arr_4 [i_2 - 1] [i_2 + 1]) + 5776717967070159538)) - 30)))) : (((arr_4 [i_2 - 2] [i_2 - 1]) | var_0))));
        var_16 = -11765203840200513501;
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_17 = (arr_11 [i_3]);
        var_18 = (28644 > -100);
    }
    var_19 = ((((var_5 != (((-961572319 ? 3560841124 : 67100672))))) ? (((var_5 + var_12) / (var_6 ^ var_2))) : (((var_0 != var_2) | ((var_9 ? var_6 : var_5))))));
    #pragma endscop
}
