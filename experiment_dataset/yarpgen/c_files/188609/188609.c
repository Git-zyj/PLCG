/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
        {
            var_14 = -7989606247371905577;
            var_15 = var_4;
            var_16 |= (max((min((-1385480150 | var_6), ((((arr_2 [i_1 - 2] [i_0]) ^ var_4))))), ((var_6 ? (0 | 1120885399932575415) : (((var_9 ? 9975 : (arr_5 [i_0]))))))));
            var_17 = ((var_7 ? ((((max(var_11, 9999))) ^ (max(var_12, var_5)))) : ((((var_8 < (max(var_0, var_1))))))));
        }
        for (int i_2 = 2; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_18 = -1;
            var_19 = (max(var_6, (max((~var_3), 7989606247371905567))));
        }
        var_20 = -65527;
        arr_12 [i_0] = (min(var_11, ((var_9 << (11416008588102917817 - 11416008588102917817)))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_21 = -18446744073709551615;
        var_22 &= 10;
        var_23 *= ((-var_8 % ((0 ? var_8 : 1))));
        var_24 = ((-(!var_8)));
    }
    var_25 = (-var_12 < 134217727);

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_18 [14] = (arr_4 [i_4] [i_4]);
        var_26 ^= var_3;
    }
    #pragma endscop
}
