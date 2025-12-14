/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_11 ? (((var_11 ? var_12 : var_9))) : var_2));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = (arr_0 [i_0]);
        var_18 |= ((-var_8 << (((((arr_1 [i_0]) ? 1243115366 : 3682187388)) - 1243115348))));
    }
    for (int i_1 = 4; i_1 < 13;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            var_19 -= (((-2 ? -1 : (arr_4 [10]))));
            var_20 *= (((((arr_3 [1]) + 2147483647)) >> (29193 - 29192)));
        }
        arr_7 [i_1] = (((~292213461) ? (((arr_2 [i_1]) ? (arr_6 [i_1 - 4] [1] [i_1]) : (min(83, var_3)))) : ((var_13 ? (((arr_1 [i_1]) ? (arr_3 [i_1]) : (arr_5 [i_1] [i_1]))) : (arr_2 [i_1])))));
        arr_8 [i_1] = (-(69 < 4));
        arr_9 [i_1] = (-(arr_1 [i_1 - 4]));
        var_21 = ((((99 || 172) ^ var_5)));
    }
    for (int i_3 = 4; i_3 < 13;i_3 += 1) /* same iter space */
    {
        var_22 = ((((((120 ? 173 : var_3))) || 9408988429267364518)));
        var_23 -= (max((((arr_3 [8]) ? (arr_1 [18]) : (((arr_4 [8]) / (arr_3 [6]))))), (((((-(arr_11 [i_3 - 3])))) ? var_12 : var_14))));
        var_24 += ((((((var_9 ? 83 : -4513328198768172957)) ? var_0 : 1718183361))));
        var_25 = (min(var_25, ((((max((((!(arr_3 [0])))), ((var_6 ? 12466367772957624706 : (arr_5 [i_3] [9])))))) || var_6))));
        var_26 = ((((((((min(var_9, var_4))) || 4645494178743049946)))) >= ((2105232004 ? ((min(50, (arr_1 [i_3 - 4])))) : ((var_14 ? (arr_10 [i_3]) : (arr_5 [i_3] [i_3 - 2])))))));
    }
    for (int i_4 = 4; i_4 < 13;i_4 += 1) /* same iter space */
    {
        var_27 = (((arr_1 [i_4]) << ((((9037755644442187083 ? var_8 : ((((arr_1 [i_4]) + 101))))) - 3821137038))));
        var_28 += (max((((arr_12 [8]) ? (((28 ? 83 : (arr_0 [i_4])))) : (arr_5 [i_4] [i_4]))), 1));
        arr_14 [i_4 - 3] [i_4] = ((2105231996 >> (-var_9 - 10127214676022172417)));
    }
    var_29 = (min((((((var_8 ? 8589934588 : 6229374071603857094))) ? 9223372036854775807 : (!var_7))), var_10));
    #pragma endscop
}
