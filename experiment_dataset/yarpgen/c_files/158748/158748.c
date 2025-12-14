/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] = -123;
            arr_6 [i_0] [i_0] [i_1] = ((~(arr_4 [i_0] [i_1])));
            var_15 = 18446744073709551614;
            arr_7 [i_0] = (!8);
            arr_8 [i_0] = 13667344219165869587;
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_16 = 1;
            arr_11 [i_0] [i_0] = 1;
        }
        arr_12 [i_0] = (((((1 ? 167 : 13667344219165869595))) ? ((((1 - -68) ? var_2 : ((max(var_2, -18)))))) : (max(((max(119, -17))), (max(1482837687932046532, var_6))))));
    }
    var_17 = (max(1, 1));
    #pragma endscop
}
