/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_8 ? var_8 : ((37864 ? -40 : 27644)))) << (var_7 - 2945825648472124164)));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_11 = (max(var_11, (((1 << (1920707471 - 1920707468))))));
        var_12 = (((((16 ? 6 : 253))) ? (arr_3 [i_0 - 1]) : (arr_0 [i_0 - 1])));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_13 = (min(var_13, ((max(((var_9 ? var_0 : (4294967287 == var_9))), ((var_9 ? (max(var_7, var_5)) : -18322620609985030780)))))));
        var_14 = var_7;
    }
    var_15 = (18322620609985030780 ? ((27664 ? 37891 : 2766965987)) : (((((~var_6) == -var_4)))));
    #pragma endscop
}
