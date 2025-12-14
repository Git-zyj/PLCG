/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((min(var_7, var_11)) ? ((min(683292345, var_8))) : -1730995040936327473))));
    var_17 = ((-1856935178 ? 8872092806063935403 : 10498));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [1] [i_0] = arr_1 [i_0];
        var_18 = (!var_15);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_8 [i_1] = 122;
        var_19 = ((((((((-(arr_5 [i_1])))) ? 899114390 : (((arr_5 [i_1]) ? var_3 : (arr_5 [i_1])))))) ? var_10 : (arr_5 [i_1])));
        arr_9 [18] [1] = ((((!((((arr_5 [i_1]) ? var_1 : var_7))))) ? (((!1) ? (!-15330) : (arr_4 [i_1]))) : (arr_7 [i_1])));
    }
    var_20 = var_5;
    #pragma endscop
}
