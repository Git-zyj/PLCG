/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_18 = arr_1 [i_0];
        arr_4 [i_0] = ((((((arr_1 [i_0]) >> (40926 - 40926)))) % (((-9223372036854775807 - 1) ? 87 : 3224801306205362623))));
        var_19 -= (arr_1 [i_0]);
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_20 = (255 / 2868945886821287019);
        var_21 = (((((((-(arr_1 [i_1 - 1])))) <= -3092465371588072234)) ? ((((0 - (arr_0 [i_1] [i_1]))) - (arr_1 [i_1]))) : (((((((-(arr_3 [i_1])))) && 3704232480974337008))))));
    }
    var_22 -= (max(9223371899415822336, ((((min(15221942767504188990, 3224801306205362623))) ? (~var_15) : ((var_2 ? var_14 : var_3))))));
    var_23 = (max(((var_2 ? -4079561008329574281 : (max(var_14, 8310298986137445580)))), ((((((var_7 ? var_14 : 3704232480974336996))) ? var_1 : 255)))));
    #pragma endscop
}
