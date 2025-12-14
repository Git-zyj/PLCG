/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_2 + (((max(var_1, (var_6 || 2818391458))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 2147483647;
        arr_3 [2] = ((((max(((max(var_9, var_11))), (((arr_1 [i_0] [7]) ? (arr_0 [i_0]) : 0))))) ? ((var_2 ? (!var_0) : 4294967295)) : var_2));
        arr_4 [i_0] [i_0] = (((((((var_7 || (arr_1 [i_0] [i_0])))) + (max(var_0, var_8)))) + 2147483647));
        arr_5 [1] [1] = (((max((-2147483647 - 1), 1))) ? var_11 : 255);
        arr_6 [i_0] = (min(var_3, 1));
    }
    #pragma endscop
}
