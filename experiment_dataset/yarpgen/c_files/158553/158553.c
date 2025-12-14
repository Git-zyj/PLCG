/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((min((var_4 / 18080883469876890333), var_1)), (((2185552131570813390 & var_1) ? 11528922610340688128 : (11528922610340688128 & 52737)))));
    var_18 = 13;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 *= (((((((1 << (11528922610340688128 - 11528922610340688123)))) ? 24 : (((52738 <= (arr_0 [i_0])))))) == (((242 != (((arr_0 [4]) ? 1700986519 : (arr_1 [i_0] [i_0]))))))));
        arr_2 [i_0] = ((((max(1, (((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : var_2))))) / ((52713 ? (arr_0 [i_0]) : 11528922610340688128))));
        var_20 = 8715950832040331736;
        arr_3 [i_0] = 1;
    }
    for (int i_1 = 4; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = 10683100;
        var_21 = (min(((((min(var_13, -1262355811152292385))) + (arr_4 [i_1]))), 1));
        var_22 = ((242 ? 9441 : -10683106));
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 9;i_2 += 1) /* same iter space */
    {
        var_23 = (min(var_23, 27074));
        var_24 = (max(var_24, (((var_9 ? (52737 - 9441) : 1)))));
        var_25 -= (arr_5 [i_2]);
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 9;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_26 += (((((var_0 ? 52738 : -6601678002346369175))) || -64));
            var_27 = 9223372036854775807;
            arr_13 [i_4] [i_4] [i_4] = (((((arr_8 [i_3] [i_4]) << (1262355811152292384 - 1262355811152292360))) <= 47251));
            var_28 = (max(var_28, (((arr_7 [i_3] [4]) ? ((((arr_5 [5]) < 3357498896335065683))) : (52706 ^ var_6)))));
        }
        for (int i_5 = 3; i_5 < 9;i_5 += 1)
        {
            var_29 = var_11;
            var_30 = ((18308 % (arr_14 [i_3 - 4])));
            arr_18 [3] [i_5 + 1] [i_5 - 3] = (((arr_4 [i_3 - 2]) & ((((arr_14 [i_3]) ? 12822 : 1)))));
        }
        arr_19 [i_3] [i_3] |= (((arr_5 [i_3 + 1]) ? (3107097303675234242 != 3099070732701941269) : ((4007397464 ? 2945172147071408075 : (arr_5 [i_3 - 1])))));
        var_31 = (((((arr_14 [i_3]) ? 47253 : (arr_8 [i_3] [i_3 + 1])))) ? (arr_5 [i_3 + 3]) : (arr_4 [i_3]));
    }
    #pragma endscop
}
