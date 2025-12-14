/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= ((-((-((17939379625691358917 ? var_7 : var_3))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = (~15963);
        var_13 = (arr_2 [i_0 - 1] [i_0 - 1]);

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_14 = ((-507364448018192699 % (((arr_7 [i_0]) ? 507364448018192682 : 185))));
            var_15 ^= (((arr_1 [i_0 - 1] [i_0 + 1]) / 12));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_16 = var_8;
            arr_11 [i_0 - 2] [i_2] = (--1329082306);
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_17 = ((12314868403032034879 ? 507364448018192697 : ((175 ? 173 : 507364448018192699))));
            var_18 += -var_7;
        }
        arr_14 [i_0] = ((-125 ? (1 < 30547) : ((17939379625691358907 ? 16779886281705357314 : (arr_5 [i_0 + 1] [i_0 + 1] [6])))));
        arr_15 [0] = var_7;
    }
    for (int i_4 = 2; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_19 |= (((((arr_17 [i_4 - 2]) ? (arr_17 [i_4 - 2]) : (arr_17 [i_4 + 2])))) ? (max((max((arr_17 [i_4]), 1625855506)), ((((arr_16 [i_4] [4]) >= (arr_19 [i_4 + 1] [i_4 + 1])))))) : (((max((arr_19 [i_4 - 1] [i_4 - 2]), var_11)))));
        var_20 = (max(var_20, ((((((var_9 & (arr_19 [i_4 + 2] [i_4])))) ? -125 : ((max(var_5, ((!(arr_17 [i_4])))))))))));
    }
    for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_21 += ((17939379625691358934 ? var_6 : 0));
        var_22 = (max(var_22, (arr_21 [i_5 - 1] [i_5 - 1])));
        var_23 = (max((((arr_16 [i_5] [i_5]) / (-2147483647 - 1))), 61));
    }
    #pragma endscop
}
