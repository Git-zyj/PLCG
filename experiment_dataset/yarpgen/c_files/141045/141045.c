/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_14;
    var_19 -= (min((((!(((18446744073709551615 ? var_2 : var_16)))))), var_12));
    var_20 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_21 ^= var_3;
                var_22 = ((~((-((-(arr_1 [i_0] [i_0])))))));
                var_23 |= ((((!(arr_3 [i_0]))) ? 10 : 1));
            }
        }
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        var_24 = ((var_1 ? (min(11, 1)) : (~18446744073709551615)));
        var_25 -= var_10;
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        var_26 &= (~-2046087362);
        var_27 -= ((+((max((arr_6 [i_3]), (arr_6 [i_3]))))));
        var_28 = (!var_1);
        var_29 &= -2147483647;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {
        var_30 = (~21024);
        var_31 += (!var_7);
    }
    #pragma endscop
}
