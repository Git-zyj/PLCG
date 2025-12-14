/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min((1258391846397497879 == 0), var_3))) ? var_16 : 1));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = (arr_0 [i_0]);
        var_21 = (arr_1 [0]);
        var_22 = ((!(((((((arr_1 [i_0]) ? (arr_1 [12]) : (arr_0 [i_0])))) ? ((-(arr_2 [i_0] [i_0]))) : (arr_2 [i_0] [i_0]))))));
    }
    for (int i_1 = 4; i_1 < 24;i_1 += 1)
    {
        var_23 = ((((min((arr_3 [i_1]), (arr_4 [i_1 - 1] [i_1 - 2])))) >= -1258391846397497879));
        var_24 = max((-1258391846397497880 - 21480), ((((arr_6 [i_1 - 2]) ? (arr_6 [i_1 - 4]) : (arr_6 [i_1 - 3])))));
    }

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_25 = (((((arr_6 [i_2]) ? (arr_10 [i_2] [i_2]) : (arr_10 [6] [i_2]))) - (arr_6 [i_2])));
        var_26 = 9910;
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_27 += (arr_6 [i_3]);
        var_28 = ((-(min((arr_12 [12]), 1))));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_29 = (max(((max((arr_4 [i_4] [i_4]), (arr_4 [i_4] [i_4])))), (((arr_3 [i_4]) & (arr_3 [i_4])))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
        {
            var_30 -= var_12;
            var_31 = (arr_17 [i_4] [i_5] [i_4]);
            var_32 = (((arr_3 [i_4]) ? -1864044876368978884 : -9911));
        }
        for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
        {
            var_33 = (arr_14 [i_6]);
            var_34 &= ((((((arr_19 [i_4]) ? (arr_20 [i_4] [i_4]) : (arr_20 [i_6] [i_4])))) > (max((arr_4 [i_4] [i_6]), -2624559263855928704))));
        }
    }
    var_35 |= ((max(var_10, 5915)));
    #pragma endscop
}
