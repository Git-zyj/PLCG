/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min((var_9 && -32760), -872275549492276798);
    var_19 -= ((((((max(8495889210146983691, var_1)) * var_12))) ? var_13 : var_7));

    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        arr_2 [i_0] [i_0 + 3] = var_7;
        var_20 = (min(var_20, ((min((((-2147483647 - 1) ? 5985820361774949350 : -1)), ((((arr_1 [i_0]) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0])))))))));
        arr_3 [i_0] [i_0] = (87 & 8958713119785833606);
        var_21 ^= (+(min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1]))));
        var_22 = (min(var_22, (arr_1 [i_0])));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = ((-((-(arr_5 [i_1 + 2])))));
        var_23 -= (arr_7 [i_1 + 4]);
    }
    #pragma endscop
}
