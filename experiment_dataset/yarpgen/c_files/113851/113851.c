/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_5 == var_8);

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_11 = ((!(((255 ? var_7 : ((((arr_0 [i_0]) ? var_6 : var_1))))))));
        var_12 = (~var_3);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 4; i_2 < 12;i_2 += 1)
        {
            arr_10 [i_1 - 1] = var_8;
            var_13 = (((var_8 >= var_2) * ((var_9 ? var_2 : (arr_3 [i_2] [i_2])))));
        }
        arr_11 [i_1] = ((1948894450 ? (arr_2 [0] [i_1 - 1]) : (arr_2 [2] [2])));
    }
    var_14 = 3;
    var_15 = ((((min(212, var_2))) ? ((12617 << (var_4 - 164556842))) : var_1));
    #pragma endscop
}
