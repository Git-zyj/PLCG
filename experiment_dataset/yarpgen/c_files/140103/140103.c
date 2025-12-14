/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = var_4;

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_14 = 3119150911;
                    var_15 = (min(((~((16384 ? 281474976710624 : var_13)))), ((26695 - (((arr_4 [i_0] [i_1] [8]) ? 18446462598732840985 : var_1))))));
                }
                arr_8 [i_1] [i_0] [i_0] = ((((((arr_2 [i_0] [i_0]) % (arr_2 [i_0] [i_0])))) ? (~var_6) : ((min((arr_6 [i_0] [i_0] [i_0] [i_0]), var_1)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_16 = var_2;
                                var_17 = (min(var_0, (((~(arr_10 [i_3 - 1]))))));
                                var_18 += (min(153, ((~((10835336428940659732 ? var_1 : var_1))))));
                                var_19 = ((-(max(1, 217980720))));
                            }
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                {
                    var_20 = (max(var_20, var_0));
                    arr_25 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_4] = (arr_17 [i_3 - 1] [i_4] [i_4] [i_4]);
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                {
                    var_21 = (((((var_2 ? -28 : 18446462598732840991))) ? var_7 : ((10835336428940659740 ? var_4 : 281474976710624))));
                    arr_28 [i_3] [i_4] [i_4] [i_9] = ((var_1 ? (arr_7 [i_4] [i_4] [i_3]) : 18446462598732841003));
                }
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    arr_33 [i_4] = var_13;
                    var_22 = (!(((arr_2 [i_4] [i_3 - 1]) || var_0)));
                    arr_34 [i_3] [i_4] = var_10;
                }
            }
        }
    }
    var_23 += ((((min((24 < 18446462598732840991), (~227)))) ? var_5 : (((max(var_12, var_6))))));
    #pragma endscop
}
