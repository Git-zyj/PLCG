/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max(((11396224346948694085 ? var_2 : var_5)), var_9)));

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_18 ^= ((3758096384 ? 3201025177 : var_1));
        var_19 += var_4;
        arr_2 [i_0] = ((536870911 ? (~-2010188103) : (min(1, 1023))));
        var_20 = (max(var_20, ((min(1, 142629733)))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_21 = (((2829711427 == -18) & 14120797870785646198));

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_22 = ((((((arr_4 [3] [i_1]) || 1619339924))) != ((((var_7 < (arr_4 [i_2] [i_2]))) ? (arr_3 [i_2]) : (var_0 <= 124)))));
            var_23 = (max(var_23, (min((arr_8 [i_1] [i_1] [i_1]), (arr_8 [i_1] [i_1] [i_2])))));
        }
    }
    #pragma endscop
}
