/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = -12941;
        var_18 -= (max((arr_1 [i_0]), 12941));
    }
    for (int i_1 = 1; i_1 < 6;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_7 [i_1] [i_1 + 1] [i_1] = (max(((min(255, (arr_6 [i_1 + 1] [i_2])))), 3));
            var_19 = -12936;
            arr_8 [i_2] = 12940;
        }
        arr_9 [i_1 + 3] = ((-12924 ? 288230376151711744 : -10));
        var_20 = (((((((max((arr_3 [i_1 + 1]), 10))) ? 5 : (arr_0 [i_1 + 1])))) ? ((var_14 ? ((max(162, 1))) : ((var_13 ? (arr_0 [i_1]) : (arr_0 [i_1]))))) : ((var_3 - ((max(12934, 9)))))));
    }
    for (int i_3 = 2; i_3 < 18;i_3 += 1)
    {
        arr_12 [i_3] = ((~(((var_2 ? var_8 : var_8)))));
        arr_13 [i_3] [i_3 + 3] = var_8;
    }
    #pragma endscop
}
