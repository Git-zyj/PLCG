/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-((~((var_1 ? var_10 : var_9))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0] &= (((((-(arr_2 [i_0] [i_0])))) * -7004748831591368078));
        var_16 = ((((!(arr_2 [i_0 - 3] [i_0 - 3]))) ? (~var_12) : ((((!(arr_0 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_17 = 0;
        var_18 *= (((var_14 + 2147483647) << (max(var_14, ((0 ? 23 : 0))))));
        var_19 = (-(arr_2 [i_1] [i_1]));

        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            arr_9 [i_2] [i_2 + 1] = -1;
            arr_10 [i_2] [i_2] = ((min(var_8, 0)));
            arr_11 [i_2] [i_2] = (!4341649816749073999);
        }
    }
    var_20 ^= ((((!((max(var_3, var_13)))))) * 0);
    #pragma endscop
}
