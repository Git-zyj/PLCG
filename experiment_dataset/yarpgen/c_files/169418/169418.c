/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_20 = ((-30089 ? (min(-88, 831844383)) : 24762));
        arr_3 [i_0] = (arr_1 [i_0]);
        var_21 = (arr_1 [i_0]);
        var_22 = (min(var_22, ((((((-(min(var_11, var_1))))) ? ((((((arr_2 [i_0] [i_0]) - var_11))) ? ((-(arr_1 [2]))) : (~var_5))) : ((max((140 > var_7), ((255 ? 201 : var_18))))))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = (((max((~-88), (~1))) >= ((((max(24786, (arr_1 [5])))) ? ((var_12 ? 1 : 0)) : 12452))));
        var_23 |= var_8;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = (((arr_2 [i_2] [i_2]) + (!127)));
        arr_11 [i_2] [i_2] = (arr_8 [i_2] [i_2]);
    }
    #pragma endscop
}
