/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_14 = 19;
        arr_2 [i_0] [i_0] = (-(arr_1 [1] [i_0]));
        var_15 = (arr_1 [19] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 19;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                arr_14 [i_2] [8] [8] = (~0);
                arr_15 [i_2] [i_3] = (arr_13 [13] [5] [1] [i_2]);
                arr_16 [i_2] [i_2] = ((255 ? var_5 : (arr_10 [i_3 - 1] [i_3])));
            }
            for (int i_4 = 1; i_4 < 18;i_4 += 1)
            {
                arr_19 [i_2] [i_2] [i_4] = (((3423025687839876330 ^ 232) ? (1 ^ 33) : 34604));
                arr_20 [12] [12] [12] [i_2] = (arr_6 [i_1 + 1] [i_1 + 1]);
            }
            arr_21 [i_1] [i_1] [i_2] = (!34614);
        }
        arr_22 [20] = (arr_4 [i_1 + 2] [i_1 + 2]);
        arr_23 [i_1] = var_1;
    }
    var_16 = (18273 <= -64);
    #pragma endscop
}
