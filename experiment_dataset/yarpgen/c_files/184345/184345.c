/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_18 += (arr_3 [i_0 - 2]);
        var_19 = ((-(((arr_3 [i_0 + 1]) ? (arr_3 [i_0 - 2]) : (arr_3 [i_0 - 2])))));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_20 = (arr_1 [i_1 + 2]);
        arr_7 [i_1] = 1;
        var_21 += var_13;
        arr_8 [i_1] = ((1 | (-16 & 0)));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_11 [i_2] [i_2] = (arr_9 [i_1 - 2] [i_2] [i_1 - 1]);
            var_22 += (arr_0 [16]);

            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                var_23 += var_12;
                arr_16 [i_1] [i_2] [i_1] [i_1] = ((((-1813709156 | (var_16 > 16))) <= 1));
                arr_17 [i_3] [i_2] = (+-469762048);
                arr_18 [i_2] [i_2] [i_2] = ((-var_14 & (((arr_3 [i_1]) ? (max(72, var_7)) : (arr_15 [i_2] [11])))));
            }
            arr_19 [i_1] [i_2] [i_2] = ((((((var_4 ? var_6 : var_8))) ? var_12 : ((min(var_13, 99))))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_24 += ((var_5 ? (arr_5 [i_1]) : (arr_14 [10] [i_1 - 2] [i_1 - 2])));
            arr_22 [i_1] = (((arr_21 [i_1] [i_1 + 1]) ? 6762175023170460456 : (arr_6 [i_1 - 1])));
        }
    }
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        arr_26 [i_5] = (max((22140 < 8290), -35));
        var_25 = (min(((((((var_8 ? -17 : 6762175023170460455))) && ((max(1, -547319245993010751)))))), ((var_6 ? (arr_5 [i_5 + 1]) : var_4))));
    }
    var_26 = (((max(var_3, 1))));
    var_27 += -1;
    var_28 = (var_7 != var_4);
    #pragma endscop
}
