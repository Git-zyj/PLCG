/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = var_1;
            arr_6 [i_0] [i_1] = 16609583314735427265;
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_10 [i_0] [i_2] [i_0] = (arr_9 [i_2] [i_0]);
            arr_11 [i_0] [i_2] = -var_5;
        }
        arr_12 [i_0] [i_0] = var_6;
        arr_13 [i_0] = (((((16609583314735427258 >> (var_10 - 60293)))) ? ((var_10 ? 1837160758974124376 : 229376)) : (!1837160758974124330)));
        arr_14 [i_0] [i_0] = (((arr_8 [i_0] [i_0] [i_0]) / (arr_8 [i_0] [i_0] [i_0])));

        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            arr_17 [i_0] [i_0] [i_0] = (3 && 6);
            arr_18 [i_3] [i_3] [i_3] = -12;
        }
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
    {
        arr_22 [i_4] [i_4] = (1 >> (var_4 - 1500647538));
        arr_23 [i_4] [i_4] = (!var_9);
    }
    for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
    {
        arr_26 [i_5] [i_5] = (max((((1 / (var_0 || var_2)))), (max((16609583314735427307 || var_3), (max(var_3, 1837160758974124344))))));
        arr_27 [i_5] [i_5] = 16609583314735427286;
    }
    for (int i_6 = 1; i_6 < 20;i_6 += 1) /* same iter space */
    {
        arr_30 [16] |= (min(((~(arr_29 [1] [i_6 + 1]))), ((var_0 ? var_7 : (arr_21 [i_6 + 1])))));
        arr_31 [10] [i_6] |= (((~(var_2 % var_5))));
        arr_32 [i_6] [18] = ((max(2114776217, 7)));
        arr_33 [6] = var_3;
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 0;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 22;i_9 += 1)
                {
                    {
                        arr_41 [i_9] [i_9] = ((arr_34 [i_9]) && (arr_34 [i_9]));
                        arr_42 [i_6] [i_6] [i_6] [i_7] [i_8] [i_9] = -var_6;
                        arr_43 [i_6] [i_9] = (!2);
                        arr_44 [i_6] [i_9] [i_8] [i_9] = (-2147483635 / 86925188);

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_47 [i_6] [i_6] [i_6] [i_9] [i_6] = (((((4294967289 / (max(4294967294, 2896674134))))) & -8801569517314850006));
                            arr_48 [i_6] = (max((var_9 + var_3), ((613291494 + (arr_46 [i_6 - 1])))));
                        }
                        for (int i_11 = 3; i_11 < 21;i_11 += 1)
                        {
                            arr_52 [i_6] [i_7] [i_8] [i_9] [i_11] [i_9] &= ((1 | (((var_10 / (arr_50 [i_6] [i_7] [i_9] [i_8 + 1] [i_11 - 3]))))));
                            arr_53 [i_6] [i_7] [i_7] [i_7] [i_7] [i_7] = (218 - 2896674146);
                            arr_54 [i_6] [i_6] [i_6] [i_6] [i_6] = (min(503316480, (5062033349872000384 != var_10)));
                        }
                        for (int i_12 = 3; i_12 < 21;i_12 += 1)
                        {
                            arr_57 [i_6] [i_6] [i_7] [i_9] [i_9] [i_12] = (((((((max(var_1, var_4))) || 65535))) + (((((((arr_25 [i_6] [i_7]) | 2046094400))) || 3718307207)))));
                            arr_58 [i_6] [i_6] [i_6] = (max(423799722, 31));
                            arr_59 [i_6] = ((((min(0, var_7))) ? (18446744073709551615 - 255) : ((max(1398293161, (arr_28 [i_6] [i_7]))))));
                        }
                    }
                }
            }
        }
    }
    var_11 = var_10;
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 10;i_13 += 1)
    {
        for (int i_14 = 1; i_14 < 8;i_14 += 1)
        {
            {
                arr_66 [i_13] [i_14] [i_13] |= (((((~(arr_1 [i_14 + 1] [i_14])))) & (max(-988681032105380033, 988681032105380032))));
                arr_67 [i_13] = ((-var_2 && (var_8 - var_9)));
            }
        }
    }
    var_12 = ((max(3718307203, 16609583314735427286)));
    #pragma endscop
}
