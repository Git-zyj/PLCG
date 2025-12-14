/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_12;
    var_18 = var_4;
    var_19 = (~var_13);

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = ((-(arr_1 [i_0])));
            arr_6 [i_0] = (arr_3 [i_1]);
            arr_7 [i_0] = (((-(((!(arr_1 [i_1])))))));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_12 [i_0] = arr_0 [i_0];
            var_20 = (((~var_2) ? ((((-32767 - 1) < -36371640))) : (((((36371640 ? var_1 : var_8))) ? 111 : ((1604468926 ? var_14 : 36))))));
        }
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            arr_15 [i_0] = (((var_10 ? 57 : -var_10)));
            arr_16 [i_0] [i_0] = ((~((((28319 / var_8) < (arr_13 [i_0] [i_3]))))));
            var_21 = (~(arr_3 [0]));
        }
        var_22 += (max(((min((arr_2 [i_0 - 1]), (arr_2 [i_0 - 1])))), (~-564363942)));
        arr_17 [i_0] = (arr_13 [4] [i_0]);
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_20 [i_4] = ((!((((((5255643030898134278 ? 28319 : 2433896462))) ? (!var_1) : (32767 && 64892))))));
        arr_21 [i_4] = (arr_1 [20]);
    }
    #pragma endscop
}
