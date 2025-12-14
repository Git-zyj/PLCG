/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_18 * ((((min(0, 59)))))));
    var_20 = (min(var_20, var_0));
    var_21 += 562403624;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = 1;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_22 = (((arr_4 [i_0] [i_1] [i_1]) ? (arr_3 [i_1] [i_0] [i_0]) : (arr_3 [i_0] [i_0] [i_1])));
            var_23 = -1521056628;
            arr_6 [i_0] = (-127 - 1);
            var_24 = ((126 ? 0 : -127));
            var_25 = ((-(!var_12)));
        }
        var_26 = (arr_5 [i_0] [i_0]);
        var_27 &= ((!((min((min(var_1, -1521056628)), (arr_4 [i_0] [i_0] [i_0]))))));
        var_28 = (max(var_28, ((min(-1521056628, -20)))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_29 = var_18;
        var_30 = ((126 ? (min((111 ^ -23602), var_2)) : ((~(arr_3 [1] [i_2] [1])))));

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_31 = (min((-1802000235 + -22103), ((min(-23602, (max(var_2, (arr_10 [i_3]))))))));
            var_32 = (min(var_32, ((max((((((829 ? 30 : 126))) ? (!var_2) : ((~(arr_8 [i_3]))))), 23169)))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_33 = -72;
            arr_15 [i_2] = (((arr_8 [i_2]) ? var_1 : var_8));
            var_34 = (arr_7 [i_2] [i_4]);
        }
        var_35 = ((!(((-127 - 1) != 20073))));
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_36 = (-72 != 127);
        var_37 = 0;
    }
    var_38 = var_3;
    #pragma endscop
}
