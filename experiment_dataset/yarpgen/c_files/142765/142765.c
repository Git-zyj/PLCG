/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-1 & var_4) ? ((((var_6 ? (arr_1 [i_0]) : (arr_0 [i_0]))) << ((((var_7 ? (arr_1 [i_0]) : (arr_0 [i_0]))) - 1404516530289466756)))) : ((~(max((arr_1 [i_0]), (arr_0 [i_0]))))));
        arr_3 [5] = ((-((min((min(-19943, 1)), (arr_0 [3]))))));
        var_17 -= var_1;
        var_18 -= var_16;
        arr_4 [i_0] = (min(((max((~var_10), (arr_0 [i_0])))), (max((arr_1 [i_0]), (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_19 ^= (((arr_5 [i_1]) && (((((min(var_5, (arr_6 [i_1])))) ? (arr_7 [i_1]) : (((min(1, 1)))))))));
        var_20 = ((-(!1)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] [i_2] = ((1 / (arr_8 [i_2])));
        arr_12 [i_2] = ((var_6 != (arr_9 [i_2])));
    }
    var_21 = (~var_3);
    #pragma endscop
}
