/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((33554176 ? ((((52766 ? var_16 : var_6)))) : ((((min(var_6, var_15))) ^ 122))));
        var_20 = (min(var_9, ((-117 ? (8855866467670880106 <= -110) : var_12))));
        arr_3 [i_0] = var_17;
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_21 = (max(((((8855866467670880106 ? -6056004901769391599 : -1348685858)) ^ (((min(var_15, var_12)))))), ((((arr_7 [i_1 - 1] [i_1 + 1]) ? (-2147483647 - 1) : (arr_7 [i_1 - 2] [i_1 - 1]))))));
            arr_9 [i_2] [11] [9] = ((-2147483624 && (((1016 ? 29 : 50)))));
            var_22 = ((((-49 ? 9592276319269525450 : 39)) < ((((((1973369180 ? -2804 : 0)) == 61))))));
        }
        var_23 = ((60642 >= (-9223372036854775807 - 1)));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_24 = ((10982477224435508698 ? ((0 ? 9223372036854775807 : 1)) : 1));
        var_25 = ((-2008309820 ? 1 : 10982477224435508708));
        var_26 = (arr_8 [i_3] [i_3]);
        arr_12 [i_3] = ((!(((0 ? var_5 : (arr_0 [i_3] [0]))))));
    }
    var_27 = ((((((1 ? 16380 : -1)) % (12788 + 15688))) > -17));
    #pragma endscop
}
