/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_8 [i_0] [i_0] = (max((((arr_7 [i_0]) ? (arr_7 [i_0]) : var_16)), (arr_7 [i_1])));
            var_18 = ((((((arr_5 [i_0] [i_1]) == 65535))) >> (((arr_7 [12]) ? (var_15 || var_13) : (var_0 <= var_7)))));
            arr_9 [i_0] [i_1] [i_0] = ((((((~var_5) ? (arr_7 [i_1]) : 127))) ? -22738 : (max((arr_3 [i_0]), (arr_3 [i_0])))));
            var_19 = (max(var_19, ((min(((min(-22738, 65524))), 97)))));
        }
        var_20 = (max(var_20, (((!(((((arr_5 [7] [8]) ? var_8 : var_5)) > ((var_11 ? (arr_5 [i_0] [i_0]) : var_7)))))))));

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_21 = (arr_13 [i_0]);
            arr_14 [i_0] [i_0] = ((((-(-29218 == 1842122397))) > ((max(var_17, (arr_4 [i_2]))))));
            arr_15 [i_0] = (((((max(var_3, 553424450)) / (~546782929)))) ? ((((arr_2 [i_0] [i_0]) ? 14969 : var_6))) : (max(var_16, (((var_14 ? var_17 : var_0))))));
            var_22 = ((var_14 ? (((((var_11 ? var_14 : 29214)) >= (arr_2 [i_2] [i_2])))) : ((((~var_10) > var_3)))));
        }
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_23 = (max(var_23, ((((arr_4 [i_3]) * (((arr_4 [i_3]) ? var_4 : (arr_0 [i_3]))))))));
        arr_18 [i_3] &= (arr_1 [i_3]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_24 = (((((-86956658 ? 23 : 2))) ? 147 : (arr_19 [i_4])));
        var_25 = ((~((-24355 ? var_14 : var_15))));
        var_26 += (var_8 == (arr_12 [i_4] [i_4] [i_4]));
    }
    var_27 = var_16;
    #pragma endscop
}
