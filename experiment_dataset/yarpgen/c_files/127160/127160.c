/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = (((-(arr_1 [i_0]))));

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_1] = var_6;
            var_17 = ((((max((arr_1 [i_1 + 1]), (((var_7 * (arr_2 [i_0]))))))) && (arr_0 [i_1 - 2] [i_0])));
            var_18 &= (!18444492273895866368);
            var_19 = ((-(((var_4 / var_12) ? ((((arr_1 [i_0]) ? var_11 : var_9))) : (arr_1 [i_1 + 2])))));
            arr_5 [i_0] [i_1] = ((!(((((max(var_12, (arr_1 [i_0])))) ? (((-(arr_2 [i_0])))) : ((4253824107 ? (arr_2 [i_1]) : 4253824096)))))));
        }
    }
    var_20 = max((((var_10 - var_1) ? (var_12 > var_14) : (var_5 != var_10))), (((var_10 || (3758096384 % 7173)))));
    #pragma endscop
}
