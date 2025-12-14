/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                arr_8 [i_0] [17] [i_1] = ((var_1 ? ((((arr_4 [i_0]) ? var_8 : var_9))) : 1));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_14 [6] [i_1] [i_2] [i_3] = 230;

                            for (int i_4 = 1; i_4 < 16;i_4 += 1)
                            {
                                var_12 = min(26, ((((((4294967295 ? 1 : -1331162186))) ? 65535 : 0))));
                                arr_17 [1] [3] [i_2] [i_3] [4] = 65535;
                                var_13 = (max(var_13, ((((var_9 ? (127 == var_9) : (max((arr_9 [i_0] [i_2]), (arr_6 [5])))))))));
                            }
                            arr_18 [i_0] [i_0] [12] = (!(((4294967295 ? var_5 : var_9))));
                            arr_19 [i_0] [16] [i_2] [11] = ((((max(var_8, var_5))) ? ((var_9 ? 117 : 65535)) : var_5));

                            for (int i_5 = 0; i_5 < 18;i_5 += 1)
                            {
                                arr_24 [i_1] [i_2] [1] [i_5] = ((((((65535 ? var_9 : (arr_16 [i_0] [i_1 + 1] [i_0] [i_1] [16]))) ^ -var_9)) ^ (~3722105289)));
                                arr_25 [i_2] = (!15);
                                arr_26 [i_5] [i_0] = var_3;
                            }
                            for (int i_6 = 0; i_6 < 18;i_6 += 1)
                            {
                                arr_31 [i_2] [i_6] &= ((-(arr_3 [i_0 + 1])));
                                arr_32 [i_0] = 65531;
                                var_14 = (((~24643) ? ((((!(arr_10 [i_1 - 3] [i_1] [i_0 + 1] [1]))))) : var_0));
                            }
                        }
                    }
                }
                var_15 = ((((((arr_4 [i_0 - 1]) ? (((var_1 ? 2718554848 : (arr_0 [14] [2])))) : (arr_15 [i_0])))) ? ((((max(24675, var_4)) % (((32767 << (1122450574 - 1122450567))))))) : ((~(9223372036854775807 & 5172424068112880070)))));
                arr_33 [i_1] [i_1] [i_1] = var_9;
            }
        }
    }
    var_16 = (max(-32758, ((var_9 ? 3680585850973938518 : (~var_3)))));
    #pragma endscop
}
