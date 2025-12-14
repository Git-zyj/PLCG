/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_21 = (min((max(9340, ((39571 ? var_15 : (arr_1 [i_0]))))), (((27391 ? (arr_0 [i_0]) : (arr_1 [i_0]))))));
        var_22 = (((((((max(var_3, (arr_1 [i_0])))) ? (arr_1 [i_0]) : var_10))) ? ((-(arr_1 [i_0]))) : (min((arr_1 [i_0]), (19530 > var_13)))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_23 = ((--25987) ? ((((2574 < -123) == (((arr_2 [i_1]) ^ 39549))))) : 112);

        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            arr_7 [i_1] [10] [10] = (((-116 + -64) ? (((arr_4 [i_1] [i_2]) ? (arr_4 [i_2] [i_1]) : (arr_4 [i_1] [i_1]))) : (46258 > -30077)));
            arr_8 [i_1] [i_2] [i_2] = (max((-2572 & 39547), (min((arr_5 [i_1]), var_17))));
            arr_9 [i_1] = ((((2745 || var_6) ? 33960 : ((var_6 ? var_8 : (arr_2 [i_1]))))));
            var_24 = (max(var_24, (arr_4 [i_1] [i_2])));
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
        {
            arr_12 [i_1] [i_3] = 32744;
            var_25 ^= (arr_1 [i_3]);
            arr_13 [i_3] [i_3] [i_3] = ((-123 ? ((max((arr_2 [i_1]), (arr_2 [i_1])))) : ((39567 ? 58877 : 3072))));
        }
        var_26 = (min(var_26, ((min(((~((20641 ? (arr_2 [i_1]) : 65535)))), (((arr_3 [i_1] [i_1]) ? (-2147483647 - 1) : (arr_3 [i_1] [i_1]))))))));
    }
    #pragma endscop
}
