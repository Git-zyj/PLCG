/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 15747556740453374679;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_11 = (((arr_1 [i_0] [i_0]) & (arr_1 [i_0] [i_0])));
        var_12 |= ((576460752303423487 >> ((((576460752303423501 ? var_7 : (arr_0 [i_0]))) - 4982319980230364715))));
        arr_3 [i_0] = (((var_2 - (arr_0 [i_0]))));
        arr_4 [i_0] = (max(((2147483647 ^ ((0 ? 17870283321406128108 : 255)))), (max(-576460752303423487, ((-2147483621 ? (arr_2 [i_0]) : var_7))))));
    }
    var_13 = var_3;
    var_14 = ((((min(var_4, -2147483647))) ? ((max(0, var_9))) : ((((max(var_2, 2147483621))) ? 67 : (min(576460752303423487, 0))))));
    #pragma endscop
}
