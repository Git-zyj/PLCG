/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-((~(arr_1 [i_0 + 1])))));
        arr_3 [3] [i_0] = (min(((var_4 < ((3013825854 ? 1 : 16)))), 1));
        arr_4 [i_0 + 1] = (((((((var_19 ? 65535 : (arr_0 [i_0])))) ? var_13 : var_3)) != (max((((var_2 ? (arr_0 [i_0]) : (arr_0 [i_0 + 1])))), (max(9136382893395769969, -8))))));
        arr_5 [i_0] = ((min(((min((arr_0 [11]), 255))), -4455049816896068278)) < 0);
    }
    var_20 |= var_6;
    var_21 = (~30939);
    var_22 = var_2;
    #pragma endscop
}
