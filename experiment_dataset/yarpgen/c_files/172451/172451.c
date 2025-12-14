/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [4] |= ((((arr_1 [i_0] [i_0]) ? (arr_0 [2]) : (arr_0 [0]))));
        arr_3 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = (max(((min((max(-7535, var_6)), (!var_2)))), (min(7535, (((arr_5 [i_1]) ? (arr_1 [i_1] [5]) : var_11))))));
        var_17 |= (min((~-var_10), (max((min((arr_5 [i_1]), var_11)), ((min(var_4, var_13)))))));
        var_18 *= (max(var_15, ((((!(arr_4 [i_1] [i_1])))))));
    }
    var_19 = -7535;

    for (int i_2 = 1; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_20 = -8073264342375439427;
        arr_9 [i_2] [i_2 + 1] = var_1;
        arr_10 [i_2] = -53;
    }
    for (int i_3 = 1; i_3 < 19;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = -22;
        var_21 -= (arr_8 [i_3 - 1] [i_3 + 1]);
        var_22 = ((-(min((15400945367297827183 - 245), (arr_8 [i_3] [i_3 - 1])))));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_16 [i_4] = (arr_11 [i_4]);
        arr_17 [i_4] = (min((((arr_14 [i_4]) ? 25271 : (arr_15 [i_4] [i_4]))), (min((arr_15 [i_4] [i_4]), (arr_8 [i_4] [i_4])))));
    }
    var_23 |= ((min(((min(578865091, -22))), (max(var_10, var_11)))) * (max(-8073264342375439427, (max(var_1, 3045798706411724442)))));
    #pragma endscop
}
