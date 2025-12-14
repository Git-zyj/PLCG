/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((max((max(1, (arr_2 [i_0]))), var_14)));
                arr_6 [i_1] [0] = (-9223372036854775787 / 7);
                arr_7 [i_0] [i_0 + 1] [i_1] = ((((arr_2 [i_0]) ? (2833874127488847437 & var_4) : var_6)) != var_4);
            }
        }
    }
    var_16 = (max((var_7 - -54), (((!25) ? 2015632000530006742 : 1))));
    var_17 = (~var_4);
    var_18 = (min(var_18, var_11));
    var_19 = (max(var_19, var_13));
    #pragma endscop
}
