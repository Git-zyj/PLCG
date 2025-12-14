/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_2 ? 65535 : var_12)))) ? var_10 : 1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_18 = ((((arr_0 [i_0] [i_0]) ? var_15 : 1)));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_19 = 240;
            var_20 = -120;
            var_21 = 1;
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_22 = ((((12 ? var_13 : var_13)) % var_2));
            var_23 = ((!(arr_3 [i_0 + 1])));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_24 = (((((var_7 ? var_4 : (arr_9 [19] [i_2] [i_3] [i_4])))) ? (arr_4 [i_0] [10]) : (((arr_11 [15] [i_5]) ? 124 : var_10))));
                            var_25 = -var_7;
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_26 = var_9;
                            arr_15 [2] [17] [1] [10] [i_6] [i_4] [2] = ((var_11 > ((114 * (arr_2 [i_2])))));
                        }
                        var_27 = (arr_14 [i_0] [i_0] [i_2] [i_3] [i_2]);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 3; i_7 < 12;i_7 += 1)
    {
        var_28 = arr_17 [1];

        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            var_29 = ((8128 ? 29 : var_9));
            arr_21 [i_7] [i_7] = 29953;
            var_30 = ((!(arr_16 [i_7 + 1])));
        }
    }
    #pragma endscop
}
