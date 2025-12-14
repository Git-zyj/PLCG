/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = ((!((max((max(var_1, var_8)), (~var_0))))));
        arr_4 [i_0] = (~((~((min(var_3, var_3))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_10 = (~var_1);
        var_11 = ((((max((max(var_6, var_4)), ((max(var_0, var_3)))))) ? (((~(!var_6)))) : (~var_8)));
        var_12 = (max((min((!var_5), (min(var_7, var_1)))), (max((max(var_7, var_4)), (((var_7 ? var_2 : var_5)))))));
    }
    var_13 *= (max((max(((var_8 ? var_6 : var_9)), ((min(var_5, var_4))))), ((max((!var_8), (max(var_0, var_1)))))));

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_9 [i_2] = var_8;
        arr_10 [i_2] [14] &= (((~(~var_5))));
        arr_11 [4] [4] |= var_4;
        var_14 = (max((!var_8), (min((~var_5), var_3))));

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_15 = var_4;
            var_16 = (max(((~((var_6 ? var_8 : var_1)))), ((min((~var_0), (~var_4))))));
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_17 = (min(var_1, ((~(~var_2)))));
            var_18 = ((~((~(max(var_8, var_3))))));
            var_19 ^= (min((min(var_6, var_4)), var_5));
        }
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        arr_20 [i_5] [i_5] = ((-((((max(var_9, var_7))) ? var_4 : var_9))));
        arr_21 [i_5] = (min((min((max(var_0, var_2)), var_6)), var_6));
    }
    #pragma endscop
}
