/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (max((arr_2 [i_0]), (((arr_0 [i_0]) >> (((arr_2 [i_0]) + 117))))));
        var_12 = -var_6;
        arr_4 [11] = ((max(var_2, (arr_0 [i_0]))));
        var_13 &= 2233785415175766016;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_14 = ((~(arr_0 [i_1])));
        var_15 = ((((max(122, -96))) >> (-2137172004470489794 + 2137172004470489810)));
    }
    var_16 = var_9;
    var_17 = (min(var_17, var_5));
    #pragma endscop
}
