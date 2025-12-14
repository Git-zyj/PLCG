/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = (max(var_16, (min(-4298285193827371703, 3044909402428890805))));
        var_17 = ((((max(((-(arr_1 [i_0]))), var_9))) ? (((arr_0 [i_0]) + var_1)) : (((-((-(arr_0 [i_0]))))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_18 = (((((45 >> (((arr_1 [i_0]) - 46))))) ? (((arr_5 [i_0] [i_1] [i_1]) + 3708247440)) : 65535));
            arr_6 [i_1] = -var_9;
            var_19 ^= (((arr_4 [11] [i_1]) ? 9153 : 9153));
            var_20 += ((1642171348 ? (arr_1 [i_1]) : 4294967295));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 3; i_3 < 19;i_3 += 1)
            {
                var_21 *= (arr_10 [4] [4] [0]);
                arr_11 [20] [20] [i_2] = (((arr_5 [i_3 - 2] [i_2] [i_3]) - (arr_5 [i_3 - 3] [i_2] [13])));
                var_22 ^= (-(arr_9 [i_3 - 2] [i_3] [14]));
                var_23 = 7;
            }
            var_24 = (max(var_24, ((((arr_4 [1] [i_0]) && (((var_15 ? (arr_3 [10] [i_2]) : (arr_3 [14] [14])))))))));
            arr_12 [i_0] [i_2] [i_2] = var_15;
        }
        arr_13 [i_0] = 65525;
    }
    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        var_25 -= ((-(--65530)));
        var_26 = -65535;

        for (int i_5 = 3; i_5 < 22;i_5 += 1)
        {
            var_27 -= (arr_14 [22]);
            arr_19 [i_4] [i_4 + 1] [i_4] = (min(((((3072420032 ? (arr_18 [i_4] [1]) : (arr_16 [i_5 - 3] [i_4]))) << 0)), ((-(arr_17 [i_4] [i_5 + 1] [i_4 + 1])))));
            var_28 = (max(var_28, 29313));
            var_29 = (min((((((((arr_14 [i_4]) - (arr_15 [14] [i_4])))) ? 51955 : (var_0 + var_3)))), ((var_8 ? (arr_16 [i_4] [i_4]) : (arr_16 [i_4] [i_4])))));
            arr_20 [i_4] = var_11;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            arr_23 [i_6] [i_4] [i_4] = (((var_9 ? (arr_22 [i_4] [i_4] [i_4]) : var_9)));
            var_30 = var_3;
            arr_24 [i_4] [i_6] [i_6] = (-9223372036854775807 - 1);
            arr_25 [i_4] [i_4] = (((51955 != -63) ? (arr_18 [i_4] [i_4 + 1]) : 22459));
        }
        var_31 = (max(var_31, (min((max((arr_14 [4]), (arr_18 [8] [8]))), 8851885076206618796))));
    }
    var_32 = (65511 & 0);
    #pragma endscop
}
