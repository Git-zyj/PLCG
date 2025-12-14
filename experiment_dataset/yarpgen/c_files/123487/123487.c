/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_0] = (arr_4 [i_0] [i_1]);
            arr_7 [i_0] [i_0] [i_0] = -2133329136;
        }

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_10 [i_0] = ((30990 ? ((17143914450887227770 ? 107 : 107)) : 1));
            arr_11 [i_0] [i_2] = 118;
        }
        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {

            for (int i_4 = 2; i_4 < 19;i_4 += 1)
            {
                arr_18 [i_0] [i_0] = ((~(((arr_12 [i_0] [i_3] [i_4]) ? 2 : -119))));
                arr_19 [i_0] [i_0] [i_4] [i_4] = -11;
            }
            arr_20 [i_3] [i_3 + 1] &= (((-9223372036854775807 - 1) || var_2));
            arr_21 [i_3] [i_3] [i_3] &= 100;
        }
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            arr_24 [i_0] [i_5] [i_5] = (((!18) ? -1741226299 : 13337));
            arr_25 [1] [i_5] [i_0] = ((-(arr_14 [i_5 + 1] [i_5 + 1] [i_5])));
            arr_26 [i_5] [i_0] [i_0] = 17143914450887227779;
            arr_27 [0] |= -88;
            arr_28 [i_0] [i_0] [18] = (((((var_6 ? 56 : 0))) ? 23296 : 10));
        }
        arr_29 [i_0] = ((9 ? -6 : (1302829622822323840 - 11371)));
        arr_30 [i_0] [i_0] = ((var_1 ? 44462 : ((1 ? -4738592910850448604 : 0))));
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        arr_34 [i_6] [i_6] = (((((arr_15 [i_6] [i_6] [i_6] [i_6]) << (588506922 - 588506913)))) ? (((!((((arr_32 [i_6] [i_6]) ? 1 : -1425407001)))))) : ((~(((arr_9 [0] [i_6] [0]) ? -1425407001 : (arr_23 [17]))))));
        arr_35 [i_6] = (~1);
        arr_36 [i_6] = ((var_1 ? (~40) : (10108 % var_5)));
        arr_37 [i_6] [i_6] = ((((max(1, 1302829622822323845))) ? ((var_11 ? 55427 : var_12)) : ((-(arr_8 [i_6] [4])))));
        arr_38 [i_6] [i_6] = (min((((!(arr_17 [i_6] [i_6] [i_6])))), (max(var_11, 16686745716096323991))));
    }
    var_15 = var_6;
    #pragma endscop
}
