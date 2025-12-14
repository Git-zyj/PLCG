/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_10;

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((max((min(var_12, var_10)), 0)) >> (arr_2 [i_0 - 2])));
        var_14 ^= ((!((!(!31)))));
        var_15 = (max(((!(arr_0 [i_0 - 3]))), (max((var_7 || var_5), (!0)))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_16 = ((((!(arr_5 [i_1]))) && (!-1926326673)));
        var_17 &= (max(18446744073709551602, 32));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            arr_14 [i_3] &= ((18446744073709551595 > (arr_12 [i_2] [i_3] [i_3])));
            arr_15 [i_2] [i_3] = ((!(((~((max(var_3, var_8))))))));
            var_18 = (min(var_18, (~-5061630211457425862)));
            arr_16 [i_3] [i_2] [i_2] = ((!(((min(7, 1))))));
            var_19 |= (!-8987456958995425932);
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            arr_19 [i_4] = ((~(max((arr_17 [i_4]), (arr_9 [i_2])))));
            var_20 = (max((min((~0), (arr_17 [i_2]))), 0));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_21 = (arr_12 [i_2] [i_5] [i_5]);
            var_22 *= 14;
        }
        var_23 = (max((max(18446744073709551579, (arr_13 [i_2]))), (((!(arr_6 [i_2] [i_2]))))));
    }
    #pragma endscop
}
