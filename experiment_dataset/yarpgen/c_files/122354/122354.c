/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((min(61168, ((max(1, 105))))))));
    var_18 = (64963 ? 61168 : -13);
    var_19 = (max(var_19, var_2));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_2 [i_0] [i_0]) >= var_3));
        var_20 = (1127722008 ? 5820 : 60);
        var_21 = (max(var_21, (((~((~(arr_1 [i_0]))))))));
        var_22 = ((var_15 != (arr_0 [i_0])));
    }
    #pragma endscop
}
