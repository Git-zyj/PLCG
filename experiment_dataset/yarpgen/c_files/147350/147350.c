/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 = (arr_0 [i_0] [i_0]);
        var_21 = (max(((-7232459389328012666 ? var_19 : 1421738372)), ((max((min(0, 0)), (~var_9))))));
        var_22 = (arr_2 [i_0]);
        var_23 = ((-0 ? ((((min(0, 946454897311831430))) ? (max(4738868509354855772, (arr_1 [1]))) : (!0))) : (min((((var_11 % (arr_1 [i_0])))), -var_0))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_24 ^= 4130905462757705953;
        var_25 |= arr_3 [i_1];
    }
    var_26 = (((((!((max(var_8, 7)))))) != -528));
    var_27 = var_18;
    #pragma endscop
}
