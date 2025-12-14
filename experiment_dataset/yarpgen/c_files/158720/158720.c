/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (min(var_3, (-28307 | -28286)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (max(var_13, -28323));
        var_14 = (min(var_14, ((max(((-28310 ? -5402 : -28286)), 28315)))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_15 -= (((28303 && 28273) ? var_4 : (((((var_6 ? (arr_2 [i_1] [i_1]) : (arr_4 [i_1]))) > 28282)))));
        var_16 = (min(var_16, (((-33 ? 1 : 11851080908612132213)))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_17 -= 1;
        arr_10 [i_2] &= ((((-1035083911 ? -11 : 42730)) != ((~((17 ? -6 : -993468593))))));
        var_18 = (min(var_18, (!var_8)));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
    {
        var_19 = (min(var_19, (arr_1 [i_3])));
        var_20 = (max(var_20, (((var_2 & (((((1035083900 ? 28305 : 0))) ? -4513987135497265548 : (arr_6 [i_3]))))))));
        var_21 = (min(var_21, (((((((((arr_3 [i_3]) ? (arr_7 [i_3]) : (arr_0 [i_3]))) < (arr_0 [i_3])))) < (((2991090426 != (arr_12 [i_3])))))))));
    }
    var_22 = (max(var_22, ((((min(1, (var_1 * var_4)))) ? 1035083889 : ((((max(var_6, var_9))) ? var_9 : (1 * var_8)))))));
    var_23 += var_4;
    #pragma endscop
}
