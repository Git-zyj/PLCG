/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_11 *= var_2;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_12 += ((!(arr_1 [i_0 + 1] [i_0 - 2])));

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_13 = (max(var_13, (((((99 ? 1620116057 : var_0)) >= var_9)))));
                var_14 = (max(var_14, ((((((2674851238 ? var_1 : 11630185955775282946))) ? (~var_10) : ((var_10 ? 1620116048 : (arr_1 [i_0] [i_1]))))))));
            }
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_15 += (arr_8 [i_0 - 2] [i_1] [i_3]);
                var_16 = (min(var_16, (arr_6 [i_0 - 1] [i_0 - 2] [i_0] [i_0 - 1])));
                var_17 = (max(var_17, ((((arr_2 [i_3] [i_3] [i_0 - 2]) ? (1620116035 & var_10) : (arr_9 [i_0] [i_0] [i_0 - 1] [i_0 - 2]))))));
            }
        }
        var_18 = (max(var_18, ((min((((arr_2 [i_0] [i_0] [i_0 - 1]) ? (arr_3 [i_0]) : (arr_3 [i_0]))), (arr_2 [i_0] [i_0] [i_0 - 2]))))));
        var_19 ^= ((1620116057 ? 2674851239 : 1));
        var_20 = (min(var_20, var_5));
    }
    var_21 = (max(var_21, var_8));
    var_22 &= (min((-127 - 1), 1620116057));
    #pragma endscop
}
