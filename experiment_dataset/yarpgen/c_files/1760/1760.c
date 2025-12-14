/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(max(((min(1, var_6))), var_3))));
    var_11 = (~3485030047);

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_12 = var_0;
        var_13 *= 809937252;
        arr_4 [i_0] [i_0] = ((-((~(!var_8)))));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_14 = ((-(arr_5 [i_1])));
        arr_7 [i_1] = (min((~3005504258), -var_0));
        arr_8 [i_1] = (-2147483647 - 1);
        arr_9 [i_1] [i_1] = (max((min(var_4, var_8)), ((-(~456558128)))));
        arr_10 [i_1] = (((((!(arr_5 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_15 = (min(4941, 8282526784037507622));
        var_16 *= (max((((!((min((arr_12 [i_2]), var_1)))))), (~var_8)));
        arr_13 [i_2] = ((~((~(~var_5)))));
    }
    #pragma endscop
}
