/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = ((!(!11)));
        arr_2 [i_0] [i_0] = ((-655227816 ? (-2147483647 - 1) : -655227806));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_5 [i_1] = (((min(var_4, (((var_8 <= (arr_4 [i_1])))))) == ((((((var_3 ? var_2 : (arr_3 [i_1])))) ? (min(-4949203239862308009, 0)) : 3351413809)))));
        var_15 = ((!(!-1)));
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            arr_11 [i_2] [i_3] = -65526;
            var_16 = (((arr_7 [i_3]) ? 5854492593370638662 : 194));
            arr_12 [i_2] [i_2] = (((-127 - 1) ? 655227815 : 76));
            var_17 = 0;
        }
        arr_13 [i_2] = ((-24403 ? (arr_4 [i_2]) : (arr_10 [i_2] [i_2])));
        var_18 = ((((arr_9 [i_2]) >= 1)) ? (((3097989851 ? 528209144 : 0))) : (((arr_7 [i_2]) ? (arr_0 [i_2]) : 2449424258537217763)));
        arr_14 [i_2] = ((-(((arr_3 [i_2]) ? (arr_3 [i_2]) : var_11))));
        var_19 = ((~((1887190659 << (((arr_10 [i_2] [i_2]) - 179))))));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_18 [i_4] = ((((min(((((arr_16 [i_4]) >> (9223372036854775807 - 9223372036854775803)))), (arr_15 [i_4])))) ? (((64 ? -24406 : 1))) : (((-9223372036854775807 | 655227805) ? 24406 : (max((arr_0 [i_4]), 5136187750989453939))))));

        for (int i_5 = 4; i_5 < 19;i_5 += 1)
        {
            arr_22 [i_4] [i_5 - 3] = ((-(!var_0)));
            var_20 = 655227819;
        }
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        var_21 = -864054666;
        var_22 = ((-(arr_17 [i_6 - 1] [i_6 - 1])));
    }
    var_23 = var_4;
    var_24 = 4294967295;
    var_25 = ((407837583 ^ ((min((!-8078504323066988076), var_5)))));
    #pragma endscop
}
