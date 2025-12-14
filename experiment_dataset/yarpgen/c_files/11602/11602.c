/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_10 = arr_3 [i_0 + 2];
        arr_4 [i_0] [i_0] = (max((~1018960792), ((((10 - (arr_0 [i_0])))))));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_11 = ((!(~-995633163)));
        var_12 += (((325 / ((min(var_6, var_8))))));
        arr_9 [i_1] = (max(5, 58493));
        var_13 = arr_6 [i_1] [i_1];
        var_14 += ((-((~(arr_8 [i_1] [i_1 - 2])))));
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_15 *= (max(((((8925764069968997188 / 9520980003740554410) ? var_8 : ((8925764069968997188 ? var_1 : (arr_11 [i_2] [i_2])))))), (((0 - 248) - (max((arr_11 [i_2] [i_2]), 8925764069968997188))))));
        var_16 = (((~var_6) / ((max(((max(1, var_9))), var_8)))));
    }
    #pragma endscop
}
