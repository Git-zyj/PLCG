/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (-1 ? (((~(arr_1 [5] [5])))) : (arr_0 [i_0]));
        var_19 = (max(var_19, 2023764016));
        arr_4 [i_0] [i_0] = (((arr_0 [i_0]) ? (arr_0 [i_0]) : (min(1, (arr_0 [i_0])))));
        arr_5 [i_0] = ((203 ? 1748791423 : 2023764038));
        arr_6 [i_0] = (((+(max((arr_2 [i_0] [i_0]), 1287650586)))));
    }
    var_20 = (min(var_11, var_0));
    var_21 = -2023764020;
    #pragma endscop
}
