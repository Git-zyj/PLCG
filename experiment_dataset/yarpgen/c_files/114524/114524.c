/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = (arr_1 [i_0]);
            arr_6 [i_0] = (min((((~(arr_2 [i_0])))), (((((arr_1 [i_0]) ? var_2 : var_2)) & (arr_2 [i_0])))));
            var_12 = ((var_8 << (((((arr_4 [i_0] [i_0] [9]) ? (~var_6) : (~var_9))) + 41))));
            var_13 &= var_8;
        }
        arr_7 [22] &= (min(var_2, ((-(arr_0 [i_0])))));
        var_14 -= ((((!(var_4 || var_9)))));
    }
    var_15 = (min(((min((min(var_6, var_0)), (!var_11)))), (min(((min(var_3, var_11))), var_4))));
    var_16 = (~-var_8);
    #pragma endscop
}
