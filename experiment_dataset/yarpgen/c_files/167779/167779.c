/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((max(var_2, var_10)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 |= ((((((arr_2 [i_0]) & 40053))) ? var_3 : 7870658164086889723));
        var_14 = 1;
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        var_15 = (((~var_7) ? (min(var_6, ((var_6 ? 107 : 5079328766486737980)))) : (((max(var_1, 86))))));
        var_16 &= (~11501600884534523948);

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_17 = (arr_7 [i_2 - 1] [i_1 - 3]);
            var_18 = ((((((127 ? 101 : 56480)))) <= var_5));
            arr_9 [i_1] [i_1] = (min((max(((4252640670 ? 9048 : 9352409760508806405)), -6630368809654352797)), ((max(var_5, (min(var_9, (arr_3 [i_1] [i_2]))))))));
            var_19 |= (((-(arr_7 [i_2 - 1] [i_1 + 2]))));
        }
    }

    for (int i_3 = 1; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_20 = 93;
        var_21 = (max(var_21, var_6));
        var_22 = 1;
    }
    for (int i_4 = 1; i_4 < 23;i_4 += 1) /* same iter space */
    {
        var_23 = (max(var_23, var_9));
        arr_17 [6] &= (max(((var_9 ? (var_11 / 13) : var_0)), ((max(1, 1)))));
        arr_18 [i_4] = (max(((min(((123 ? var_2 : 102)), ((min((arr_0 [i_4 + 1] [i_4]), var_6)))))), (((~0) ? 32760 : (max(3082040490636113865, -126))))));
    }
    var_24 -= var_11;
    #pragma endscop
}
