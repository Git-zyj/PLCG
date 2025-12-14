/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))) && (arr_2 [i_0] [i_0])));
        var_16 += (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_17 = ((var_10 ? (((((arr_2 [i_0] [i_0]) ? (arr_3 [i_1]) : (arr_6 [i_0]))) & 1)) : (((0 - 7) ? 8261 : var_14))));
            arr_7 [i_1] = (((((1969664224974507879 ? var_4 : -15769)))) ? ((~(arr_5 [i_0] [i_0]))) : (((((54937 ? 54929 : -15769))) ? ((~(arr_2 [i_1] [3]))) : var_8)));
            var_18 = (((((~(var_1 & -16)))) ? ((max((arr_0 [i_0]), (arr_0 [i_0])))) : var_5));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            arr_10 [i_0] [i_0] [i_2] = 20754;
            var_19 = (arr_9 [i_2 + 1]);
            arr_11 [i_0] [i_0] [12] = 54937;
            arr_12 [i_0] [i_0] = (arr_3 [i_0]);
        }
    }
    var_20 = ((-12 - -7) >= var_5);
    var_21 = ((54924 ? var_10 : -591839660));
    var_22 -= (~1);
    #pragma endscop
}
