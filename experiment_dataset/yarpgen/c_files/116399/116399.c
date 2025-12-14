/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_19 = (max(var_19, (0 > 1587021016)));
        var_20 = arr_2 [i_0];
        var_21 = (((((((arr_3 [i_0 - 1]) ? (arr_3 [i_0 - 1]) : var_16))) ? 2147483647 : (arr_1 [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {

            for (int i_3 = 4; i_3 < 16;i_3 += 1)
            {
                arr_11 [i_2] = (((((5570478358601995948 ? 29298 : 56))) ? (arr_8 [i_1 + 3] [i_2] [i_2]) : (arr_4 [i_1 + 3] [i_2 + 1])));
                var_22 = ((+((78 ? (arr_2 [i_3]) : var_0))));
            }
            var_23 += var_15;
            var_24 = (arr_6 [i_2]);
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_25 = (min(var_25, (((-(arr_5 [i_1 - 2]))))));
            arr_15 [i_1] [0] = (arr_4 [i_4] [i_4]);
            var_26 = (((201 / 4294967295) && -78));
        }
        var_27 = -3440552192322681291;
        arr_16 [i_1] [i_1] = (arr_7 [i_1 + 1] [i_1 - 1] [i_1 + 2]);
    }
    var_28 = (var_13 == 9223372036854775807);
    var_29 = (((((((83 ? 29267 : 5570478358601995950))) ? var_9 : var_15)) ^ ((min(91, -104)))));
    var_30 = (min((-1263305404 || -9059639430936688220), ((var_5 / (((var_16 ? -8767 : var_4)))))));
    #pragma endscop
}
