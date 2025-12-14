/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    var_15 = var_1;
    var_16 ^= ((((((var_4 % var_0) ? 71 : -97))) ? (!111) : (max((~var_9), var_6))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((((!(-84 & -97)))) <= -97));
        arr_3 [i_0] = (((max(3499, var_10)) * (arr_1 [3])));
    }

    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_6 [1] [i_1] = (((((-23774 ? (-97 / var_5) : 1))) ? ((-6130707585020584038 ? -88 : 3512)) : (arr_4 [i_1] [i_1])));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_10 [i_1] [i_2] [i_2] = (!-var_0);
            var_17 = 74;
            arr_11 [i_2] = var_13;
            arr_12 [i_2] [i_2] = ((((~(1 != 3526))) & var_2));
        }
        var_18 = (max(var_18, (arr_4 [i_1] [i_1])));
        arr_13 [i_1] |= ((var_0 ? 2297637006768738990 : 0));
    }
    for (int i_3 = 3; i_3 < 15;i_3 += 1)
    {
        arr_16 [i_3] = (!var_7);
        arr_17 [i_3] = ((!(!var_4)));
        var_19 = (max((((var_5 >= 248) ? (max(4095, 6423803805756748648)) : 1)), var_3));
        var_20 = ((var_10 && ((max(var_2, ((((arr_15 [i_3]) ? var_11 : var_7))))))));
    }
    #pragma endscop
}
