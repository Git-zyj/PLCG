/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~-1);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            var_16 *= (min(1, var_12));
            arr_5 [i_1] = ((((min(var_5, var_9))) || (((arr_1 [i_0]) || (var_10 || var_13)))));
            arr_6 [i_1] = var_3;
            var_17 = 0;
            var_18 -= (((464924189627517702 + -26033) - var_0));
        }
        arr_7 [i_0] [i_0] = max((arr_1 [i_0]), (255 < -2));
        arr_8 [3] [3] &= (min(var_7, (min(((min(968, 26047))), (4294967295 - 7)))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] [i_2] = (-26013 ? 968 : 4611686018427387903);
        var_19 = 7427894683925610025;
        var_20 |= (((((33 + ((~(arr_11 [i_2])))))) + var_7));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_21 = var_10;
        arr_16 [i_3] [i_3] = (~26016);
        arr_17 [i_3] = (((~(!54887))));
        arr_18 [i_3] = ((~(~var_9)));
    }
    #pragma endscop
}
