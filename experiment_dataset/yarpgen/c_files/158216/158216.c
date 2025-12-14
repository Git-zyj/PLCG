/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (min(var_5, 29185));
    var_12 += ((var_9 ? (((~var_8) | ((var_1 ? var_6 : var_9)))) : -var_6));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 = (max(var_13, ((((((min((arr_1 [i_0] [16]), var_8))) ? var_6 : (arr_1 [i_0] [i_0])))))));
        arr_2 [i_0] = min((((-(arr_0 [i_0] [i_0])))), var_5);
        arr_3 [i_0] [11] = ((((((arr_0 [i_0] [i_0]) >= 3346256719))) == (((!(arr_1 [i_0] [i_0]))))));
        var_14 = (min(var_14, (arr_0 [i_0] [8])));
    }
    var_15 = (min(var_15, var_8));
    #pragma endscop
}
