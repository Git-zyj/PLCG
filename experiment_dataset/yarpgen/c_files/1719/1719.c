/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = -11;
        arr_5 [i_0] = (max((arr_3 [i_0]), 154));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            arr_12 [i_2] [i_2] = (((((18446744073709551604 ? var_5 : (arr_6 [i_2] [i_1])))) >= 18446744073709551604));
            arr_13 [5] [i_2] [i_2] = 4568310355934803133;
            var_16 = (max(var_16, ((max((((min((arr_7 [i_1]), (arr_8 [i_2]))))), (arr_11 [i_2] [i_1] [1]))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
        {
            var_17 = (max(var_17, (((var_11 ? (arr_11 [i_3] [i_3] [i_1]) : (arr_11 [i_3] [i_3] [i_1]))))));
            var_18 |= ((var_11 << ((((var_11 ? var_0 : 0)) - 7151353692586553513))));
        }
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            var_19 -= (arr_14 [i_4 - 1] [i_4 + 1] [i_4 + 1]);
            var_20 = -64;
        }
        var_21 = max((max(((-1773160038554291485 ? var_14 : (arr_7 [i_1]))), ((max(1, -2))))), (~8225));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        arr_21 [i_5] [i_5] = (arr_8 [i_5]);
        var_22 = -84;
    }
    #pragma endscop
}
