/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (max((((34359738368 ? -1539721704 : (arr_1 [i_0 - 3])))), (((arr_2 [i_0 - 1] [i_0 - 4]) ? (arr_1 [i_0 - 1]) : (arr_0 [i_0 + 1] [i_0 - 1])))));
        var_12 = (min(var_12, ((max(((min(15, (arr_1 [i_0 - 1])))), (max(-28, (((1539721719 | (arr_1 [i_0])))))))))));
    }
    var_13 = (min(var_6, (((var_10 ? 1562810688 : 0)))));
    #pragma endscop
}
