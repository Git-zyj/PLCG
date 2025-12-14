/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 = var_9;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_21 = var_12;

                    for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_3 - 1] = (max(var_3, (min(var_15, (min(var_18, var_7))))));
                        var_22 = (max(var_22, ((max((min((min(var_2, var_3)), ((min(var_16, var_1))))), (max((min(var_18, var_10)), ((min(64018, -4128))))))))));
                        var_23 = var_1;
                    }
                    for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 3; i_5 < 19;i_5 += 1)
                        {
                            arr_16 [i_4 - 1] [i_4 - 1] [i_2 - 1] [i_1] [i_0] = (min(((max(var_6, (min(var_13, var_14))))), (max((min(var_8, var_6)), (min(var_10, var_17))))));
                            arr_17 [3] [i_0] [i_0] [i_0] [i_0] = (min(var_13, (max((min(var_9, var_8)), var_14))));
                            arr_18 [i_0] [i_0] [i_2 - 2] [i_5 + 1] = var_16;
                            arr_19 [i_0] [i_0] = var_6;
                        }
                        for (int i_6 = 3; i_6 < 20;i_6 += 1)
                        {
                            arr_22 [i_0] [i_0] [i_2] [i_4] [i_2] = var_13;
                            var_24 = (max(var_24, (min(var_13, (max(((min(-7262, var_18))), 9218868437227405312))))));
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_25 = var_6;
                            var_26 = (min(var_26, ((max(var_3, var_2)))));
                            arr_25 [1] [18] = var_10;
                        }
                        for (int i_8 = 1; i_8 < 20;i_8 += 1)
                        {
                            arr_28 [i_0] = var_11;
                            var_27 = (min(((min(((min(32, -124))), (min(254, -78))))), (max((min(var_3, var_16)), (max(var_0, var_10))))));
                            var_28 |= (min(((min((max(var_2, var_5)), (min(119526917, var_18))))), (min(var_6, (max(var_7, var_3))))));
                        }
                        arr_29 [i_0] = (min(var_8, (min((min(var_10, var_0)), var_4))));
                        arr_30 [i_2 + 3] [i_2 + 3] [20] [3] [3] = var_16;
                    }
                }
            }
        }
        var_29 = (min(var_29, ((max((min(((min(var_9, var_1))), (max(var_8, var_9)))), ((min(119526910, 1))))))));
    }
    for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
    {
        arr_35 [i_9] [i_9] = (min((min((min(var_10, var_0)), ((min(var_0, var_5))))), (max((min(var_10, var_5)), ((min(2386069449, 1)))))));
        arr_36 [i_9] = (min(var_8, ((min((min(var_9, var_12)), (min(var_12, var_0)))))));
        var_30 = (max(var_30, ((max((max(((max(var_14, var_13))), (min(var_17, var_1)))), (min((min(var_7, var_15)), ((max(var_1, var_16))))))))));
    }
    for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
    {
        arr_39 [i_10] [i_10] = (min(1465214389, 1));
        arr_40 [i_10] [i_10] = var_6;
    }
    for (int i_11 = 2; i_11 < 21;i_11 += 1)
    {
        arr_43 [i_11 + 1] = (max((min(4175440383, var_8)), var_14));
        arr_44 [i_11 - 1] = max((max(var_2, (min(var_8, var_11)))), var_4);
    }
    var_31 = (min(var_31, var_14));
    #pragma endscop
}
