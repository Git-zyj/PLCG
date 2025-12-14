/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_3;
        var_17 = ((2147483647 && ((min((min(4422837016286319787, 125)), 123)))));
        var_18 = (arr_1 [i_0] [i_0]);
        var_19 = (min(var_19, (var_6 <= var_4)));
    }
    var_20 = (min(((((min(var_1, var_7)) >= ((3267 ? 131 : var_4))))), (var_3 % var_9)));

    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_21 = 152;
        arr_7 [i_1] = (((-1 ? ((max(var_7, 108))) : 131)));
        arr_8 [i_1] [i_1] = (min(((var_0 | ((max(-4038, 124))))), 130));
    }
    var_22 = -1766437518;
    var_23 = (~323482779);
    #pragma endscop
}
