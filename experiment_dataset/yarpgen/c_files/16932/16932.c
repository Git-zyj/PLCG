/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_10 = ((-(!652852308)));
        var_11 = (arr_2 [i_0 - 1] [i_0 - 1]);
        var_12 = (min(var_12, (arr_0 [7])));
        arr_3 [3] = (!(arr_0 [i_0 - 1]));
        arr_4 [0] = (var_4 >= var_2);
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_13 |= (arr_2 [0] [i_1]);

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_14 = (min(var_14, ((((var_6 - 726) ? ((-(arr_2 [i_1] [i_1]))) : (((arr_5 [i_2]) ? var_6 : 255)))))));
            arr_12 [i_1] [i_1] [i_1] = (1 >= 1116711953);
            var_15 = (arr_8 [i_1 - 1] [i_1]);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_16 = (!(arr_8 [i_1 - 1] [i_1]));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_17 = (arr_19 [i_1 - 1] [i_3] [i_5]);
                            var_18 = (max(var_18, -var_4));
                            var_19 = ((arr_1 [i_1 - 1]) ? var_1 : 47119116);
                            var_20 = 44573;
                        }
                    }
                }
            }
            var_21 *= ((-3178255342 ? 1 : (((arr_22 [i_1] [10] [i_1] [i_3] [i_1 - 1]) ? 1 : -31498))));
        }
        for (int i_7 = 1; i_7 < 12;i_7 += 1)
        {
            arr_27 [11] [i_7] [i_1] = -1192294952;
            var_22 *= 2048;
        }
    }
    var_23 = ((((1 - var_4) ? (((var_6 ? 0 : var_3))) : ((var_9 ? (-9223372036854775807 - 1) : -2541391268952086422)))));
    #pragma endscop
}
