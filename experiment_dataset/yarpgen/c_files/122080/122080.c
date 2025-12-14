/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = -2;
        arr_3 [i_0] [i_0] = ((~((var_6 ? 13 : var_13))));
        arr_4 [3] [3] = (~1);
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 15;i_1 += 1)
    {
        var_14 = (max(var_14, (((4 ? var_9 : 10)))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_15 = (max(var_15, 36));
            var_16 = (max(var_16, (-6196481254735353223 >= var_6)));
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_17 &= (var_2 > -var_1);
            arr_13 [i_1] [i_1] = var_3;
            var_18 &= 1;
        }
        var_19 = ((var_2 ? 2676957213 : 1));
    }
    var_20 = ((var_7 <= (((((((1 ? 65535 : -1))) != 18446744073709551599))))));
    #pragma endscop
}
