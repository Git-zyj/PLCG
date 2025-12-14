/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = (max(((var_9 ? (arr_3 [i_0] [i_0]) : var_4)), (((var_5 * (arr_2 [i_0]))))));
                var_12 = (((((-((2987260335 ? (arr_3 [i_0] [9]) : 0))))) ? (((arr_1 [i_0] [i_0]) ? 20 : 472231105)) : (~var_9)));
                var_13 = ((380333759 ? -1 : 0));
            }
        }
    }
    var_14 = var_5;

    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_15 = 0;

        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            var_16 = (((arr_7 [i_2]) ? (((((!-5) < (-32005 != 15))))) : ((-(((arr_9 [i_3] [i_2 + 1] [i_2]) ? 3846208968870193470 : (arr_4 [i_2] [i_2])))))));
            var_17 = (((arr_7 [i_2]) & ((var_10 ? (((arr_1 [0] [i_2]) ? (arr_0 [i_2 + 2] [i_3]) : 0)) : (arr_4 [i_2] [i_2 + 1])))));
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_18 = 4461;
            arr_14 [i_2] [i_4] [i_4] = (arr_2 [i_2]);
            arr_15 [i_2] [i_2] = (((((61074 ? (arr_10 [i_2 - 1] [i_4]) : var_10))) ? ((min(187, 4461))) : (((var_3 + 2147483647) << (((arr_10 [i_2 + 2] [i_2 - 1]) - 1330884411254571688))))));
            arr_16 [i_2] [i_2] = (((~0) | 0));
            var_19 = (min((arr_10 [i_2 + 1] [i_2]), (0 - -2)));
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
        {
            var_20 = ((-(arr_18 [i_2] [i_2])));
            arr_21 [i_2] = (min((min((arr_6 [i_2 + 2]), (arr_6 [i_2 + 2]))), (((arr_6 [i_2 + 2]) ? (arr_6 [i_2 + 2]) : (arr_6 [i_2 - 1])))));
            arr_22 [i_2] [i_5] = (max((((-5 < 0) ? ((0 ? 1 : 4)) : 66)), (((((var_8 ? 17 : 4461))) ? ((69 ? 4487 : 4461)) : ((4461 ? (arr_9 [i_5] [i_5] [13]) : 61074))))));
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
        {
            var_21 = ((1 ? 10 : 9141664156548473521));
            var_22 += (((arr_11 [1]) ? (0 && -11) : (((arr_10 [i_2 - 1] [i_2 - 1]) & var_0))));
        }
        var_23 = 1;
    }
    for (int i_7 = 1; i_7 < 23;i_7 += 1)
    {
        var_24 = (max(61048, 0));
        arr_30 [i_7] [i_7] = var_6;
        var_25 = (~var_0);
        arr_31 [i_7] = var_8;
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        arr_34 [i_8] [1] = (max(1, ((var_9 ? (arr_29 [11]) : (arr_18 [i_8] [i_8])))));
        var_26 = ((+(((arr_18 [i_8] [i_8]) ? (arr_18 [i_8] [i_8]) : (arr_18 [i_8] [i_8])))));
        var_27 = (((arr_18 [i_8] [12]) * (arr_0 [i_8] [i_8])));
    }
    var_28 = 4461;
    #pragma endscop
}
