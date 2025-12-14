/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (~(((arr_0 [i_0] [i_0]) ? var_15 : (arr_1 [i_0] [i_0]))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_18 = (var_3 != var_9);
            var_19 = var_13;
            arr_6 [i_1] [i_1] = (arr_1 [i_1] [i_0]);
            var_20 ^= ((!((max(((max((arr_4 [i_1] [i_0]), (arr_3 [i_0])))), (((arr_1 [i_0] [i_1]) ^ (arr_5 [10] [i_0]))))))));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_21 |= 8388600;
            arr_9 [i_0] [i_2] [i_0] = max((!1), ((var_4 ? var_6 : var_14)));
            arr_10 [i_0] [i_0] [3] = (-32767 - 1);
            var_22 = -var_12;
        }
        var_23 = (((!-1) ? ((((arr_0 [i_0] [i_0]) ? (arr_5 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) : (max(var_8, var_5))));
        var_24 = (((((((-1 ? 1 : 1)) << (1 >= -1)))) ? ((min(798084862, (arr_5 [i_0] [i_0])))) : ((-var_8 ? var_14 : (((arr_1 [i_0] [i_0]) ? 8011687143967870334 : -1739458359))))));
    }
    var_25 = var_6;
    #pragma endscop
}
