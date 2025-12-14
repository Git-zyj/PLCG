/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_16 = (min(var_16, -var_9));
                arr_4 [i_0] [i_1] [i_1] = (((((-(arr_1 [i_0 - 1])))) ? ((((241 && 255) - 2147483632))) : (min((var_13 + var_5), -1))));
                arr_5 [i_0] = 65526;
            }
        }
    }
    var_17 = (max(var_17, var_8));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_8 [i_2] = (arr_0 [i_2]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_18 = (arr_7 [i_2]);
                    arr_15 [i_2] [7] [i_3] [i_4] = (((arr_1 [i_2]) != (arr_1 [i_4])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_19 = -112;
                                arr_20 [i_2] [i_2] [i_6] [i_5] [i_5] = 89;
                                arr_21 [i_5] = (1106038965 / 14);
                            }
                        }
                    }
                    arr_22 [i_2] [i_3] = 1;
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        var_20 += ((var_11 * (~14844)));
        arr_25 [i_7] [i_7] = (arr_9 [i_7]);
        arr_26 [i_7] = ((min((var_8 <= 68), ((19 ? 1614417280081899169 : 227)))));
        arr_27 [i_7] = (~var_4);
        var_21 = (((((min((arr_2 [i_7] [i_7] [i_7]), var_14)))) / (max(((min(66, 624003024))), 1614417280081899169))));
    }
    #pragma endscop
}
