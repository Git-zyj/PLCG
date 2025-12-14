/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 7682;
    var_20 *= -15688;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (min(var_21, 13));
        arr_2 [i_0] &= (43551 <= 34);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] = (arr_3 [5] [5]);
        arr_7 [5] [7] = -1559954173;
        arr_8 [i_1] = 141;
        arr_9 [i_1] = ((-(arr_4 [i_1])));
    }
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        var_22 = (min(var_22, 143));
        arr_13 [i_2] = 17;
    }
    var_23 = (((4294967270 || 22458) && 0));
    var_24 = var_9;
    #pragma endscop
}
