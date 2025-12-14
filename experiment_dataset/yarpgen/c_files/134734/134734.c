/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 = 1;

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_12 = (min(var_12, (arr_0 [i_1])));
            var_13 += (-(arr_0 [i_1]));
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_14 = ((!(arr_1 [i_2] [i_2])));
        var_15 = 2522736908;
        var_16 -= -109328896214948331;
        arr_8 [i_2] = (arr_6 [i_2] [i_2]);
        arr_9 [i_2] = ((1244562495 & (13658551795304726904 + 160)));
    }
    var_17 = 13658551795304726916;
    var_18 = (min(var_18, ((((min(var_3, var_0)) & (min(((max(var_10, var_1))), (max(2814792761, -1922964073)))))))));
    #pragma endscop
}
